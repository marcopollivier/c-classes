#include <stdio.h> // standard io - input output 

#define IMPOSTO 0.18 //constante

int main() {

    float precoProduto; // variável
    
    printf("\tEscreva o valor do produto\n");
    scanf("%f", &precoProduto); //input

    printf("\tValor do produto R$ %.2f \n", precoProduto); //output
    printf("\tValor do imposto %.2f \n", IMPOSTO); //output

    float valorFinal = precoProduto + (precoProduto * IMPOSTO); 

    printf("\tValor + imposto R$ %d \n", 1); //output

    return 0;
}
