#include "Team.h"
#include <cstdlib> // rand()
#include <ctime> 

#ifndef PARTIDA_H
#define PARTIDA_H

using namespace std;

class Partida
{
private:
    Team* vencedor;
    Team* perdedor;

public:
    ~Partida();
    Partida(Team* t1, Team* t2);
    void printarDados();

};

#endif