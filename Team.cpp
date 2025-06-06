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

int Team::getOverall()
{
    return overall;
}

void Team::printarDados()
{
    cout << nome << " - OVERALL: " << overall << endl
         << endl;
    cout << "Jogadores:" << endl
         << endl;
    for (int i = 0; i < MAX_PLAYERS; i++)
    {
        if (roster[i] != nullptr)
        {
            roster[i]->printarDados();
        }
        else
        {
            cout << "- Posicao " << (i + 1) << ": Vazio" << endl
                 << endl;
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

    int media = 0;

    for (int x = 0; x < MAX_PLAYERS; x++)
    {
        if (this->roster[x] != nullptr)
        {
            media += this->roster[x]->getOverall();
        }
    }
    this->overall = media / 5;
}