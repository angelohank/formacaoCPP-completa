#include "contapoupanca.h"
#include <iostream>

ContaPoupanca::ContaPoupanca(std::string numConta, Titular titular) :
    Conta(numConta, titular)
{
}

float ContaPoupanca::taxaDeSaque() const{
    return 0.03;
}

