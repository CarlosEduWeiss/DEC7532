#include <iostream>
#include <string>

using namespace std;

class pessoa{
    private:
        string nome;
        size_t idade;
        size_t altura, peso;

    public:
        void setnome(string n){
            getline(cin, n);
            nome = n;
        }
        string getnome(){
            return nome;
        }

};




int main()
{   
    pessoa n;
    string nome;
    n.setnome(nome);

    cout << n.getnome() << endl;


}