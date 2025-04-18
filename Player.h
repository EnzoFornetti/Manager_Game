#include <iostream>

#ifndef PLAYER_H
#define PLAYER_H

#include <string>

using namespace std;

class Player
{
private:
    string nome;
    int idade;
    int posicao;
    int overall;

public:
    Player(string nome, int idade, int posicao, int overall);
    string getNome();
    int getIdade();
    int getPosicao();
    int getOverall();
    void printarDados();
};

#endif