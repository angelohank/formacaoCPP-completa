#include "titular.h"
#include<iostream>
#include "cpf.h"

Titular::Titular(CPF cpf, std::string nome, std::string senha) : Pessoa(cpf, nome), Autenticavel(senha) {}

