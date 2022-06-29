#ifndef Lance_hpp
#define Lance_hpp
#include "usuario.h"

class Lance
{
private:
    Usuario usuario;
    float valor;
public:
    Lance(Usuario usuario, float valor);
    float recuperaValor() const;
    std::string getNomeUsuario() const;
    Lance(const Lance&) = default; //criando um objeto a partir de outro
};

#endif /* Lance_hpp */
