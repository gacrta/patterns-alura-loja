#pragma once
#include "Orcamento.hpp"
#include "Imposto.hpp"

class CalculadoraImpostos {
public:
	double calcular(const Orcamento& orcamento, const Imposto& tipo) const;
};