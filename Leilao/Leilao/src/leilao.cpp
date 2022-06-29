#include "leilao.h"

Leilao::Leilao(std::string descricao): descricao(descricao)
{

}

const std::vector<Lance>& Leilao::recuperaLances() const
{
    return lances;
}

void Leilao::recebeLance(const Lance& lance)
{
    if ((lances.size() == 0) || lances.back().getNomeUsuario() != lance.getNomeUsuario()){
        lances.push_back(lance);
    }

}
