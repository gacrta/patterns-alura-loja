﻿# CMakeList.txt: projeto de CMake para patterns-alura-loja, incluir origem e definir
# lógica específica a um projeto aqui.
#
cmake_minimum_required (VERSION 3.8)

# Adicione a origem ao executável deste projeto.
add_executable (patterns-alura-loja "Orcamento.cpp" "Orcamento.hpp" "CalculadoraImpostos.cpp" "ICMS.cpp" "ISS.cpp")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET patterns-alura-loja PROPERTY CXX_STANDARD 20)
endif()

# TODO: Adicione testes e instale destinos, se necessário.
