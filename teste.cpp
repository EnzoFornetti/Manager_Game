#include "Liga.h"


using namespace std;

void teste1()
{

    srand(time(0));

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

    Player *p11 = new Player("FNB", 28, 0, 90);
    Player *p12 = new Player("Yampi", 28, 1, 87);
    Player *p13 = new Player("Aloned", 28, 2, 86);
    Player *p14 = new Player("Matsukase", 28, 3, 84);
    Player *p15 = new Player("Wos", 28, 4, 85);

    Player *p16 = new Player("Guigo", 28, 0, 86);
    Player *p17 = new Player("Aegis", 28, 1, 93);
    Player *p18 = new Player("Grevthar", 28, 2, 85);
    Player *p19 = new Player("Titan", 28, 3, 93);
    Player *p20 = new Player("Jojo", 28, 4, 88);

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
    // t1->printarDados();

    Team *t2 = new Team("LOUD");
    t2->adicionarPlayer(p6);
    t2->adicionarPlayer(p7);
    t2->adicionarPlayer(p8);
    t2->adicionarPlayer(p9);
    t2->adicionarPlayer(p10);
    // t2->printarDados();

    Team *t3 = new Team("Vorax");
    t3->adicionarPlayer(p11);
    t3->adicionarPlayer(p12);
    t3->adicionarPlayer(p13);
    t3->adicionarPlayer(p14);
    t3->adicionarPlayer(p15);
    // t3->printarDados();

    Team *t4 = new Team("Red Canids");
    t4->adicionarPlayer(p16);
    t4->adicionarPlayer(p17);
    t4->adicionarPlayer(p18);
    t4->adicionarPlayer(p19);
    t4->adicionarPlayer(p20);
    // t4->printarDados();

    Team** times = new Team*[4];
    times[0] = t1;
    times[1] = t2;
    times[2] = t3;
    times[3] = t4;

    Liga* cblol = new Liga("CBLOL", times, 4, 2, 1);

    cblol->simularRodada();
    cblol->simularRodada();
    cblol->simularRodada();
    cblol->simularRodada();
    cblol->simularRodada();
    cblol->simularRodada();

    cblol->imprimirTabela();
    
}

void teste2()
{
}
