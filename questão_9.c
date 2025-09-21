#include <stdio.h>

int main() {
    int termo1 = 1, termo2 = 1;
    int proximo_termo;

     printf("Serie de Fibonacci - Primeiros 20 termos:\n\n");
     
    printf("Termo 1: %d\n" , termo1);
    printf("Termo 2: %d\n" , termo2);

    for (int i = 3; i <=20; i ++) {

        proximo_termo = termo1 + termo2;
        printf("Termo %d: %d\n", i, proximo_termo);

        termo1 = termo2;
        termo2 = proximo_termo;
    

    }

    return 0;

}
