#include <stdio.h>

int main() {
    
    int bubble[5] = {3, 5, 1, 2, 4};

    // for(int posicao; ) {
    // }
    
    if(bubble[1] > bubble[2]) {
        printf("A posição 1 é maior que a posição 2");
        int auxiliar = bubble[1];
        bubble[1] = bubble[2];
        bubble[2] = auxiliar;

        printf("o que está na posição 1 é %d e o que está na posição 2 é %d", bubble[1], bubble[2]);
    } else {
        printf("A posição 1 é menor que a posição 2");
    }


    return 0;
}


// int main() {

//     int gols = 0;
//     while(gols < 5) {
//         printf("O jogo está acontecendo [w]\n");
//         gols = gols + 1;
//     }


//     for(int gols = 0; gols < 5; gols++) {
//         printf("O jogo está acontecendo [f]\n");
//     }


    
//     return 0;
// }