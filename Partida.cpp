#include "Partida.h"

Partida::Partida(Team *t1, Team *t2, int mdx)
{
    this->t1 = t1;
    this->t2 = t2;
    this->placarT1 = 0;
    this->placarT2 = 0;
    srand(time(0));

    while (this->placarT1 < mdx && this->placarT2 < mdx)
    {
        int diff = abs(t1->getOverall() - t2->getOverall());
        int chance = diff * 3;

        if (chance > 100)
        {
            chance = 100;
        }

        int baseChance = 50 + chance / 2;
        int sorteio = rand() % 100;

        int chanceA = 50, chanceB = 50;

        if (t1->getOverall() > t2->getOverall())
        {
            chanceA = baseChance;
            chanceB = 100 - chanceA;
            if (sorteio < chanceA)
            {
                placarT1++;
            }
            else
            {
                placarT2++;
            }
        }
        else if (t2->getOverall() > t1->getOverall())
        {
            chanceB = baseChance;
            chanceA = 100 - chanceB;
            if (sorteio < chanceB)
            {
                placarT2++;
            }
            else
            {
                placarT1++;
            }
        }
        else
        {
            if (sorteio < 50)
            {
                placarT1++;
            }
            else
            {
                placarT2++;
            }
        }
    }

    if (placarT1 == mdx)
    {
        this->vencedor = t1;
        this->perdedor = t2;
    }
    else
    {
        this->vencedor = t2;
        this->perdedor = t1;
    }
}

void Partida::printarDados()
{
    cout << t1->getNome() << " " << placarT1 << " - " << placarT2 << " " << t2->getNome() << endl;
}

Team *Partida::getT1()
{
    return t1;
}
Team *Partida::getT2(){ return t2; }
Team *Partida::getVencedor() { return vencedor; }
Team *Partida::getPerdedor() { return perdedor; }
int Partida::getPlacarT1() { return placarT1; }
int Partida::getPlacarT2() { return placarT2; }

