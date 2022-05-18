#include "ICMS.hpp"

double ICMS::calcular(const Orcamento& orcamento) const {
	return orcamento.getValor() * 0.1;
}