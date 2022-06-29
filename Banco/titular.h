#pragma once
#include <string>
#include "pessoa.h"
#include "autenticavel.h"

class Titular : public Pessoa, Autenticavel{

public:
    Titular(CPF CPF, std::string nome, std::string senha);
};
