#ifndef AVALIADOR_H
#define AVALIADOR_H
#include "leilao.h"
#include "limits.h"

class Avaliador
{
public:
    Avaliador();
    void avalia(Leilao);
    float getMaiorValor() const;
    float getMenorValor() const;
    std::vector<Lance> get3MaioresLances() const;
private:
    float maiorValor = INT_MIN;
    float menorValor = INT_MAX;
    std::vector<Lance> maiores3Lances;
    static bool ordenaLances(const Lance&, const Lance&);
};

#endif // AVALIADOR_H
