/*********************************************************************************
OPERADORES MATEMÁTICOS
Utilizar variáveis e operadores matemáticos.
Carlos E. Carvalho
10/09/2015
*********************************************************************************/

#include <stdio.h>
#include <conio.h>

int main (void){      //Início da função principal
       float Num1, Num2, Result;        //Variáveis do tipo real
     
       int Modulo, N1, N2;                   //Variáveis do tipo inteiro

      printf("Digite o primeiro numero: ");      //Pede o primeiro número
      scanf("%f", &Num1);                             //Armazena na variável Num1

        printf("Digite o segundo numero: ");                      //Pede o primeiro número
        scanf("%f", &Num2);                                             //Armazena na variável Num2

        Result = Num1 + Num2;                                        //Faz a soma dos dois números

        printf("\n%.2f + %.2f = %.2f", Num1, Num2, Result);      //Apresenta o resultado


        Result = Num1 - Num2;                                        //Faz a subtração dos dois números

        printf("\n%.2f - %.2f = %.2f", Num1, Num2, Result);      //Apresenta o resultado

        Result = Num1 * Num2;                                        //Faz a multiplicação dos dois números

        printf("\n%.2f * %.2f = %.2f", Num1, Num2, Result);      //Apresenta o resultado

        Result = Num1 / Num2;                                        //Faz a divisão dos dois números

        printf("\n%.2f  / %.2f = %.2f", Num1, Num2, Result);      //Apresenta o resultado

         printf("\nDigite um numero inteiro:");   //Pede um número para o usuário
         scanf("%i", &N1);                               //Armazena na variável N1
         printf("Digite outro numero inteiro: ");  //Pede mais um número inteiro
         scanf("%i", &N2);                                  //Armazena na variável N2    

         Modulo = N1%N2;                                 //Calcula o resto da divisão entre os dois números

       printf("Resto da divisao: %i.", Modulo);  //Mostra o resto da divisão


        getch();                                                                    //Mantém a janela aberta
      
}      //Fim da função principal
