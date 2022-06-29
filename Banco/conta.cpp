#include "conta.h"
#include <iostream>
#include "titular.h"

int Conta::numeroDeContas = 0;

//constructor
Conta::Conta(std::string numConta, Titular titular):
    numeroConta(numConta),
    titular(titular),
    saldo(0)
{
    numeroDeContas++;
}

//destrutor
Conta::~Conta() {
    numeroDeContas--;
}

std::pair <Conta::resultadoSaque, float> Conta::sacar(float valorASacar) {
    float tarifaDeSaque = valorASacar * taxaDeSaque();
    float valorTotalSaque = valorASacar + tarifaDeSaque;

    if (valorASacar < 0) {
        std::cout << "Nao eh possivel sacar valores negativos!" << std::endl;
        return std::make_pair(ValorNegativo, saldo);
        //return ValorNegativo;
    }

    if(valorTotalSaque > saldo) {
        std::cout << "Saldo insuficiente para transacao." << std::endl;
        return std::make_pair(SaldoInsuficiente, saldo);
        //return SaldoInsuficiente;
    }

    saldo -= valorTotalSaque;
    return std::make_pair(Sucesso, saldo);
    //return Sucesso;
}

void Conta::depositar(float valorADepositar) {
    if (valorADepositar < 0) {
        std::cout << "O valor de deposito deve ser maior que zero." << std::endl;
    }
    else {
        saldo += valorADepositar;
    }
}

void Conta::operator+=(float valorADepositar) {
    depositar(valorADepositar);
}

float Conta::getSaldo() const {
    return saldo;
}

std::string Conta::getNumConta() const {
    return numeroConta;
}

int Conta::getNumeroContas() {
    return numeroDeContas;
}

