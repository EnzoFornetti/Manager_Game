#ifndef CAMPEONATO_H
#define CAMPEONATO_H

#include "Partida.h"

using namespace std;

class Campeonato
{
protected:
    Team** times;
    int numeroDeTimes;
    string nome;

public:
    virtual ~Campeonato();

    string getNome();
    int getNumeroDeTimes();

    void setNome(string nome);
    virtual void simularRodada() = 0;

};

#endif