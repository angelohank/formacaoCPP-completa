#pragma once
#include "cpf.h"
#include <iostream>

class Pessoa {

protected:
    CPF cpf;
    std::string nome;

public:
    Pessoa(CPF cpf, std::string nome);
    void verificaTamanhoDoNome();
    std::string getNome() const;
};

