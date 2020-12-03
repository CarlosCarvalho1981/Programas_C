/*********************************************************************************
VARIÁVEIS E APRESENTAÇÃO DE VALORES NA TELA
Declarar uma variável do tipo caracter.
Apresentar frases e valores na tela.
Carlos E. Carvalho
10/02/17
*********************************************************************************/

#include <stdio.h>
#include <conio.h>

int main (void){      //Início da função principal
      char Letra;       //Declaração da variável do tipo caracter

      //Corpo da função principal.
      printf("Esse e o meu primeiro programa em linguagem C!");    //Apresenta mensagem na tela
      printf("\nCarlos Eduardo Carvalho.");                                           // Apresenta o nome.
      
      printf("\nDigite uma letra: ");       // Pede pro usuário digitar uma letra
      scanf("%s", &Letra);               //Lê o valor que o usuário digitar e armazena na variável Letra
      printf("\nA letra digitada foi: %c .", Letra);    //Mostra o valor que o usuário digitou

      getch();    //Mantém a tela aberta.

}      //Fim da função principal
