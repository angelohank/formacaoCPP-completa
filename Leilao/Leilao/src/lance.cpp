#include "lance.h"
#include <iostream>
Lance::Lance(Usuario usuario, float valor): usuario(usuario), valor(valor)
{
}

float Lance::recuperaValor() const
{
    return valor;
}

std::string Lance::getNomeUsuario() const {
    return usuario.recuperaNome();
}

Lance::Lance(const Lance& outroLance) : usuario(outroLance.usuario), valor(outroLance.valor) {
    std::cout << "executando cópia de lance de valor" << std::endl;
}