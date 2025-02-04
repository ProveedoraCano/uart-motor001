# Control de Motor y Servo con Arduino desde el Navegador 🌐🚀

## 🚀 Bienvenidos al repositorio
Este proyecto te permite **controlar un servo motor y un motor DC desde tu navegador** usando un **Arduino** y la **Web Serial API**. Si quieres experimentar con la **programación web**, la **electrónica** y la **comunicación serial**, ¡este proyecto es perfecto para ti!

---

## 📂 Archivos en el Repositorio
- **motor2.html**: Archivo HTML sin formato, simple y funcional.
- **motor1.html**: Archivo HTML con botones y estilos para una interfaz más atractiva.
- **uart-motor.ino**: Sketch de Arduino que recibe los comandos del navegador para controlar los motores.

---

## 🔌 ¿Cómo Funciona?
Este proyecto usa la **Web Serial API** para permitir la comunicación entre un navegador y un **Arduino**, enviando comandos para controlar un **servo motor** y un **motor DC**.

### 🔗 Conexiones
| Componente       | Pin de Arduino |
|-----------------|--------------|
| Servo Motor     | 9            |
| Motor DC (L298N) | 10 y 11      |
| LCD 16x2 (I2C)  | SDA - A4, SCL - A5 |

---

## 🖥️ Instrucciones
### Paso 1: Prepara el Hardware
1. Conecta el **servo motor** al pin **9**.
2. Conecta el **motor DC** al controlador **L298N**.
3. Conecta **IN1** e **IN2** del L298N a los pines **10 y 11**.
4. Conecta la **LCD 16x2** al bus **I2C** (SDA a **A4**, SCL a **A5**).
5. Asegúrate de alimentar el motor con una fuente externa si es necesario.

### Paso 2: Subir el Sketch a Arduino
1. Abre **uart-motor.ino** en el **Arduino IDE**.
2. Conecta el Arduino a tu computadora y selecciona el puerto correcto.
3. Haz clic en **Subir**.

### Paso 3: Abre el Archivo HTML
- Si usas **motor2.html**, solo ábrelo en tu navegador.
- Si prefieres una interfaz más amigable, usa **motor1.html**.
- **Usa Chrome o Edge**, ya que soportan la **Web Serial API**.
- Conéctate al **puerto serial** desde el navegador y **usa los botones** para controlar los motores.

---

## 📜 Funcionalidad
- **Botón Servo Motor**: Gira a **180°** y regresa a su posición inicial.
- **Botón Motor DC**: Gira **en una dirección** por **1 segundo**.
- **Botón Motor DC (opuesto)**: Gira **en la dirección contraria** por **1 segundo**.

---

## 📦 Requisitos
### 🔧 Hardware
- **Arduino Uno o compatible**
- **Servo motor**
- **Motor DC + controlador L298N**
- **Pantalla LCD 16x2 (opcional)**

### 🖥️ Software
- **Arduino IDE**
- **Navegador compatible con Web Serial API (Chrome o Edge)**

---

## ⚙️ Contribuciones
¡Cualquier mejora o sugerencia es bienvenida! Si encuentras errores, abre un **issue** o un **pull request**.

---

## 📝 Licencia
Este proyecto está bajo la licencia **MIT**. Puedes usarlo, modificarlo y compartirlo libremente.

---

# Motor and Servo Control with Arduino from the Browser 🌐🚀

## 🚀 Welcome to the Repository
This project allows you to **control a servo motor and a DC motor from your browser** using **Arduino** and the **Web Serial API**. If you want to explore **web programming, electronics, and serial communication**, this project is for you!

---

## 📂 Repository Files
- **motor2.html**: Simple, unstyled HTML file.
- **motor1.html**: Styled HTML file with buttons for a better UI.
- **uart-motor.ino**: Arduino sketch to control motors via browser commands.

---

## 🔌 How It Works?
This project uses the **Web Serial API** to enable communication between a **web browser** and **Arduino**, sending commands to control a **servo motor** and a **DC motor**.

### 🔗 Connections
| Component       | Arduino Pin |
|----------------|------------|
| Servo Motor    | 9          |
| DC Motor (L298N) | 10 & 11  |
| LCD 16x2 (I2C) | SDA - A4, SCL - A5 |

---

## 🖥️ How to Use
### Step 1: Set Up the Hardware
1. Connect the **servo motor** to pin **9**.
2. Connect the **DC motor** to the **L298N driver**.
3. Connect **IN1 & IN2** of the L298N to **pins 10 & 11**.
4. Connect the **LCD 16x2** to the **I2C bus** (SDA to **A4**, SCL to **A5**).
5. Ensure the **DC motor** has sufficient power from an external source if needed.

### Step 2: Upload the Sketch to Arduino
1. Open **uart-motor.ino** in **Arduino IDE**.
2. Connect Arduino to your PC and select the correct port.
3. Click **Upload**.

### Step 3: Open the HTML File
- If using **motor2.html**, open it in your browser.
- For a better interface, use **motor1.html**.
- **Use Chrome or Edge**, as they support **Web Serial API**.
- **Connect to the serial port** from your browser and use the **buttons** to control the motors.

---

## 📜 Functionality
- **Servo Motor Button**: Moves to **180°** and returns to start.
- **DC Motor Button**: Rotates **in one direction** for **1 second**.
- **DC Motor (opposite) Button**: Rotates **in the opposite direction** for **1 second**.

---

## 📦 Requirements
### 🔧 Hardware
- **Arduino Uno or compatible**
- **Servo motor**
- **DC motor + L298N driver**
- **LCD 16x2 screen (optional)**

### 🖥️ Software
- **Arduino IDE**
- **Web browser with Web Serial API support (Chrome or Edge)**

---

## ⚙️ Contributions
Any improvements or suggestions are welcome! Feel free to open an **issue** or **pull request**.

---

## 📝 License
This project is licensed under the **MIT License**. You are free to use, modify, and share it.
