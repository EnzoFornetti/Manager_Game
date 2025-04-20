#ifndef LIGA_H
#define LIGA_H

#include "Campeonato.h"

using namespace std;

class Liga : public Campeonato
{
private:
    int numeroDeTurnos;
    int mdx;
    int turno;
    Partida** partidasDaRodada;
    int turno;
    int rodada;
    int vitorias[];

public:
    Liga(string nome, Team** times, int numeroDeTimes, int numeroDeTurnos, int mdx);

    void simularRodada() override;
};

#endif