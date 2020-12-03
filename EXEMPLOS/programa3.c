/*********************************************************************************
ESTRUTURAS DE SELEÇÃO E OPERADORES RELACIONAIS
Utilização das estruturas if - else - if e dos operadores maior, menor, igual e diferente.
Carlos E. Carvalho
10/09/2015
*********************************************************************************/

#include <stdio.h>
#include <conio.h>

int main (void){      //Início da função principal
       int Num1;        //Variável do tipo inteiro

      printf("Digite um numero: ");                            //Pede um número para o usuário
      scanf("%i", &Num1);                                        //Armazena o valor digitado na variável Num1

     if (Num1 == 10){                                                //Se o número digitado for diferente de 10...
            printf("Seu numero e 10 !");                 //Apresenta a mensagem.
     }                                                                          //Fim do se 
     else if (Num1 > 10){                                         //Senão se
           printf("Seu numero e maior que 10");        //Apresenta esta outra mensagem
     }                                                                       //Fim do senão se
     else{                                                                  //Senão
           printf("Seu numero e menor que 10");      //Apresenta outra mensagem
     }
      
     getch();
}      //Fim da função principal
