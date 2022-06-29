#pragma once
#include "cpf.h"
#include <string>
#include "pessoa.h"
#include "diaDaSemana.h"

class Funcionario: public Pessoa
{
public:
    Funcionario(CPF cpf, std::string nome, float salario, DiaDaSemana diaDoPagamento);
    virtual float bonificacao() const = 0;
    float getSalario() const;

private:
    float salario;
    DiaDaSemana diaDoPagamento;
};

