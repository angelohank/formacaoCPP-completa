#include "catch.h"
#include "leilao.h"
#include "usuario.h"

TEST_CASE("Leilao nao deve receber lances consecutivos do mesmo usuario") {
    //Arrange
    Leilao leilao("Fiat 147 0km");
    Usuario angelo("Ângelo Hank");

    //Act
    Lance primeiroLance(angelo, 1000);
    Lance segundoLance(angelo, 1500);

    leilao.recebeLance(primeiroLance);
    leilao.recebeLance(segundoLance);

    //Assert
    REQUIRE(1 == leilao.recuperaLances().size());
    REQUIRE(1000 == leilao.recuperaLances()[0].recuperaValor());
}

