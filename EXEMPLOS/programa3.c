/*********************************************************************************
ESTRUTURAS DE SELE��O E OPERADORES RELACIONAIS
Utiliza��o das estruturas if - else - if e dos operadores maior, menor, igual e diferente.
Carlos E. Carvalho
10/09/2015
*********************************************************************************/

#include <stdio.h>
#include <conio.h>

int main (void){      //In�cio da fun��o principal
       int Num1;        //Vari�vel do tipo inteiro

      printf("Digite um numero: ");                            //Pede um n�mero para o usu�rio
      scanf("%i", &Num1);                                        //Armazena o valor digitado na vari�vel Num1

     if (Num1 == 10){                                                //Se o n�mero digitado for diferente de 10...
            printf("Seu numero e 10 !");                 //Apresenta a mensagem.
     }                                                                          //Fim do se 
     else if (Num1 > 10){                                         //Sen�o se
           printf("Seu numero e maior que 10");        //Apresenta esta outra mensagem
     }                                                                       //Fim do sen�o se
     else{                                                                  //Sen�o
           printf("Seu numero e menor que 10");      //Apresenta outra mensagem
     }
      
     getch();
}      //Fim da fun��o principal
