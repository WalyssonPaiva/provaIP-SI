#include <stdio.h>

main () {
    int preg1, preg2, preg3, preg4;
    scanf("%d%d%d%d", &preg1, &preg2, &preg3, &preg4);

    if (preg1 > 0 && preg2 > 0 && preg3 > 0 && preg4 > 0) {

        if (preg1 > 30) 
            printf("Nivel C,");
        else if (preg1 <= 30 && preg1 >= 15)
            printf("Nivel B,");
        else 
            printf("Nivel A,");
        

        if (preg1 > preg2 && preg1 > preg3 && preg1 > preg4) {
            printf(" velocidade %d\n", preg1);
        }
        else if (preg2 > preg1 && preg2 > preg3 && preg2 > preg4) {
            printf(" velocidade %d\n", preg2);
        }
        else if (preg3 > preg1 && preg3 > preg2 && preg3 > preg4) {
            printf(" velocidade %d\n", preg3);
        }
        else {
            printf(" velocidade %d\n", preg4);
        }
    }
    else {
        printf("Grupo invalido\n");
    }
}