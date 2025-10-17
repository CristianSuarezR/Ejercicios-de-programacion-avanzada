# 🔢 Cálculo de la Inversa o Pseudo-Inversa de una Matriz en C++

Este programa implementa una función en **C++** que recibe una matriz (arreglo bidimensional) de números decimales introducidos por el usuario y calcula su **matriz inversa** mediante el **método de Gauss-Jordan**.  
En caso de que la matriz **no sea cuadrada**, el programa detecta automáticamente esta condición e indica que se podría calcular una **pseudo-inversa de Moore-Penrose** (no implementada en este ejemplo).  
Si la matriz **no tiene inversa** (determinante nulo o filas linealmente dependientes), el programa informa el motivo.

---

## 🧠 **Metodología del programa**

1. **Entrada de datos:**
   - El usuario ingresa el número de filas y columnas.
   - Luego ingresa los elementos de la matriz directamente por teclado.

2. **Verificación de tipo de matriz:**
   - Se utiliza la función `esCuadrada()` para determinar si el número de filas y columnas coincide.
   - Si no es cuadrada, se detiene el cálculo y se informa al usuario.

3. **Cálculo de la inversa (Gauss-Jordan):**
   - Se aplica el método de **Gauss-Jordan**, que transforma la matriz original en la **matriz identidad**, mientras se aplica la misma secuencia de operaciones a otra matriz identidad para obtener la inversa.
   - Si durante el proceso se encuentra un **pivote igual a 0**, se intenta **intercambiar filas**.  
     Si no es posible, se determina que **la matriz no es invertible**.

4. **Resultados:**
   - Si la matriz es invertible, se imprime su **inversa**.
   - Si no es invertible, el programa muestra una advertencia indicando la causa.

---

## ⚙️ **Estructura del código**

- `imprimirMatriz()`: muestra la matriz en consola.
- `esCuadrada()`: verifica si la matriz es cuadrada.
- `inversaMatriz()`: aplica el método de Gauss-Jordan y devuelve `true` o `false` según si la inversa existe.
- `main()`: controla la entrada de datos, validaciones y salida de resultados.

---

## 💻 **Cómo ejecutar el programa**

### 🔹 Desde **Visual Studio Code**:
1. Guarda el archivo con el nombre `inversadematriz.cpp` en tu carpeta del proyecto.
2. Abre una terminal en VS Code.
3. Compila el programa con:
   ```bash
   g++ inversadematriz.cpp -o inversadematriz.exe
4. ejecuta el archivo:
./inversadematriz.exe
