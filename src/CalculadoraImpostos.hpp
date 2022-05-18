#pragma once
#include "Orcamento.hpp"
#include "TipoImposto.hpp"

class CalculadoraImpostos {
public:
	double calcular(const Orcamento& orcamento, TipoImposto tipo) const;
};