#include <iostream>
#include <vector>
#include <utility>


using namespace std;

vector <pair <string, float>> clientes;

int menu();

int main(){
    int resposta;
    int i;
    pair<string, float> p1;



    do{
        resposta = menu();
        switch (resposta)
        {
        case 1:
            cout << "diga o nome e seu salario" << endl;
            cin >> p1.first;
            cin >> p1.second;

            clientes.push_back(p1);

            break;
        case 2:
            for(i = 0; i < clientes.size(); i++){

                cout << clientes[i].first << "---"<< clientes[i].second << endl;
                


            }
            break;
        
        default:
            break;
        }

    }while(resposta != 0);
    

}

int menu(){
    int resposta;

    cout << "1.Inserir cliente" << endl;
    cout << "2.Mostrar cliente" << endl;

    cin >> resposta;

    return resposta;

}   




