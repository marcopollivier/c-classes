#include <stdio.h> // standard io - input output 

#define IMPOSTO 0.18 //constante

int main() {

    float precoProduto; // variável
    precoProduto = 10.99;

    printf("Nota fiscal \n");    
    printf("\tValor do produto R$ %.2f \n", precoProduto);    
    printf("\tValor do imposto R$ %.2f \n", IMPOSTO);



    return 0;
}
