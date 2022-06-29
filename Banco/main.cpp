// banco_v1.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
#include "conta.h"
#include "contapoupanca.h"
#include "contacorrente.h"
#include "titular.h"
#include "funcionario.h"
#include "gerente.h"
#include "diaDaSemana.h"
using namespace std;

void realizaSaque(Conta& conta) {
    //std::pair<Conta::resultadoSaque, float> resultado = conta.sacar(200);
    auto resultado = conta.sacar(200);

    if (resultado.first == Conta::Sucesso) {
        cout << "Novo saldo da conta: " << resultado.second << endl;
    }
}

void fazerLogin(Autenticavel& alguem, string senha) {
    if (alguem.autentica(senha)) {
        cout << "Login realizado com sucesso" << endl;
    }
    else {
        cout << "Login bloqueado" << endl;
    }
}

ostream& operator <<(ostream& cout, const Conta& conta) {
    return cout;
}

int main()
{
    Titular titular(CPF("09475072993"), "Ângelo", "123");
    Titular titular2(CPF("000000001"), "Vinicius", "321");
    Titular titular3(CPF("111111111"), "Gabriel", "456");

    ContaPoupanca conta("0001", titular);
    ContaCorrente conta2("0002", titular2);
    ContaCorrente conta3("0003", titular3);

    conta2.depositar(1000);
    cout << "conta 2: " << conta2.getSaldo() << endl;
    realizaSaque(conta2);
    //conta2.sacar(200);
    cout << "conta 2: " << conta2.getSaldo() << endl;
    conta2.transferencia(conta, 250);
    cout << "conta 2: " << conta2.getSaldo() << endl;


    conta.depositar(1000);
    (Conta&)conta+=(300);
    cout << "conta 1: " << conta.getSaldo() << endl;
    realizaSaque(conta);
    //conta.sacar(200);
    cout << "conta 1: " << conta.getSaldo() << endl;


    cout << "numero de contas: " << conta.getNumeroContas() << endl;

    Gerente gerente(CPF("09475072993"), "Angelo", 1500, DiaDaSemana::Terca, "1234");

    conta3 += conta2;
    cout << conta3.getSaldo() << endl;
    return 0;
}
