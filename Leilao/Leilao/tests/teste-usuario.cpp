#include "catch.h"
#include "usuario.h"

TEST_CASE("Usuario deve saber informar seu primeiro nome") {
    //Arrange
    Usuario usuario("Ângelo Hank");

    //Act
    std::string primeiroNome = usuario.getPrimeiroNome();

    //Assert
    REQUIRE("Ângelo" == primeiroNome);
}
