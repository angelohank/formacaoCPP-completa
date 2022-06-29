#pragma once
#include <string>
#include "titular.h"
#include <utility>

class Conta {
//atributos da classe
private:
    static int numeroDeContas;

public:
    int getNumeroContas();

private:
    std::string numeroConta;
    Titular titular;

protected:
    float saldo;

public:
    //construtor
    Conta(std::string numConta, Titular titular);

    //destrutor
    virtual ~Conta();

    enum resultadoSaque {
        Sucesso, ValorNegativo, SaldoInsuficiente
    };

    std::pair <resultadoSaque, float> sacar(float valorASacar);

    virtual float taxaDeSaque() const = 0; //informando que nessa classe esse m�todo n�o possui implementa��o, mas quem herdar precisa ter. M�todo puramente virtual
    void depositar(float valorADepositar);
    void operator+=(float valorADepositar);
    friend std::ostream& operator<<(std::ostream& cout, const Conta& conta);

    float getSaldo() const;
    std::string getNome() const;
    std::string getCPF() const;
    std::string getNumConta() const;

    void setNumConta(std::string numConta);
    void setSaldo(float valor);


};
