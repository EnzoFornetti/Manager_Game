#ifndef LIGA_H
#define LIGA_H

#include "Campeonato.h"

using namespace std;

class Liga : public Campeonato
{
private:
    int numeroDeTurnos;
    int mdx;
    Partida** partidasDaRodada;
    int turno;
    int rodada;
    int* vitorias;
    bool** partidasFeitas;
    bool* jogouNessaRodada;

public:
    Liga(string nome, Team** times, int numeroDeTimes, int numeroDeTurnos, int mdx);

    Team** getTimes();

    void simularRodada() override;
    void imprimirTabela();
};

#endif