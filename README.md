#Control de Motor y Servo con Arduino desde el Navegador 🌐🚀-

¡Bienvenidos al repositorio! Este proyecto te permite controlar un servo motor y un motor DC desde tu navegador usando un Arduino y la Web Serial API. Si quieres experimentar con la programación web, la electrónica y la comunicación serial, ¡este proyecto es perfecto para ti!

🚀 ¿Qué encontrarás aquí?
En este repositorio encontrarás los siguientes archivos para empezar:

motor2.html: Archivo HTML sin formato, simple y funcional. Perfecto si quieres ver el proyecto sin complicaciones.
motor1.html: Archivo HTML con formato, incluye botones y estilos para una interfaz más atractiva y fácil de usar.
uart-motor-ino: El código de Arduino (Sketch) que conecta tu Arduino con los botones del navegador para controlar el motor y el servo.
🔌 ¿Cómo Funciona el Proyecto?
Este proyecto utiliza la Web Serial API para permitir que un navegador web se comunique con un Arduino y le envíe comandos para controlar un servo motor y un motor DC.

Conexiones
Servo Motor: Controlado por el pin 9 de Arduino.
Motor DC: Controlado a través de un controlador L298N, usando los pines 10 y 11 de Arduino.
Pantalla LCD 16x2: Muestra el estado del sistema (siempre que se use en el sketch de Arduino con soporte LCD).
🖥️ Instrucciones para Usar
Paso 1: Prepara el Hardware
Conecta el servo motor al pin 9 del Arduino.
Conecta el motor DC al controlador L298N. Conecta los pines IN1 y IN2 del controlador al pin 10 y pin 11 de Arduino.
Conecta la pantalla LCD 16x2 al bus I2C de Arduino (SDA al pin A4 y SCL al pin A5).
Asegúrate de que el motor DC tenga suficiente alimentación con una fuente externa, si es necesario.
Paso 2: Subir el Sketch al Arduino
Abre el archivo uart-motor-ino en el Arduino IDE.
Conecta tu Arduino a tu computadora y selecciona el puerto correcto en el IDE.
Haz clic en Subir para cargar el código en tu Arduino.
Paso 3: Abre el Archivo HTML
Si usas motor2.html, solo abre el archivo en tu navegador. No tiene formato, pero es funcional.

Si prefieres una interfaz con más estilo, abre motor1.html. Asegúrate de que tu navegador sea compatible con la Web Serial API (se recomienda usar Chrome o Edge).

Conéctate al puerto serial desde tu navegador haciendo clic en el botón correspondiente en el archivo HTML.

Usa los botones en la página web para controlar el servo motor y el motor DC.

📜 Funcionalidad
Botón para el Servo Motor: Al hacer clic, el servo motor girará rápido a 180 grados y luego regresará a su posición inicial.
Botón para el Motor DC: El motor girará en una dirección durante 1 segundo.
Botón para el Motor DC (opuesto): El motor girará en la dirección contraria durante 1 segundo.
📦 Requisitos
Hardware:
Arduino Uno o compatible.
Servo motor.
Motor DC + controlador L298N.
Pantalla LCD 16x2 (opcional, para mostrar el estado).
Software:
Arduino IDE.
Navegador compatible con Web Serial API (recomendado: Chrome o Edge).
⚙️ Contribuciones
Si quieres colaborar o mejorar el proyecto, ¡estarás más que bienvenido! Si encuentras algún error o tienes sugerencias, no dudes en abrir un issue o pull request.

📝 License
Este proyecto está bajo la licencia MIT. Siéntete libre de usar, modificar y compartir.

Motor and Servo Control with Arduino from the Browser 🌐🚀
Welcome to the repository! This project allows you to control a servo motor and a DC motor from your browser using Arduino and the Web Serial API. If you want to experiment with web programming, electronics, and serial communication, this project is perfect for you!

🚀 What’s in the Repo?
In this repository, you’ll find the following files to get you started:

motor2.html: A simple, unstyled HTML file. Perfect if you want to see the project without any hassle.
motor1.html: A styled HTML file with buttons and a neat interface for a better user experience.
uart-motor-ino: The Arduino sketch that connects your Arduino to the browser buttons to control the motor and servo.
🔌 How Does It Work?
This project uses the Web Serial API to allow a web browser to communicate with an Arduino and send commands to control a servo motor and a DC motor.

Connections
Servo Motor: Controlled by pin 9 on the Arduino.
DC Motor: Controlled through an L298N motor driver, using pins 10 and 11 on the Arduino.
LCD 16x2: Displays the system’s status (if used with the Arduino sketch that supports the LCD).
🖥️ Instructions to Use
Step 1: Prepare the Hardware
Connect the servo motor to pin 9 on the Arduino.
Connect the DC motor to the L298N motor driver. Connect IN1 and IN2 of the driver to pins 10 and 11 on the Arduino.
Connect the LCD 16x2 to the I2C bus of the Arduino (SDA to A4 and SCL to A5).
Make sure your DC motor has sufficient power from an external source if needed.
Step 2: Upload the Sketch to Arduino
Open the uart-motor-ino file in the Arduino IDE.
Connect your Arduino to your computer and select the correct port in the IDE.
Click Upload to load the code onto your Arduino.
Step 3: Open the HTML File
If using motor2.html, simply open the file in your browser. It’s unstyled but works fine.

If you prefer a more stylish interface, open motor1.html. Ensure your browser supports the Web Serial API (recommended: Chrome or Edge).

Connect to the serial port from your browser by clicking the appropriate button in the HTML file.

Use the buttons on the webpage to control the servo motor and DC motor.

📜 Functionality
Servo Motor Button: When clicked, the servo motor will quickly rotate to 180 degrees and return to the initial position.
DC Motor Button: The motor will rotate in one direction for 1 second.
DC Motor (opposite) Button: The motor will rotate in the opposite direction for 1 second.
📦 Requirements
Hardware:
Arduino Uno or compatible.
Servo motor.
DC motor + L298N motor driver.
LCD 16x2 screen (optional, for status display).
Software:
Arduino IDE.
Web browser compatible with the Web Serial API (recommended: Chrome or Edge).
⚙️ Contributions
If you'd like to collaborate or improve the project, feel free to do so! If you find any issues or have suggestions, don't hesitate to open an issue or pull request.

📝 License
This project is under the MIT license. Feel free to use, modify, and share.
