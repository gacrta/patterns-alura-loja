#include "ISS.hpp"

double ISS::calcular(const Orcamento& orcamento) const {
	return orcamento.getValor() * 0.06;
}