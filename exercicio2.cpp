/*1.2. Criar em C++ um programa que implementa o jogo do Cara ou Coroa. Modifique o
enunciado original abaixo, e faça com que a máquina trapaceie e a moeda vire em coroa
com uma probabilidade de 70% de ocorrer.*/
#include <iostream>
#include <cstdlib>
#include <ctime>

int main(){
    int resposta_usuario;
    int resposta_maquina;
    int verificacao;

    std::cout << "Selecione Cara(0) ou Coroa(1)\n";
    std::cin >> resposta_usuario;

    std::srand(std::time(0));

    resposta_maquina = rand()%11;
     
    if(resposta_maquina <= 7){
        verificacao = 1;
        std::cout << "A reposta é coroa\n";
    }else{
        verificacao = 0;
        std::cout << "A reposta é cara\n";
    }   

    if(verificacao == resposta_usuario){
        std::cout << "Parabens, voce ganhou\n";
    }else{
        std::cout << "As derrotas nos fazem vencedores no futuro , tente novamente mais tarde.\n";
    }


    

}