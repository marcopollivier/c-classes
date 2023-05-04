#include <stdio.h> // standard io - input output 

int main() {

    float precoProduto; // variável
    precoProduto = 10.99;

    printf("O preco do produto e R$ %.2f \n", precoProduto);

    precoProduto = 12.99;

    printf("O preco do produto e R$ %.2f \n", precoProduto); // o valor foi alterado

    return 0;
}
