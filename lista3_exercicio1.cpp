/*1) Criar um sistema conforme o menu abaixo, para a inserção de números inteiros e a
respectiva organização dos mesmos para inserção, busca, e remoção. Utilizar vetores
unidimensionais.
O seguinte menu e suas operações deve ser implementado:
 cout << endl;
 cout << "UFSC Numeric Manager System (int)" << endl;
 cout << "---------------------------------" << endl;
 cout << "1-Insert a Value" << endl;
 cout << "2-Show Value by Index" << endl;
 cout << "3-Show All" << endl;
 cout << "4-Search a Number (show all occurences)" << endl;
 cout << "5-Remove by Index" << endl;
 cout << "0-Exit" << endl;
Opção 1. Insere um valor inteiro no vetor, sempre na última posição do mesmo.
Opção 2. Mostrar o conteúdo de determinado índice do vetor.
Opção 3. Mostrar todas as posições seguidas pelos seus valores.
Opção 4. Procurar por um número no vetor, e mostrar todas as suas ocorrências e índices.
Opção 5. Remover por índice um elemento do vetor.*/


#include <iostream> 
#include <vector>   

using namespace std;

int menu();

int main()
{
    int resposta;
    int passe;
    int passe1;
    int passe2;
    int passe3;
    int i;
    vector<int> valor;
    do{
        resposta = menu();

        switch (resposta)
        {
        case 1:
            cout << "digite um valor: " << endl;
            cin >> passe; 
            cin.ignore();

            valor.push_back(passe);

            break;
        case 2: 
            cout << "Digite o indice do valor que quer encontrar";
            cin >> passe1;
            cin.ignore();
            for(i = 0; i < valor.size(); i++){
                if(passe1 == i){
                    cout <<"["<< i <<" ]" << "O valor eh: " << valor[passe1] << endl;
                }else{
                    cout << "Indice valido" << endl;

            }
        }

            break;
        case 3: 
            for(i = 0; i < valor.size(); i++){
                cout << "["  << i << " ]" << "[" << valor[i] << " ]" << endl;
            }
            break;
        case 4:
            cout << "Digite o indice do valor que quer encontrar";
            cin >> passe2;
            cin.ignore();
            for(i = 0; i < valor.size() ; i++)
                if(valor[i] == passe2){
                    cout <<"[" << i << " ]" << "[" << valor[i] <<" ]"<<endl;
                }
        case 5: 
            cout << "Digite o indice do valor que quer remover";
            cin >> passe3;
            cin.ignore();
            for(i = 0; i < valor.size(); i++){
                if(passe3 == i){
                    valor.erase(valor.begin() + passe3);
            }
        }
                
                break;
        default:
            break;
        }


    }while (resposta != 0);




}

int menu(){

    int resposta;
    
    cout << endl;
    cout << "UFSC Numeric Manager System (int)" << endl;
    cout << "---------------------------------" << endl;
    cout << "1-Insert a Value" << endl;
    cout << "2-Show Value by Index" << endl;
    cout << "3-Show All" << endl;
    cout << "4-Search a Number (show all occurences)" << endl;
    cout << "5-Remove by Index" << endl;
    cout << "0-Exit" << endl;
    cin >> resposta;
    cin.ignore();
    

    return resposta;

}