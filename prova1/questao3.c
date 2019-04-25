#include <stdio.h>

main () {
    int dia, mes, ano, biss;
    scanf("%d%d%d", &dia, &mes, &ano);

    if(mes<=12 && dia<=31){
        if(ano>=1900 && ano<=2016){
            if(dia==31){
                if(mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12){
                    printf("%d/%d/%d\n",dia,mes,ano);
                }else{
                    printf("DATA INVALIDA\n");
                }
            }else if(dia == 29 && mes==2){
                if((ano%4==0 && ano%100!=0) || (ano%400==0 &&  ano%100==0)){
                    printf("%d/%d/%d\n",dia,mes,ano);
                }else{
                    printf("DATA INVALIDA");
                }
            }else{
                printf("%d/%d/%d\n",dia,mes,ano);
            }




        }else{
            printf("DATA FORA DO INTERVALO ESTIPULADO\n");
        }
    }else{
        printf("DATA INVALIDA\n");
    }
}