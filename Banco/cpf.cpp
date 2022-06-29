#pragma once
#include "cpf.h"
#include <iostream>

CPF::CPF(std::string numero) {
    numero = numero;
}

std::string CPF::getCPF() {
    return numero;
}
