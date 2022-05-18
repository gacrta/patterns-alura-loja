#include "catch.hpp"

#include "Orcamento.hpp"
TEST_CASE("Orcamento")
{
	Orcamento orcamento(1000.0);

	REQUIRE(orcamento.getValor() == 1000.0);
}