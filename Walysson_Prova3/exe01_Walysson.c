#include <stdio.h>

main(){
    int n;
    scanf("%d", &n);
    int vetor[n];

    for(int i =0; i<n;i++){ //definindo os valores do vetor
        scanf("%d",&vetor[i]);
    }
    //ordenando o vetor em ordem crescente
    int auxiliar;
    for(int i = 0; i<n-1;i++){
        if(vetor[i]>vetor[i+1]){
            auxiliar = vetor[i+1];
            vetor[i+1] = vetor[i];
            vetor[i] = auxiliar;
            i = -1;
        }
    }

    //imprimindo os pares
    for(int i = 0; i<n;i++){
        if(vetor[i]%2==0)
            printf("%d\n",vetor[i]);
    }


    //ordenando em ordem decrescente
  for(int i = 0; i<n-1;i++){
        if(vetor[i]<vetor[i+1]){
            auxiliar = vetor[i+1];
            vetor[i+1] = vetor[i];
            vetor[i] = auxiliar;
            i = -1;
        }
    }

     //imprimindo os impares
    for(int i = 0; i<n;i++){
        if(vetor[i]%2!=0)
            printf("%d\n",vetor[i]);
    }
}