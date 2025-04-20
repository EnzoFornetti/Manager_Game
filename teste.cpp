#include "Partida.h"
#include <cstdlib> // rand()
#include <ctime>   // time()

using namespace std;
void simularPartida(int pontosA, int pontosB);

void teste1()
{
    Player *p1 = new Player("Brtt", 45, 3, 98);
    Player *p2 = new Player("Luci", 25, 4, 83);
    Player *p3 = new Player("Tinowns", 28, 2, 93);
    Player *p4 = new Player("Robo", 27, 0, 81);
    Player *p5 = new Player("CarioK", 24, 1, 87);

    Player *p6 = new Player("Tay", 28, 0, 84);
    Player *p7 = new Player("Don Arts", 26, 1, 80);
    Player *p8 = new Player("Dynquedo", 26, 2, 87);
    Player *p9 = new Player("Dudstheboy", 26, 3, 86);
    Player *p10 = new Player("Ceos", 26, 4, 91);

    // p1->printarDados();
    // p2->printarDados();
    // p3->printarDados();
    // p4->printarDados();
    // p5->printarDados();

    Team *t1 = new Team("Pain Gaming");
    t1->adicionarPlayer(p1);
    t1->adicionarPlayer(p2);
    t1->adicionarPlayer(p4);
    t1->adicionarPlayer(p3);
    t1->adicionarPlayer(p5);
    t1->printarDados();

    Team *t2 = new Team("LOUD");
    t2->adicionarPlayer(p6);
    t2->adicionarPlayer(p7);
    t2->adicionarPlayer(p8);
    t2->adicionarPlayer(p9);
    t2->adicionarPlayer(p10);
    t2->printarDados();

    Partida* partida1 = new Partida(t1, t2);

    partida1->printarDados();
}

void teste2()
{
}
