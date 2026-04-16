#include <iostream>
#include <vector>
#include <utility>

using namespace std;

int menu();

int main(){
    vector<pair<string, vector<string>>> lista_de_times;
    pair<string, vector<string>> time;
    int resposta;

    do{
        resposta = menu();
        switch (resposta){
            case 1:{
                time.second.clear();
                cin.ignore();
                cout << "diga o nome do time" << endl;
                getline(cin, time.first);

                int n;
                cout << "Quantos jogadores?" << endl;
                cin >> n;

                for(int i = 0; i < n; i++){
                    cin.ignore();
                    string jogador;
                    cout << "diga o nome do jogador: " << endl;
                    getline(cin, jogador);
                    time.second.push_back(jogador);
                }

                lista_de_times.push_back(time);
                break;
            }
            case 2:
                cout << "Mostrando times..." << endl;
                for(int i = 0; i < (int)lista_de_times.size(); i++){
                    cout << "TIME: [" << lista_de_times[i].first << "]" << endl;
                    for(int j = 0; j < (int)lista_de_times[i].second.size(); j++){
                        cout << "Jogador: [" << lista_de_times[i].second[j] << "]" << endl;
                    }
                }
                break;
            default:
                break;
        }

    }while(resposta != 0);
}

int menu(){
    int resposta;
    cout << "1.Inserir time" << endl;
    cout << "2.Mostrar times" << endl;
    cout << "0.Sair" << endl;
    cin >> resposta;
    return resposta;
}