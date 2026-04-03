/*1.4. Desenvolva um programa em C++ que realize a leitura de 10 valores em ponto
flutuante. Fornecer ao fim em tela, o valor mínimo, máximo, e a média. Desenvolver com
arrays.*/
/*chamar um vetor e fazer um loop para atribuir valor a ele*/

#include <iostream>

int main(){
    float numero[10];
    float valor_minimo = 0, valor_maximo = 0, media, calculo_media;

    for(int i = 0; i < 10; i++){
        std::cout << "Digite um numero para preencher a array\n";
        std::cin >> numero[i];
    }

    for(int i = 0; i < 10; i++){
        std::cout << numero[i] <<"\n";
    }

    for(int i = 0; i < 10; i++){
        calculo_media += numero[i];
        
        
        
    }
    media = calculo_media / 10;
    std::cout <<"a media dos numero eh: " << media <<"\n";

    
    for(int i = 0; i < 10; i++){
        if(valor_maximo < numero[i]){
            valor_maximo = numero[i];
        }

        
    }
    std::cout << "O valor maximo eh: "<< valor_maximo <<"\n";
    
    for(int i = 0; i < 10; i++){
        if(numero[0] > numero[1]){
            valor_minimo = numero[0];
        }
        if(numero[i-1] > numero[i]){
            valor_minimo = numero[i];
    }

        
    }
    std::cout << "O valor minimo eh: "<< valor_minimo <<"\n";

}