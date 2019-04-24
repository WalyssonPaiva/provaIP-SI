#include<stdio.h>

main(){
    double rendaB, rendaPerc, salMin;
    int qtdPessoas, tpEscola,etnia=0, L1=0, L2=0, L3=0, L4=0, LX=0;
    salMin = 937.00 * 1.5;

    while(etnia!=-1){
        scanf("%lf%d%d%d",&rendaB,&qtdPessoas,&tpEscola,&etnia);
        rendaPerc = rendaB/qtdPessoas;
    if(etnia!=-1){
         if(tpEscola==2 && rendaPerc<=salMin && etnia==4){
        L1 ++;
        printf("ALUNO COTISTA (L1)\n");
    }else if(tpEscola==2 && rendaPerc<=salMin && (etnia ==1 || etnia ==2 || etnia ==3)){
        L2++;
        printf("ALUNO COTISTA (L2)\n");
    }else if(tpEscola==2 && rendaPerc>salMin && etnia==4){
        L3++;
        printf("ALUNO COTISTA (L3)\n");
    }else if(tpEscola==2 && rendaPerc>salMin && (etnia ==1 || etnia ==2 || etnia ==3)){
        L4++;
        printf("ALUNO COTISTA (L4)\n");
    }else{
        LX++;
        printf("ALUNO NAO COTISTA\n");
    }
    }
   
    }
    printf("TOTAL (L1): %d\n",L1);
    printf("TOTAL (L2): %d\n",L2);
    printf("TOTAL (L3): %d\n",L3);
    printf("TOTAL (L4): %d\n",L4);
    printf("TOTAL NAO COTISTA: %d\n",LX);

}