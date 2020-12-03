/*********************************************************************************
ESTRUTURAS DE SELEÇÃO E OPERADORES LÓGICOS
Utilização das estruturas if - else - if e do operador OU.
Carlos E. Carvalho
10/03/2016
*********************************************************************************/

#include <stdio.h>
#include <conio.h>


int main (void){      //Início da função principal
       char Letra;

      printf("Digite a letra: ");                            //Pede uma letra
      scanf("%c", &Letra);                                   //Armazena o valor digitado na variável Letra
     if (Letra == 'a' || Letra == 'e' || Letra == 'i' || Letra == 'o' || Letra == 'u'){                                                
            printf("Sua letra eh a vogal %c.", Letra);                        //Apresenta a mensagem.
     }                                                                          //Fim do se 

     else {
            printf("Sua letra nao eh uma vogal.");
    }
      
     getch();
}      //Fim da função principal
