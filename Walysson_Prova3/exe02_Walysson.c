#include <stdio.h>

int maiorQK(int *ponteiroV, int n, int k);
main(){
    int n = 0, k;

    while(n>1000 || n<1){ //enquanto N for inválido vai ficar lendo
        scanf("%d", &n);
    }
    int V[n]; //vetor de tamanho n
    int *ponteiroV = V;

    for(int i =0; i<n;i++){
        scanf("%d", &V[i]); //leitura dos elementos do vetor
    }
    scanf("%d", &k); //lendo o k
    printf("%d\n", maiorQK(ponteiroV, n, k));
    
}

int maiorQK(int *ponteiroV, int n, int k){
    int contador = 0;
    for(int i = 0; i<n;i++){
        if(ponteiroV[i]>=k){
            contador++;
        }
    }
    return contador;
}