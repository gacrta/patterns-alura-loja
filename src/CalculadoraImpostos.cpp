#include "CalculadoraImpostos.hpp"

double CalculadoraImpostos::calcular(const Orcamento& orcamento, TipoImposto tipo) const
{
	switch (tipo)
	{
	case TipoImposto::ICMS:
		return orcamento.getValor() * 0.1;
	case TipoImposto::ISS:
		return orcamento.getValor() * 0.06;
	default:
		return 0;
	}
	return 0.0;
}
