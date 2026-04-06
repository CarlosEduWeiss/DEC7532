/*2) Sobre o exercício apresentado nos slides a01-03, slide 08 e 09. Reimplementar o
mesmo utilizando somente uma única estrutura de dados multidimensional. O vetor
times deve ser eliminado, e o nome do time deve ser armazenado sempre na posição 0 de
cada subvetor, e depois da posição 1 em diante devem ser mostrados os nomes dos
jogadores que compõem o elenco.

Implementar um sistema que permita a inserção, atualização, remoção de times e
jogadores da estrutura de dados. Implementação do Menu é livre.
Extra para pesquisar: o menu deve ter uma opção para impressão em ordem alfabética.
Pesquisar std::sort.*/



#include <iostream>
#include <vector>
#include <algorithm> // para std::sort (extra)

using namespace std;

int menu();

int main()
{
    int resposta;
    int i, j;

    vector<vector<string>> times;

    string nome_time;
    string jogadores_time;
    string pesquisa_jogador_time;
    string substituto;
    string decisao;

    cout << "SEJA BEM VINDO AOS SISTEMA DE GERENCIAMENTO DE TIMES (VAI GRÊMIO)" << endl;
    do {
        cout << "\nMENU INICIAL" << endl;
        resposta = menu();
        switch (resposta)
        {
        case 1:
        {
            // CORREÇÃO: declarar novoTime local ao case para não acumular entre inserções
            vector<string> novoTime;

            cout << "MENU DE INSERÇÃO DE TIMES" << endl;
            cout << "Primeiramente digite o nome do time" << endl;
            getline(cin, nome_time);
            novoTime.push_back(nome_time);

            for (i = 1; i <= 4; i++) {
                cout << "Digite o jogador " << i << ": " << endl;
                getline(cin, jogadores_time);
                novoTime.push_back(jogadores_time);
            }

            times.push_back(novoTime);
            break;
        }

        case 2:
            // CORREÇÃO: iterar sobre `times` (não `time`), e usar times[i].size() no loop interno
            if (times.empty()) {
                cout << "Nenhum time cadastrado." << endl;
                break;
            }
            for (i = 0; i < times.size(); i++) {
                cout << "Time: [" << times[i][0] << "]" << endl;
                for (j = 1; j < times[i].size(); j++) {
                    cout << "  [" << j << "] " << times[i][j] << endl;
                }
            }
            break;

        case 3:
            cout << "MENU DE ATUALIZAÇÃO" << endl;
            cout << "Digite o nome do jogador ou time para atualizar" << endl;
            getline(cin, pesquisa_jogador_time);

            for (i = 0; i < (int)times.size(); i++) {
                // CORREÇÃO: loop interno usa times[i].size(), não times.size()
                for (j = 0; j < (int)times[i].size(); j++) {
                    if (times[i][j] == pesquisa_jogador_time) {
                        if (j == 0)
                            cout << "Time encontrado: " << times[i][j] << endl;
                        else
                            // CORREÇÃO: mensagem correta para jogador encontrado
                            cout << "Jogador encontrado no time \"" << times[i][0] << "\": " << times[i][j] << endl;

                        cout << "Tem certeza que deseja alterar? (sim ou nao)" << endl;
                        getline(cin, decisao);
                        if (decisao != "sim") break;

                        cout << "Deseja substituir por qual nome?" << endl;
                        getline(cin, substituto);
                        times[i][j] = substituto;
                        cout << "Atualizado com sucesso!" << endl;
                    }
                }
            }
            break;

        case 4:
            // CORREÇÃO: implementar remoção (estava vazio)
            cout << "MENU DE REMOÇÃO" << endl;
            cout << "Digite o nome do time ou jogador para remover" << endl;
            getline(cin, pesquisa_jogador_time);

            for (i = 0; i < (int)times.size(); i++) {
                for (j = 0; j < (int)times[i].size(); j++) {
                    if (times[i][j] == pesquisa_jogador_time) {
                        if (j == 0) {
                            // remove o time inteiro
                            times.erase(times.begin() + i);
                            cout << "Time removido com sucesso!" << endl;
                        } else {
                            // remove só o jogador
                            times[i].erase(times[i].begin() + j);
                            cout << "Jogador removido com sucesso!" << endl;
                        }
                        goto fim_remocao; // sai dos dois loops após encontrar
                    }
                }
            }
            cout << "Não encontrado." << endl;
            fim_remocao:
            break;

        case 5:
            // EXTRA: ordenação alfabética por nome do time
            sort(times.begin(), times.end(), [](const vector<string>& a, const vector<string>& b) {
                return a[0] < b[0];
            });
            cout << "Times reordenados alfabeticamente!" << endl;
            // mostra após ordenar
            for (i = 0; i < (int)times.size(); i++) {
                cout << "Time: [" << times[i][0] << "]" << endl;
                for (j = 1; j < (int)times[i].size(); j++) {
                    cout << "  [" << j << "] " << times[i][j] << endl;
                }
            }
            break;

        case 0:
            cout << "Saindo..." << endl;
            return 0;

        default:
            cout << "Resposta inválida" << endl;
            break;
        }
    } while (true);
}

int menu() {
    int resposta;
    cout << "1 - Inserir time"   << endl;
    cout << "2 - Mostrar times"  << endl;
    cout << "3 - Atualizar"      << endl;
    cout << "4 - Remover"        << endl;
    cout << "5 - Ordem alfabetica" << endl;
    cout << "0 - Sair"           << endl;
    cin >> resposta;
    cin.ignore();
    return resposta;
}