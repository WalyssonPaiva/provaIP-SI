#include <stdio.h>
int inverte(int n);
int SeparaDigitos(int numero, int posicao);

main(){
    int T, a, b;
    scanf("%d",&T);
    for(int i = 0; i<T;i++){
        scanf("%d", &a);
        scanf("%d", &b);

        a = inverte(a); //auto explicativo né
        b = inverte(b);

        if(a>b) //vê qual numero fica maior de forma invertida
            printf("%d\n", a);
        else
            printf("%d\n", b);
    }
}

int inverte(int n){ //só inverte o numero, sei lá
    int digito1 = SeparaDigitos(n,1);
    int digito2 = SeparaDigitos(n,2);
    int digito3 = SeparaDigitos(n,3);

    return (digito3*100) + (digito2*10) + digito1;
}
int SeparaDigitos(int numero, int posicao){ //pega o digito da posição informada
    if(posicao == 1){
       return (int) numero/100; 
    } else if(posicao ==2){
        return (int) (numero%100)/10;
    }else if(posicao == 3){
        return (int) (numero%100)%10;
    }
}