#include "usuario.h"

Usuario::Usuario(std::string nome): nome(nome)
{
}

std::string Usuario::recuperaNome() const
{
    return nome;
}

std::string Usuario::getPrimeiroNome() const {
    //criando uma string que vai do começo do nome até o primeiro espaço
    return nome.substr(0, nome.find(' '));
}
