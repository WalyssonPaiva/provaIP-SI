#include<stdio.h>

main(){
    double hTrab,somBruto = 0,somInss = 0, salHora,DSR,salBruto,salLiq, INSS;
    int codFunc= 0 , hSem;
    scanf("%lf",&hTrab);
    scanf("%d",&codFunc);
    scanf("%d",&hSem);
    do{
        salHora = hSem * (hTrab * 4.5);
        DSR = hSem * (hTrab*0.75);
        salBruto = salHora + DSR;

        if(salBruto<=1659.38){
            INSS = salBruto * 0.08;
        }else if(salBruto>=1659.39 && salBruto<2765.67){
            INSS = salBruto * 0.09;
        }else if(salBruto>=2765.67 && salBruto<=5531.31){
            INSS = salBruto * 0.11;
        }else{
            INSS = 5531.31 * 0.11;
        }
        salLiq = salBruto - INSS;
        somInss += INSS;
        somBruto += salBruto; 
        printf("%d => %.2lf + %.2lf = %.2lf - %.2lf = %.2lf\n", codFunc, salHora, DSR,salBruto, INSS, salLiq);
        scanf("%d%d",&codFunc,&hSem);
    }while(codFunc!=-1);
        printf("SOMA DOS SALARIOS BRUTOS: %.2lf\n", somBruto);
        printf("SOMA DOS INSS: %.2lf\n", somInss);


}