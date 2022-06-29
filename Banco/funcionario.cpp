#include "funcionario.h"

Funcionario::Funcionario(CPF cpf, std::string nome, float salario, DiaDaSemana diaDoPagamento):
    Pessoa(cpf, nome), salario(salario), diaDoPagamento(diaDoPagamento)
{
}
float Funcionario::getSalario() const {
    return salario;
}
