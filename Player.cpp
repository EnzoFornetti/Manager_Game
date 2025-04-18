#include "Player.h"

Player::Player(string nome, int idade, int posicao, int overall)
{
    this->nome = nome;
    this->idade = idade;
    this->overall = overall;

    if (posicao >= 0 && posicao < 5)
    {
        this->posicao = posicao;
    }
    else
    {
        cout << "Posicao invalida" << endl;
    }
}

string Player::getNome()
{
    return nome;
}

int Player::getIdade()
{
    return idade;
}
int Player::getPosicao()
{
    return posicao;
}

void Player::printarDados()
{
    cout << "Nome: " << nome << endl;
    cout << "Idade: " << idade << " anos" << endl << endl;
}