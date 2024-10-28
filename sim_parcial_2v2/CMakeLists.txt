# Especifica la versión mínima de CMake requerida
cmake_minimum_required(VERSION 3.10)

# Define el nombre del proyecto
project(ProyectoCosmeticos)

# Establece el estándar de C++
set(CMAKE_CXX_STANDARD 17)

# Incluye el directorio de headers
include_directories(include)

# Agrega todos los archivos .cpp en la carpeta src y main.cpp
file(GLOB SOURCES "src/*.cpp" "main.cpp")

# Define el ejecutable
add_executable(ProyectoCosmeticos ${SOURCES})