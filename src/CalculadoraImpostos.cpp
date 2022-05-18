#include "CalculadoraImpostos.hpp"

double CalculadoraImpostos::calcular(const Orcamento& orcamento, const Imposto& imposto) const
{
	return imposto.calcular(orcamento);
}
