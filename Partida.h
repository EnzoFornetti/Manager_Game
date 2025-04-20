#include "Team.h"
#include <cstdlib> // rand()
#include <ctime> 

#ifndef PARTIDA_H
#define PARTIDA_H

using namespace std;

class Partida
{
private:
    Team* t1;
    Team* t2;
    Team* vencedor;
    Team* perdedor;
    int placarT1;
    int placarT2;

public:
    ~Partida();
    Partida(Team* t1, Team* t2, int mdx);
    void printarDados();

    Team* getT1();
    Team* getT2();
    Team* getVencedor();
    Team* getPerdedor();
    int getPlacarT1();
    int getPlacarT2();

    void setT1(Team* t);
    void setT2(Team* t);
    void setVencedor(Team* t);
    void setPerdedor(Team* t);
    void setPlacarT1(int p);
    void setPlacarT2(int p);

};

#endif