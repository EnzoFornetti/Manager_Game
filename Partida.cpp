#include "Partida.h"

Partida::Partida(Team *t1, Team *t2)
{
    srand(time(0));

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
            this->vencedor = t1;
            this->perdedor = t2;
        }
        else
        {
            this->vencedor = t2;
            this->perdedor = t1;
        }
    }
    else if (t2->getOverall() > t1->getOverall())
    {
        chanceB = baseChance;
        chanceA = 100 - chanceB;
        if (sorteio < chanceB)
        {
            this->vencedor = t2;
            this->perdedor = t1;
        }
        else
        {
            this->vencedor = t1;
            this->perdedor = t2;
        }
    }
    else
    {
        if (sorteio < 50)
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
}

void Partida::printarDados()
{
    cout << "VENCEDOR: " << vencedor->getNome() << endl;
    cout << "PERDEDOR: " << perdedor->getNome() << endl;
}