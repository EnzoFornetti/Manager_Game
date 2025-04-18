#include "Player.h"

#ifndef TEAM_H
#define TEAM_H

#define MAX_PLAYERS 5

using namespace std;

class Team
{
private:
    string nome;
    Player** roster;

public:
    ~Team();
    Team(string nome);
    Player** getRoster();
    string getNome();
    void printarDados();
    void adicionarPlayer(Player* player);
};

#endif