# Proyecto: Conversor de Monedas en C

## Descripción

El Conversor de Monedas en C es una aplicación de línea de comandos que permite a los usuarios convertir montos de dinero entre quetzales, dólares y euros utilizando tipos de cambio predefinidos.

## Prerrequisitos

Antes de ejecutar este proyecto, necesitarás tener instalado lo siguiente:

- Un compilador de C (como GCC) para compilar el código.
  
  Para instalar GCC en Ubuntu, puedes ejecutar el siguiente comando en la terminal:

    ```bash
    sudo apt update
    sudo apt install gcc
    ```

## Pasos para su ejecución

1. Abre una terminal en tu sistema Ubuntu.

2. Clona este repositorio en tu máquina local utilizando el siguiente comando:

    ```bash
    git clone https://github.com/tu_usuario/conversor-de-monedas.git
    ```

3. Navega al directorio del proyecto:

    ```bash
    cd conversor-de-monedas
    ```

4. Compila el código fuente utilizando el compilador de C. Puedes usar el siguiente comando:

    ```bash
    gcc conversor.c -o conversor
    ```

5. Ejecuta el programa conversor:

    ```bash
    ./conversor
    ```

6. Sigue las instrucciones que se muestran en la terminal para ingresar la cantidad de dinero, la moneda de origen y la moneda de destino. Por ejemplo:

    ```
    Ingrese la cantidad de dinero: 100.00
    Seleccione la moneda de origen:
    1. Quetzales
    2. Dólares
    3. Euros
    Ingrese su elección: 2
    Seleccione la moneda a la que desea convertir:
    1. Quetzales
    2. Dólares
    3. Euros
    Ingrese su elección: 3
    ```

7. El programa mostrará el resultado de la conversión en la terminal. En este ejemplo:

    ```
    100.00 dólares son 88.00 euros
    ```

¡Listo! Ahora puedes usar el Conversor de Monedas en C para realizar conversiones entre diferentes monedas.

## Datos del autor

- **Nombre**: Fernando Sic
- **Correo electrónico**: fernando.sic@galileo.edu
- **Carnet**: 24000480
