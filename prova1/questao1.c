#include <stdio.h>

main () {
    int n, a, b, c;
    scanf("%d", &n);
    if (n <= 999) {
        c = n/100;
        n = n%100;
        b = n/10;
        n = n%10;
        printf("%d\n", (n*100)+(b*10)+(c));
    }
    else {
        printf("INVÁLIDO\n");
    }
}