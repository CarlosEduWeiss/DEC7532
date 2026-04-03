/*1.1. Criar um programa em C++ que solicita a idade da pessoa. A saída do programa será:
“Você é muito jovem!”, se possuir menos de 30 anos.*/

#include <iostream>

int main(){ 

    std::cout << "boa noite";
    std::cout << "\n";
    std::cout << "digite sua idade\n";
    int idade;
    std::cin >> idade;

    if(idade < 30){
        std::cout << "voce eh muito nova\n";

    }else{
        std::cout << "voce eh muito velha\n";
    }

}