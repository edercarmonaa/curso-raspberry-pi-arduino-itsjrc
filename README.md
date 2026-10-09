# curso-raspberry-pi-arduino-itsjrc

Repositorio del curso de Raspberry Pi y Arduino impartido en 2020 para profesores del [Instituto Tecnológico Superior de Juan Rodríguez Clara](https://itsjrc.edu.mx/web/).
El material integra fundamentos de Linux, programación con Python, control GPIO, comunicación con Arduino y prácticas con sensores, actuadores y módulos electrónicos.

---

## 📁 Estructura del Repositorio

```text
.
├── Ejercicios/                     # Ejercicios guiados con código Python, Arduino, diagramas Fritzing e imágenes de conexión.
│   ├── ejercicio-01/               # Primeras prácticas con Arduino, LED RGB y diagramas de conexión.
│   ├── ejercicio-02/               # Control de LED RGB desde Raspberry Pi con Python.
│   ├── ejercicio-03/ ... 18/       # Sensores, actuadores, entradas digitales, salidas digitales y módulos electrónicos.
├── Practicas/                      # Prácticas integradoras con scripts, sketches, esquemas e imágenes de referencia.
│   ├── practica-01/ ... 09/        # Actividades de laboratorio para Raspberry Pi, Arduino y componentes externos.
├── Librerias/                      # Bibliotecas y componentes requeridos para Arduino, Raspberry Pi y Fritzing.
│   ├── arduino/                    # Librerías Arduino para sensores y módulos.
│   ├── fritzing/                   # Partes Fritzing para diagramas electrónicos.
│   └── raspberrypi/                # Librerías Python para Raspberry Pi.
├── serial-01/                      # Ejemplo de comunicación serial entre Raspberry Pi y Arduino.
├── Raspberry Pi y Arduino.pptx     # Presentación principal del curso.
├── Kit Basico Raspberry PI.xlsx    # Lista de componentes y material de apoyo.
├── LICENSE                         # Licencia de uso del material educativo.
└── README.md                       # Documentación principal del repositorio.
```

## 📚 Contenido y Módulos

### 1. Introducción, instalación y puesta en marcha

- Introducción a Raspberry Pi, Arduino y electrónica básica.
- Instalación del sistema operativo, configuración inicial y preparación del entorno de trabajo.
- Material principal en `Raspberry Pi y Arduino.pptx` y componentes de referencia en `Kit Basico Raspberry PI.xlsx`.

### 2. Linux, comandos básicos y programación en Python

- Uso de terminal, navegación por archivos, ejecución de comandos y administración básica del sistema.
- Programación en Raspberry Pi con Python para control de entradas, salidas y periféricos.
- Ejemplos disponibles en `Ejercicios/`, `Practicas/` y scripts `.py`.

### 3. Puerto GPIO y comunicación Raspberry Pi-Arduino

- Manejo del puerto GPIO para lectura de entradas digitales y control de salidas.
- Comunicación entre Raspberry Pi y Arduino mediante ejemplos seriales.
- Material relacionado en `serial-01/`, sketches `.ino`, scripts `.py` y diagramas `.fzz`.

### 4. Sensores, actuadores y módulos electrónicos

- Prácticas con Leds RGB, Push Button, Matriz de Leds, sensor ultrasónico HC-SR04 y sensor DHT11.
- Control de Motor DC, Motor a Pasos 28BYJ-48, Micro Servomotor SG90 y pantalla OLED 128x64 0.96.
- Recursos de apoyo en `Librerias/`, `Ejercicios/` y `Practicas/`.

## 🛠️ Requisitos Previos

- **Hardware / Entorno:** Raspberry Pi, Arduino, tarjeta microSD, fuente de alimentación, protoboard, cables Dupont, resistencias, LEDs, botones, sensores, motores y módulos electrónicos incluidos en el kit del curso.
- **Software / Herramientas:** Raspberry Pi OS, Raspberry Pi Imager, Python 3, Arduino IDE, Fritzing, terminal Linux, Git y librerías incluidas en `Librerias/`.
- **Conocimientos recomendados:** Conceptos básicos de electrónica, programación estructurada, uso de terminal, lectura de diagramas de conexión y fundamentos de entradas/salidas digitales.

## 🚀 Cómo Empezar

1. **Clonar el repositorio:**

   ```bash
   git clone https://github.com/edercarmonaa/curso-raspberry-pi-arduino-itsjrc.git
   cd curso-raspberry-pi-arduino-itsjrc
   ```

2. **Explorar el material:** Revisa `Raspberry Pi y Arduino.pptx` para seguir la secuencia del curso, consulta `Kit Basico Raspberry PI.xlsx` para identificar los componentes y navega por `Ejercicios/` y `Practicas/` para estudiar los ejemplos de laboratorio.

3. **Ejecutar ejemplos o scripts:** Desde una Raspberry Pi con Python 3 y las dependencias necesarias instaladas, ejecuta un ejemplo de la carpeta correspondiente:

   ```bash
   cd Ejercicios/ejercicio-02
   python3 ejercicio-02.py
   ```

   Para ejemplos de Arduino, abre el archivo `.ino` correspondiente desde Arduino IDE y carga el sketch en la placa:

   ```bash
   cd serial-01
   ```

## 📝 Licencia

Este material se distribuye bajo la licencia **Creative Commons Atribución-NoComercial-CompartirIgual 4.0 Internacional (CC BY-NC-SA 4.0)**. Para conocer los términos completos de uso, consulte el archivo [`LICENSE`](LICENSE).
