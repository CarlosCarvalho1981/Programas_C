/*********************************************************************************
VARI�VEIS E APRESENTA��O DE VALORES NA TELA
Declarar uma vari�vel do tipo caracter.
Apresentar frases e valores na tela.
Carlos E. Carvalho
10/02/17
*********************************************************************************/

#include <stdio.h>
#include <conio.h>

int main (void){      //In�cio da fun��o principal
      char Letra;       //Declara��o da vari�vel do tipo caracter

      //Corpo da fun��o principal.
      printf("Esse e o meu primeiro programa em linguagem C!");    //Apresenta mensagem na tela
      printf("\nCarlos Eduardo Carvalho.");                                           // Apresenta o nome.
      
      printf("\nDigite uma letra: ");       // Pede pro usu�rio digitar uma letra
      scanf("%s", &Letra);               //L� o valor que o usu�rio digitar e armazena na vari�vel Letra
      printf("\nA letra digitada foi: %c .", Letra);    //Mostra o valor que o usu�rio digitou

      getch();    //Mant�m a tela aberta.

}      //Fim da fun��o principal
