
/*1) Criar um sistema de agenda onde seja possível inserir o nome, e o telefone de pessoas.
Criar duas estruturas de dados na forma de array de strings para acomodar cada uma das
informações ou uma struct contendo os arrays de string internamente.
O seguinte menu e suas operações deve ser implementado:
 cout << "Agenda de Contatos da UFxC" << endl;
 cout << "1. Inserir Registro" << endl;
 cout << "2. Remover Registro por Indice" << endl;
 cout << "3. Pesquisar Nomes por Substring" << endl;
 cout << "4. Listar Todos os Registros" << endl;
 cout << "5. Sair do Sistema" << endl;
 cout << "Digite uma das opcoes acima: " << endl;
Opção 1, insere um registro no sistema, solicitando o nome da pessoa com espaço até o
enter ser pressionado (ver getline com string). O telefone da mesma maneira.
Opção 2. remover um registro de determinado valor inteiro, correspondente à posição.
Opção 3. Pesquisar um nome utilizando substrings. Usar o método find() da string.
Opção 4. Listar todos os registros.
Opção 5. Sair do sistema.*/



#include <iostream>
#include <vector>


using namespace std;

struct Agenda {
    vector<string> nomes;
    vector<string> telefones;
};

Agenda agenda;

void inserir() {
    string nome, telefone;
    cout << "Nome: ";
    cin.ignore();
    getline(cin, nome);

    cout << "Telefone: ";
    getline(cin, telefone);

    agenda.nomes.push_back(nome);
    agenda.telefones.push_back(telefone);
}

void remover() {
    int i;
    cout << "Indice: ";
    cin >> i;

    agenda.nomes.erase(agenda.nomes.begin() + i);

    agenda.telefones.erase(agenda.telefones.begin() + i);
}

void pesquisar() {
    string busca;
    cout << "Busca: ";
    cin.ignore();
    getline(cin, busca);

    for (int i = 0; i < (int)agenda.nomes.size(); i++) {
        if (agenda.nomes[i].find(busca) != string::npos)


            cout << "[" << i << "] " << agenda.nomes[i] << " - " << agenda.telefones[i] << endl;
    }
}

void listar() {
    for (int i = 0; i < (int)agenda.nomes.size(); i++)

        cout << "[" << i << "] " << agenda.nomes[i] << " - " << agenda.telefones[i] << endl;
}

void menu() {
    cout << "\nAgenda de Contatos da UFxC" << endl;
    cout << "1. Inserir Registro" << endl;
    cout << "2. Remover Registro por Indice" << endl;
    cout << "3. Pesquisar Nomes por Substring" << endl;
    cout << "4. Listar Todos os Registros" << endl;
    cout << "5. Sair do Sistema" << endl;
    cout << "Digite uma das opcoes acima: " << endl;
}

int main() {
    int opcao;
    do {
        menu();
        cin >> opcao;

        switch (opcao) {
            case 1: inserir();   
                break;
            case 2: remover();   
                break;
            case 3: pesquisar(); 
                break;
            case 4: listar();    
                break;
            case 5: cout << "Saindo..." << endl;
                break;
        }
    } while (opcao != 5);
}