/*********************************************************************************
ESTRUTURAS DE REPETI��O - FOR
Receber 4 notas de um aluno e mostrar a m�dia.
Carlos E. Carvalho
06/02/18
*********************************************************************************/

#include <stdio.h>
#include <conio.h>

int main (void){      //In�cio da fun��o principal
       int i;                 //Vari�veis do tipo inteiro
       float nota=0, media=0;        

       //Repete 4 vezes, do 0 at� o 3.
       for(i=0; i < 4; i++){  //In�cio do for
            printf("Digite a sua nota:\n");
            scanf("%f", &nota);
      
            media = nota + media;            //Soma as notas
       }    //Final do for

        media = media/i;                        //Calcula a media

        printf("Media: %.2f.", media);

       getch();

}      //Fim da fun��o principal
