/***********************************************************************************************************************************
VARIÁVEIS E APRESENTAÇÃO DE VALORES NA TELA
Declarar uma variável do tipo inteiro.
Apresentar frases e valores na tela.
Carlos E. Carvalho
10/09/2015
****************************************************************************************************************************************/
#include<stdio.h>
#include<conio.h>

int main (void){    //Início da função principal
     int Numero;
    //Corpo da função principal
    printf("Esse e o meu primeio programa em linguagem C!");  //Apresenta mensagem na tela
    printf("\nCarlos Eduardo Carvalho.");                       //Apresenta o nome.
    
    printf("\nDigite um numero inteiro: ");         //Pede para o usuário digitar um número
    scanf("%i", &Numero);           //Lê o que o usuário digitou
    printf("\nSeu valor foi %i.", Numero);
    getch();    //Mantém a tela aberta
    
    
}//Fim da função principal
