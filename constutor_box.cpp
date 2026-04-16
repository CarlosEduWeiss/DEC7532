#include <iostream>
#include <vector>

using namespace std;

class Box
{
    private:
        float m_comp, m_altura, m_largura;

    public:
        Box(){};
        Box(float c, float a, float l)
        {
            m_comp = c;
            m_altura = a;
            m_largura = l;
        }
        void set_c(float c){
            m_comp = c;
        }
        void set_a(float a){
            m_altura = a;
        }
        void set_l(float l){
            m_largura = l;

        }
        float get_c(){
            return m_comp;
        }
        float get_a(){
            return m_altura;
        }
        float get_l(){
            return m_largura;
        }

};

int menu();

vector<Box> lista_de_caixas;


int main()
{
    float comprimento, altura , largura;

    Box caixa(comprimento, altura, largura);
    int resposta;
    float comprimento, altura, largura;

    do
    {
        resposta = menu();

        switch (resposta)
        {
        case 1:
            cout << "diga o comprimento"<< endl;
            cin >> comprimento;

            cout << "diga a altura" << endl;
            cin >> altura;

            cout << "diga a largura" << endl;
            cin >> largura;

            lista_de_caixas.push_back(caixa);
            
            break;
        
        default:
            break;
        }


    } while (resposta != 0);
    



}

int menu(){
    int resposta;
    cout << "1.cadastrar" << endl;
    cout << "2.imprimir lista" << endl;
    cout << "sair" <<endl;

    cin >> resposta;

    return resposta;

}