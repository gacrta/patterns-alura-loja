﻿# CMakeList.txt: projeto de CMake para patterns-alura-loja, incluir origem e definir
# lógica específica a um projeto aqui.
#
cmake_minimum_required (VERSION 3.8)

include_directories("../src")

# Adicione a origem ao executável deste projeto.
add_executable (patterns-alura-loja-tests "main-test.cpp" "orcamento-test.cpp" "calculadora-tests.cpp")

target_sources (patterns-alura-loja-tests PUBLIC
	"${PROJECT_SOURCE_DIR}/src/Orcamento.cpp"
	"${PROJECT_SOURCE_DIR}/src/ICMS.cpp"
	"${PROJECT_SOURCE_DIR}/src/ISS.cpp"
	"${PROJECT_SOURCE_DIR}/src/CalculadoraImpostos.cpp")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET patterns-alura-loja-tests PROPERTY CXX_STANDARD 20)
endif()

# TODO: Adicione testes e instale destinos, se necessário.
