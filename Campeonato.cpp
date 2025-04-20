#include "Campeonato.h"

Campeonato::~Campeonato()
{
}

string Campeonato::getNome()
{
    return nome;
}

int Campeonato::getNumeroDeTimes()
{
    return numeroDeTimes;
}

void Campeonato::setNome(string nome)
{
    this->nome = nome;
}