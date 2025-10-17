# 📏 Programa: Cálculo de Normas L2 y L∞ de un Vector

## 📘 Descripción
Este programa en C++ permite calcular dos tipos de normas de un vector de números decimales ingresado por el usuario:  
- **Norma L2 (Euclidiana):** mide la magnitud del vector considerando la raíz cuadrada de la suma de los cuadrados de sus componentes.  
- **Norma L∞ (Infinita):** representa el valor absoluto máximo entre todos los elementos del vector.

El usuario define el tamaño del vector, ingresa los valores, y el programa muestra los resultados con una precisión de 4 decimales.

---

## 🧠 Metodología de Solución
Para resolver el problema se siguió una metodología **modular y matemática**, dividida en los siguientes pasos:

1. **Análisis del problema:**  
   Se identificó la necesidad de implementar funciones que calcularan diferentes tipos de normas vectoriales según las fórmulas matemáticas conocidas.

2. **Diseño de la solución:**  
   Se implementaron dos funciones independientes:
   - `normaL2()` para la **norma euclidiana**, que calcula la raíz cuadrada de la suma de los cuadrados de los elementos.  
   - `normaLinf()` para la **norma infinita**, que encuentra el valor absoluto máximo en el vector.  
   Este enfoque modular facilita la reutilización del código y mejora su legibilidad.

3. **Implementación:**  
   - Se usó la librería `<vector>` para almacenar los datos ingresados por el usuario.  
   - Se incluyó `<cmath>` para usar las funciones `sqrt()` y `fabs()`.  
   - Se agregó `<iomanip>` para controlar el formato y precisión de la salida en pantalla.  
   - Se verificó que el tamaño del vector fuera positivo antes de procesar los datos.

4. **Pruebas y validación:**  
   Se realizaron pruebas con diferentes valores para comprobar que las normas L2 y L∞ se calculan correctamente, incluyendo casos con números negativos.

---

## ⚙️ Cómo ejecutar el programa

### 🔧 Requisitos previos
- Tener instalado un **compilador de C++** (como `g++` o el entorno de Visual Studio Code con las extensiones de C++).
- Contar con el archivo del programa, por ejemplo:  
  `normas_vectores.cpp`

### 🖥️ Pasos de ejecución (desde la terminal o Git Bash)

1. **Abrir la carpeta del proyecto**
   ```bash
   cd ruta/del/proyecto
2. Compilar el programa
   ```bash
   g++ normas_vectores.cpp -o normas_vectores.exe
3.Ejecutar el programa
 ```bash
./normas_vectores.exe
