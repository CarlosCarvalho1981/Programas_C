/***********************************************************************************************************************************
EXEMPLO DE UTILIZAÇÃO DE VETOR.
ORDENAR UM VETOR DE 10 POSIÇÕES EM ORDEM CRESCENTE.
CARLOS E. CARVALHO
04/07/2016
****************************************************************************************************************************************/
#include<stdio.h>
#include<conio.h>

int main (){ //INÍCIO DA FUNÇÃO PRINCIPAL
    int i, X,j,Numeros[10];
    //Numeros[10] é um vetor com 10 posições para números inteiros
    
    for(i=0;i<10;i++){//REPETE 10 VEZES PARA PEGAR OS 10 NÚMEROS
        printf("Digite um numero para a posicao %i: ", i);
        scanf("%i", &Numeros[i]);
    }//FIM PARA
    
    //ORDENA
    for(i=0;i<10;i++){
        for(j=i+1;j<10;j++){
            if(Numeros[i]>Numeros[j]){//SE O NÚMERO ATUAL É MENOR DO QUE O PRÓXIMO NÚMERO
                X=Numeros[i];
                Numeros[i]=Numeros[j];    //FAZ A TROCA
                Numeros[j]=X;   
            }   //FIM SE
        }
    }//FIM PARA
    
    //APRESENTA OS NÚMEROS EM ORDEM CRESCENTE
    for(i=0;i<=9;i++){
        printf("\nNumero %i: %i.", i, Numeros[i])   ;
    }
    getch();
}//FIM DA FUNÇÃO PRINCIPAL
