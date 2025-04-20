#include "Liga.h"

Liga::Liga(string nome, Team **times, int numeroDeTimes, int numeroDeTurnos, int mdx)
{
    this->setNome(nome);
    this->numeroDeTurnos = numeroDeTurnos;
    this->mdx = mdx;
    turno = 1;
    rodada = 0;
    this->partidasDaRodada = nullptr;
    vitorias[numeroDeTimes];

    this->times = new Team *[numeroDeTimes];
    for (int i = 0; i < numeroDeTimes; i++)
    {
        this->times[i] = times[i];
    }
    this->numeroDeTimes = numeroDeTimes;
}

void Liga::simularRodada()
{
    if (turno > numeroDeTurnos)
    {
        cout << "\nTodos os turnos foram concluídos.\n";
        return;
    }

    cout << "\n🔁 Turno " << turno << " - Rodada " << (rodada + 1) << "\n";

    this->partidasDaRodada = new Partida *[numeroDeTimes / 2];

    for (int x=0; x < numeroDeTimes/2; x++)
    {
        partidasDaRodada[x] = new Partida(times[x],times[x + 1], mdx);
        
    }
}