#include "catch.hpp"
#include "CalculadoraImpostos.hpp"
#include "Orcamento.hpp"
#include "TipoImposto.hpp"

TEST_CASE("Calculadora de Impostos")
{
	Orcamento orcamento(100.0);
	CalculadoraImpostos calculadora;

	SECTION("ICMS")
	{
		double valorImposto = calculadora.calcular(orcamento, TipoImposto::ICMS);

		REQUIRE(valorImposto == 10.0);
	}

	SECTION("ISS")
	{
		double valorImposto = calculadora.calcular(orcamento, TipoImposto::ISS);

		REQUIRE(valorImposto == 6.0);
	}
}