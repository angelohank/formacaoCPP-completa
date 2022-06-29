#pragma once
#include "conta.h"
class ContaCorrente final : public Conta
{
public:
    ContaCorrente(std::string numConta, Titular titular);
    float taxaDeSaque() const override;
    void transferencia(Conta& contaDestino, float valor);
    void operator+=(ContaCorrente& contaOrigem);
};

