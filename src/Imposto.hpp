#pragma once
#include "Orcamento.hpp"

class Imposto {
public:
	virtual double calcular(const Orcamento& orcamento) const = 0;
};