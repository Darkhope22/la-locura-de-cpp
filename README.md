# <p align="center"><img src="assets/C++-Logo.png" alt="Logo C++" width="300"></p>

## <p Align="center">APRENDIENDO C++</p>

El objetivo de este repositorio es subir mis avances mientras estudio, practico y aprendo el lenguaje C++
mediante el desarrollo de pequeños ejemplos prácticos de complejidad baja-media.

### Metodología de Aprendizaje

Estoy siguiendo el enfoque de aprender haciendo, desarrollando pequeños ejemplos prácticos y experimentando con diferentes características del lenguaje.

### Estructura del Repositorio

Todos los archivos fuente del proyecto se encuentran en la carpeta `src`. A continuación se listan los archivos disponibles al momento:

- `practica-1.cpp`: Ejemplo práctico donde creo una funcionalidad similar al "console" de Javascript mediante el uso de Programación Orientada a Objetos. (Actualmente en desarrollo)

### Guía de Configuración y Ejecución

A continuación se detallan los pasos necesarios para configurar el entorno y ejecutar el proyecto en diferentes sistemas operativos:

#### Instalación de un Compilador

##### Windows

1. Descarga e instala MinGW, un entorno de desarrollo para Windows que incluye el compilador GCC.
   - Puedes encontrar MinGW en [sourceForge](https://sourceforge.net/projects/mingw/).

2. Selecciona la opción *mingw32-gcc-g++*. Puedes hacerlo haciendo clic derecho sobre esta opción y seleccionando *'Mark for installation'*.

3. Ingresa a la pestaña *Installation* y aplica los cambios seleccionando *'Apply Changes'*

##### Linux (Basados en Debian, como Ubuntu)

- Abre una terminal y ejecuta los siguientes comandos para instalar el compilador GCC:

    ``` bash
        sudo apt-get install build-essential -y
    ```

#### Comprobación de la instalación

Una vez realizada la instalación (Windows o Linux) comprueba que ésta se realizó correctamente ejecutando el comando

```bash
    g++ --version
```

si obtienes una respuesta similar a la siguiente:

*g++.exe (MinGW.org GCC-6.3.0-1) 6.3.0
Copyright (C) 2016 Free Software Foundation, Inc.*

Tienes todo listo para comenzar.

#### Descarga de Git

En caso de que aún no lo tengas instalado, sigue los siguientes pasos:

##### Sistemas Windows

- Ingresa a la web oficial de [Git](https://git-scm.com/), descarga e inicia el instalador y sigue los pasos que te aparecen (No es necesario configurar nada, puedes hacer click en **siguiente** hasta finalizar las configuraciones)

##### Linux (Basados en Debian)

- Ejecuta el siguiente comando en una terminal

    ```bash
        sudo apt-get install git -y
    ```

#### Descarga del Repositorio

1. Clona este repositorio en tu máquina local utilizando Git. Abre una terminal y ejecuta el siguiente comando:

    ```bash
    git clone https://github.com/Darkhope22/la-locura-de-cpp.git
    ```

#### Compilación y Ejecución

1. Navega hasta la carpeta del proyecto clonado:

    ```bash
        cd la-locura-de-cpp/src
    ```

2. Compila el archivo fuente de tu interes utilizando el compilador de la siguiente manera:

    - En Windows con MinGW: `g++ -o nombre-del-fichero.exe nombre-del-fichero.cpp`
    - En Linux con GCC: `g++ -o nombre-del-fichero nombre-del-fichero.cpp`

3. Ejecuta el programa compilado:

    - En Windows: `./nombre-del-fichero.exe`
    - En Linux: `./nombre-del-fichero`

**NOTA:**
    En linux, es posible que no te permita ejecutar el programa compilado, para ello debes darle permiso de ejecución de la siguiente manera:

```bash
    sudo chmod +X nombre-del-fichero
```

### Recursos Recomendados para Aprender C++

Si estás buscando aprender C++, aquí tienes algunos recursos recomendados que podrían ser útiles. Ten en cuenta que estos recursos son solo **recomendaciones** y su inclusión aquí no implica que serán utilizados específicamente en este proyecto.

- [Curso de Fundamentos de C++ en Español (Youtube)](https://youtube.com/playlist?list=PLWtYZ2ejMVJlUu1rEHLC0i_oibctkl0Vh&si=7bpTDXV0eyGr7Xgu): Este curso creado por [Programación ATS](https://youtube.com/@ProgramacionATS) cubre los fundamentos de C++ desde lo básico hasta conceptos como Programación Orientada a Objetos (POO), Manejo de Archivos y Estructuras de Datos. Es ideal para principiantes debido a la gran cantidad de ejercicios que se realizan a lo largo del curso.

- [Tutorial de C++ en Inglés (W3Schools)](https://www.w3schools.com/cpp/default.asp): [W3Schools](https://www.w3schools.com/) es una plataforma educativa en línea ampliamente reconocida que ofrece recursos de aprendizaje sobre una variedad de temas de programación y desarrollo web. Su tutorial de C++ proporciona una introducción completa al lenguaje gracias a sus explicaciones claras y ejemplos prácticos.
