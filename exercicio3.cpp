/*1.3. Uma máquina conta moedas e calcula o montante total disponível de dinheiro. Fazer
um programa em C++ que lê a quantidade de moedas de 1, 10, 25 e 50 centavos, e
calcula o montante.*/


/*  - criar um um looping com switch case pedindo para pedir quais e quantas moedas quer adicionar  
   */

    #include <iostream>

    float banco = 0;
    int opcao;

    int menu();
    int somador();

    int main(){
        do{   
            opcao = menu();
            switch (opcao)
            {
            case 1:
                banco += 0.01;               
                break;
            case 2: 
                banco += 0.10;  
                break;
            case 3:
                banco += 0.25;  
                break;
            case 4:
                banco += 0.50;
                break;
                  
            case 5:
                std::cout << "O valor do seu banco eh: " << banco << "\n";
                break;
            case 0: 
                break;

            default:
                break;
            }
     
        } while (opcao != 0);
   }


   int menu(){
    std::cout << "olá seja muito bem vindo ao sistema de conta moedas\n";
    std::cout << "Selecione quais moedas você quer adicionar ao seu banco\n";
    std::cout << "Quero adicionar R$:0,01 (1)\n";
    std::cout << "Quero adicionar R$:0,10 (2)\n";
    std::cout << "Quero adicionar R$:0,25 (3)\n";
    std::cout << "Quero adicionar R$:0,50 (4)\n";
    std::cout << "Quero ver meu saldo! (5)\n";
    std::cout << "Quero sair do programa (0)\n";
    std::cout << "Digite as o número correspondente com as moedas que queira adicionar\n";
    std::cin >> opcao;

    return opcao;

   }
 