#include "contacorrente.h"
#include <iostream>

ContaCorrente::ContaCorrente(std::string numConta, Titular titular):
    Conta(numConta, titular)
{
}

float ContaCorrente::taxaDeSaque() const {
    return 0.05;
}

void ContaCorrente::transferencia(Conta& contaDestino, float valor) {
    Conta::resultadoSaque resultado = sacar(valor).first;

    if (resultado == Sucesso) {
        contaDestino.depositar(valor);
    }
    else if (resultado == ValorNegativo) {
        std::cout << "Valor negativo" << std::endl;
    }
}

void ContaCorrente::operator+=(ContaCorrente &contaOrigem) {
    contaOrigem.transferencia(*this, contaOrigem.getSaldo()/2);
}
