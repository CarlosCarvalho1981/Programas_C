/*********************************************************************************
OPERADORES MATEM�TICOS
Utilizar vari�veis e operadores matem�ticos.
Carlos E. Carvalho
10/09/2015
*********************************************************************************/

#include <stdio.h>
#include <conio.h>

int main (void){      //In�cio da fun��o principal
       float Num1, Num2, Result;        //Vari�veis do tipo real
     
       int Modulo, N1, N2;                   //Vari�veis do tipo inteiro

      printf("Digite o primeiro numero: ");      //Pede o primeiro n�mero
      scanf("%f", &Num1);                             //Armazena na vari�vel Num1

        printf("Digite o segundo numero: ");                      //Pede o primeiro n�mero
        scanf("%f", &Num2);                                             //Armazena na vari�vel Num2

        Result = Num1 + Num2;                                        //Faz a soma dos dois n�meros

        printf("\n%.2f + %.2f = %.2f", Num1, Num2, Result);      //Apresenta o resultado


        Result = Num1 - Num2;                                        //Faz a subtra��o dos dois n�meros

        printf("\n%.2f - %.2f = %.2f", Num1, Num2, Result);      //Apresenta o resultado

        Result = Num1 * Num2;                                        //Faz a multiplica��o dos dois n�meros

        printf("\n%.2f * %.2f = %.2f", Num1, Num2, Result);      //Apresenta o resultado

        Result = Num1 / Num2;                                        //Faz a divis�o dos dois n�meros

        printf("\n%.2f  / %.2f = %.2f", Num1, Num2, Result);      //Apresenta o resultado

         printf("\nDigite um numero inteiro:");   //Pede um n�mero para o usu�rio
         scanf("%i", &N1);                               //Armazena na vari�vel N1
         printf("Digite outro numero inteiro: ");  //Pede mais um n�mero inteiro
         scanf("%i", &N2);                                  //Armazena na vari�vel N2    

         Modulo = N1%N2;                                 //Calcula o resto da divis�o entre os dois n�meros

       printf("Resto da divisao: %i.", Modulo);  //Mostra o resto da divis�o


        getch();                                                                    //Mant�m a janela aberta
      
}      //Fim da fun��o principal
