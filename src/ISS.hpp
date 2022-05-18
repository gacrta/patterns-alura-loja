#pragma once
#include "Imposto.hpp"
#include "Orcamento.hpp"

class ISS final : public Imposto {
public:
	double calcular(const Orcamento& orcamento) const override;
};