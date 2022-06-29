#pragma once
#include "conta.h"

class ContaPoupanca final : public Conta
{

public:
    ContaPoupanca(std::string numConta, Titular titular);
    float taxaDeSaque() const override;
};

