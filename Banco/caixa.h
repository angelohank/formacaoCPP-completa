#pragma once
#include "funcionario.h"
#include "diaDaSemana.h"

class Caixa final : public Funcionario
{
public:
    Caixa(CPF cpf, std::string nome, float salario, DiaDaSemana diaDoPagamento);
    float bonificacao();
};
