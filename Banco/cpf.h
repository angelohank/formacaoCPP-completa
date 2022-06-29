#pragma once
#include <iostream>

class CPF {

public:
    explicit CPF(std::string numero);

    std::string getCPF();

private:
    std::string numero;
};
