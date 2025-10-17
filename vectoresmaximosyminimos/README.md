# 🧮 Programa: Búsqueda de Valores Máximo y Mínimo en un Arreglo

## 📘 Descripción
Este programa en C++ permite ingresar un conjunto de números decimales y determina el **valor máximo y mínimo**, junto con sus respectivas **posiciones dentro del arreglo**. El usuario define la cantidad de elementos, los ingresa manualmente, y el programa realiza el análisis de forma automática.

---

## 🧠 Metodología de Solución
Para resolver el problema se siguió una metodología **estructurada y modular**, basada en los siguientes pasos:

1. **Análisis del problema:**  
   Se identificó que era necesario recorrer un arreglo de números decimales y comparar cada elemento para encontrar los valores máximo y mínimo junto con sus posiciones.

2. **Diseño de la solución:**  
   Se diseñó una **función separada (`encontrarMaxMin`)** que recibe el vector y devuelve, mediante parámetros por referencia, los valores y posiciones requeridos. Esta técnica permite mantener el código principal (`main`) limpio y fácil de entender.

3. **Implementación:**  
   - Se utilizó la clase `vector<double>` de la biblioteca estándar de C++ para manejar arreglos de tamaño dinámico.  
   - Se inicializan las variables de máximo y mínimo con el primer elemento del vector.  
   - Se recorre el vector comparando cada elemento para actualizar el máximo y el mínimo según corresponda.

4. **Pruebas y validación:**  
   Se verificó el funcionamiento con diferentes conjuntos de números para confirmar que el programa devuelve correctamente los valores extremos y sus posiciones.

---

## ⚙️ Cómo ejecutar el programa

### 🔧 Requisitos previos
- Tener instalado un **compilador de C++** (como `g++` o el entorno de Visual Studio Code con extensiones C++).
- Contar con el archivo del programa, por ejemplo:  
  `vectoresmaxmin.cpp`

### 🖥️ Pasos de ejecución (desde la terminal o Git Bash)

1. **Abrir la carpeta del proyecto**}
   ```bash
   cd ruta/del/proyecto
2. Compilar el programa
   ```bash
   g++ vectoresmaxmin.cpp -o vectoresmaxmin.exe
3. Ejecutar el programa:
   ```bash
   ./vectoresmaxmin.exe

  
