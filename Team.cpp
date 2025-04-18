#include "Team.h"

Team::Team(string nome)
{
    this->nome = nome;
    roster = new Player *[MAX_PLAYERS];
    for (int i = 0; i < MAX_PLAYERS; i++)
    {
        roster[i] = nullptr;
    }
}

Team::~Team()
{
    for (int i = 0; i < MAX_PLAYERS; i++)
    {
        if (roster[i] != nullptr)
        {
            delete roster[i];
        }
    }
    delete[] roster;
}

Player **Team::getRoster()
{
    return roster;
}

string Team::getNome()
{
    return nome;
}

void Team::printarDados()
{
    cout << "Time: " << nome << endl << endl;
    cout << "Jogadores:" << endl;
    for (int i = 0; i < MAX_PLAYERS; i++)
    {
        if (roster[i] != nullptr)
        {
            cout << "- Jogador " << (i + 1) << ": ";
            roster[i]->printarDados();
        }
        else
        {
            cout << "- Posicao " << (i + 1) << ": Vazio" << endl << endl;
        }
    }
}

void Team::adicionarPlayer(Player *player)
{

    if (roster[player->getPosicao()] != nullptr)
    {
        cout << "Jogador removido do time " << this->getNome() << ":" << endl;
        roster[player->getPosicao()]->printarDados();
        delete roster[player->getPosicao()];
    }

    roster[player->getPosicao()] = player;
}