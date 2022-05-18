#include "Orcamento.hpp"

Orcamento::Orcamento(double valor) : valor{ valor }
{
}

double Orcamento::getValor() const {
	return valor;
}