/***********************************************************************************************************************************
VARI�VEIS E APRESENTA��O DE VALORES NA TELA
Declarar uma vari�vel do tipo inteiro.
Apresentar frases e valores na tela.
Carlos E. Carvalho
10/09/2015
****************************************************************************************************************************************/
#include<stdio.h>
#include<conio.h>

int main (void){    //In�cio da fun��o principal
     int Numero;
    //Corpo da fun��o principal
    printf("Esse e o meu primeio programa em linguagem C!");  //Apresenta mensagem na tela
    printf("\nCarlos Eduardo Carvalho.");                       //Apresenta o nome.
    
    printf("\nDigite um numero inteiro: ");         //Pede para o usu�rio digitar um n�mero
    scanf("%i", &Numero);           //L� o que o usu�rio digitou
    printf("\nSeu valor foi %i.", Numero);
    getch();    //Mant�m a tela aberta
    
    
}//Fim da fun��o principal
