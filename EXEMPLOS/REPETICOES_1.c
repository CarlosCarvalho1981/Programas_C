/*********************************************************************************
ESTRUTURAS DE REPETIÇÃO - FOR
Receber 4 notas de um aluno e mostrar a média.
Carlos E. Carvalho
06/02/18
*********************************************************************************/

#include <stdio.h>
#include <conio.h>

int main (void){      //Início da função principal
       int i;                 //Variáveis do tipo inteiro
       float nota=0, media=0;        

       //Repete 4 vezes, do 0 até o 3.
       for(i=0; i < 4; i++){  //Início do for
            printf("Digite a sua nota:\n");
            scanf("%f", &nota);
      
            media = nota + media;            //Soma as notas
       }    //Final do for

        media = media/i;                        //Calcula a media

        printf("Media: %.2f.", media);

       getch();

}      //Fim da função principal
