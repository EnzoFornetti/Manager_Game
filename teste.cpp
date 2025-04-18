#include "Team.h"

using namespace std;

void teste1()
{
    Player *p1 = new Player("Brtt", 45, 3, 88);
    Player *p2 = new Player("Luci", 25, 4, 83);
    Player *p3 = new Player("Tinowns", 28, 2, 93);
    Player *p4 = new Player("Robo", 27, 0, 81);
    Player *p5 = new Player("CarioK", 24, 1, 87);
    Player *p6 = new Player("Matsukaze", 28, 3, 80);

    // p1->printarDados();
    // p2->printarDados();
    // p3->printarDados();
    // p4->printarDados();
    // p5->printarDados();

    Team *t1 = new Team("Pain Gaming");
    // t1->adicionarPlayer(p6);
    t1->adicionarPlayer(p1);
    t1->adicionarPlayer(p2);
    t1->adicionarPlayer(p4);
    t1->adicionarPlayer(p3);
    t1->adicionarPlayer(p5);
    t1->printarDados();
}

void teste2()
{
}