/*********************************************************************************
ESTRUTURAS DE SELE��O E OPERADORES L�GICOS
Utiliza��o das estruturas if - else - if e do operador OU.
Carlos E. Carvalho
10/03/2016
*********************************************************************************/

#include <stdio.h>
#include <conio.h>


int main (void){      //In�cio da fun��o principal
       char Letra;

      printf("Digite a letra: ");                            //Pede uma letra
      scanf("%c", &Letra);                                   //Armazena o valor digitado na vari�vel Letra
     if (Letra == 'a' || Letra == 'e' || Letra == 'i' || Letra == 'o' || Letra == 'u'){                                                
            printf("Sua letra eh a vogal %c.", Letra);                        //Apresenta a mensagem.
     }                                                                          //Fim do se 

     else {
            printf("Sua letra nao eh uma vogal.");
    }
      
     getch();
}      //Fim da fun��o principal
