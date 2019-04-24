#include <stdio.h>
#include <math.h>
main(){
    int n;
    double s;
    scanf("%d",&n);
    if(n<=3){
        printf("Numero invalido!\n");
    }else{
        for(int i =1;i<=n;i++){
            s += n/pow(i,2);
        }
        printf("%.5lf\n",s);
    }
}