#pragma once
#include "funcionario.h"
#include "autenticavel.h"
#include "diaDaSemana.h"
class Gerente final : public Funcionario, Autenticavel
{
public:
    Gerente(CPF cpf, std::string nome, float salario, DiaDaSemana diaDoPagamento, std::string senha);
    float bonificacao() const;
};

