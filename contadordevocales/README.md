# Contador de Vocales en C++

## 📘 Descripción

Este programa en C++ permite contar el número total de vocales que contiene una cadena de texto ingresada por el usuario.  
El objetivo es practicar el manejo de **cadenas de caracteres**, **estructuras de control** y el uso básico de **funciones** en C++.

---

## ⚙️ Metodología

1. **Entrada de datos:**  
   El programa solicita al usuario que ingrese una cadena de texto por consola.  
   Se utiliza `getline(cin, texto)` para permitir el ingreso de frases completas (incluyendo espacios).

2. **Recorrido de la cadena:**  
   Se recorre cada carácter del texto mediante un bucle `for` o `while`, analizando uno a uno los caracteres.

3. **Comparación y conteo:**  
   Cada carácter se compara con las vocales tanto en mayúsculas como en minúsculas (`a, e, i, o, u, A, E, I, O, U`).  
   Si coincide con alguna vocal, se incrementa un contador.

4. **Salida de resultados:**  
   Al final, se muestra el total de vocales encontradas en la cadena.

---

## 🧮 Ejemplo de funcionamiento

**Entrada:**
hola mundo 

**Salida:**
La frase contiene 4 vocales.

---

## 🖥️ Instrucciones de ejecución

1. Descarga los archivos todos en una carepta yAbre la carpeta del proyecto en **VS Code**.  
2. Asegúrate de tener instalado el compilador de C++ (como **MinGW** o **MSVC**).  
3. Abre el archivo `contadordevocales.cpp`.  
4. Compila el programa desde la terminal integrada:
   //bash 
   g++ contadordevocales.cpp -o contadordevocales
5.Ejecuta el programa: ./contadordevocales
