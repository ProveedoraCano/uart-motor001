#include <Servo.h>
#include <LiquidCrystal_I2C.h>  // Librería para el control de la LCD con I2C

Servo servoMotor;
const int motorPin1 = 10;
const int motorPin2 = 11;

// Crear un objeto de la clase LiquidCrystal con la dirección del I2C y el tamaño de la pantalla (16x2)
LiquidCrystal_I2C lcd(0x27, 16, 2);  // Dirección 0x27 es común para pantallas LCD I2C 16x2

void setup() {
  // Inicialización del puerto serial para la comunicación
  Serial.begin(9600);  // Inicia la comunicación serial a 9600 baudios

  // Inicialización de la pantalla LCD
  lcd.init();  // Inicializa la pantalla LCD
  lcd.backlight();  // Enciende la luz de fondo de la pantalla

  // Configura los pines del motor
  pinMode(motorPin1, OUTPUT);
  pinMode(motorPin2, OUTPUT);

  // Configura el servomotor
  servoMotor.attach(9);

  // Mensaje inicial en la pantalla LCD
  lcd.clear();  // Limpia la pantalla
  lcd.print("Esperando ...");
}

void loop() {
  if (Serial.available() > 0) {
    String command = Serial.readStringUntil('\n');  // Lee el comando desde el puerto serial
    command.trim();  // Elimina los espacios en blanco extra

    // Dependiendo del comando recibido, realiza la acción correspondiente
    if (command == "S1") {
      lcd.clear();
      lcd.print("Servo: Gira 180°");
      servoMotor.write(180);  // Mueve el servo a 180 grados
      delay(1000);  // Espera 1 segundo
      servoMotor.write(0);  // Vuelve a la posición 0 grados
      delay(1000);  // Espera 1 segundo antes de aceptar otro comando
      lcd.clear();
      lcd.print("Esperando comando...");
    } 
    else if (command == "M+1") {
      lcd.clear();
      lcd.print("Motor: Adelante");
      digitalWrite(motorPin1, HIGH);
      digitalWrite(motorPin2, LOW);  // Motor gira en una dirección
      delay(1000);  // Motor gira durante 1 segundo
      digitalWrite(motorPin1, LOW);
      digitalWrite(motorPin2, LOW);  // Detenemos el motor
      lcd.clear();
      lcd.print("Esperando ...");
    } 
    else if (command == "M-1") {
      lcd.clear();
      lcd.print("Motor: Atras");
      digitalWrite(motorPin1, LOW);
      digitalWrite(motorPin2, HIGH);  // Motor gira en dirección contraria
      delay(1000);  // Motor gira durante 1 segundo
      digitalWrite(motorPin1, LOW);
      digitalWrite(motorPin2, LOW);  // Detenemos el motor
      lcd.clear();
      lcd.print("Esperando ...");
    } 
    else {
      lcd.clear();
      lcd.print("Comando no");
      lcd.setCursor(0, 1);  // Mueve el cursor a la segunda línea
      lcd.print("reconocido");
      delay(2000);  // Muestra el mensaje por 2 segundos
      lcd.clear();
      lcd.print("Esperando ...");
    }
  }
}
