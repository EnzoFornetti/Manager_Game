#include "Liga.h"

Liga::Liga(string nome, Team **times, int numeroDeTimes, int numeroDeTurnos, int mdx)
{
    this->setNome(nome);
    this->numeroDeTurnos = numeroDeTurnos;
    this->mdx = mdx;
    turno = 1;
    rodada = 0;
    this->numeroDeTimes = numeroDeTimes;

    this->times = new Team *[numeroDeTimes];
    for (int i = 0; i < numeroDeTimes; i++)
    {
        this->times[i] = times[i];
    }

    vitorias = new int[numeroDeTimes];
    for (int i = 0; i < numeroDeTimes; i++)
    {
        vitorias[i] = 0;
    }

    partidasFeitas = new bool *[numeroDeTimes];
    for (int i = 0; i < numeroDeTimes; i++)
    {
        partidasFeitas[i] = new bool[numeroDeTimes];
        for (int j = 0; j < numeroDeTimes; j++)
        {
            partidasFeitas[i][j] = false;
        }
    }

    partidasDaRodada = nullptr;
}

void Liga::simularRodada()
{
    if (turno > numeroDeTurnos)
    {
        cout << endl << "Todos os turnos foram concluídos." << endl;
        return;
    }

    if (rodada >= numeroDeTimes - 1)
    {
        rodada = 0;
        turno++;
        partidasFeitas = new bool *[numeroDeTimes];
        for (int i = 0; i < numeroDeTimes; i++)
        {
            partidasFeitas[i] = new bool[numeroDeTimes];
            for (int j = 0; j < numeroDeTimes; j++)
            {
                partidasFeitas[i][j] = false;
            }
        }
    }

    bool *jogouNessaRodada = new bool[numeroDeTimes];
    for (int i = 0; i < numeroDeTimes; i++)
    {
        jogouNessaRodada[i] = false;
    }

    cout << endl << "Turno " << turno << " - Rodada " << (rodada + 1) << endl;

    if (partidasDaRodada != nullptr)
    {
        for (int i = 0; i < numeroDeTimes / 2; i++)
        {
            delete partidasDaRodada[i];
        }
        delete[] partidasDaRodada;
    }

    partidasDaRodada = new Partida *[numeroDeTimes / 2];
    int partidasCriadas = 0;

    for (int x = 0; x < numeroDeTimes; x++)
    {
        if (!jogouNessaRodada[x])
        {
            for (int y = x + 1; y < numeroDeTimes; y++)
            {
                if (!jogouNessaRodada[y] && !partidasFeitas[x][y])
                {
                    partidasDaRodada[partidasCriadas] = new Partida(times[x], times[y], mdx);
                    jogouNessaRodada[x] = true;
                    jogouNessaRodada[y] = true;
                    partidasFeitas[x][y] = true;
                    partidasFeitas[y][x] = true;

                    if (partidasDaRodada[partidasCriadas]->getVencedor() == times[x])
                    {
                        this->vitorias[x]++;
                    }
                    else
                    {
                        this->vitorias[y]++;
                    }

                    partidasCriadas++;
                    break;
                }
            }
        }
    }

    for (int z = 0; z < partidasCriadas; z++)
    {
        partidasDaRodada[z]->printarDados();
    }

    rodada++;
    delete[] jogouNessaRodada;
}

void Liga::imprimirTabela()
{
    cout << "\n TABELA DE CLASSIFICACAO\n";
    cout << "----------------------------------------\n";

    Team **ranking = new Team*[numeroDeTimes];
    int *pontos = new int[numeroDeTimes];

    for (int i = 0; i < numeroDeTimes; i++)
    {
        ranking[i] = times[i];
        pontos[i] = vitorias[i];
    }

    for (int i = 0; i < numeroDeTimes - 1; i++)
    {
        int melhor = i;
        for (int j = i + 1; j < numeroDeTimes; j++)
        {
            if (pontos[j] > pontos[melhor])
                melhor = j;
        }

        if (melhor != i)
        {
            int auxPts = pontos[i];
            pontos[i] = pontos[melhor];
            pontos[melhor] = auxPts;

            Team* auxTime = ranking[i];
            ranking[i] = ranking[melhor];
            ranking[melhor] = auxTime;
        }
    }

    for (int i = 0; i < numeroDeTimes; i++)
        cout << ranking[i]->getNome() << " - " << pontos[i] << endl;

    cout << "----------------------------------------\n";

    delete[] ranking;
    delete[] pontos;
}

Team **Liga::getTimes()
{
    return times;
}
