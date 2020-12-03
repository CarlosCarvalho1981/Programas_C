/**************************************************************************************************************************************
EXEMPLO DE UTILIZAÇÃO DE ESTRUTURAS. AS ESTRUTURAS CRIAM UM NOVO TIPO DE DADO.
DECLARAÇÃO DE UMA ESTRUTURA DO TIPO Data, COM UMA VARIÁVEL CHAMADA Nascimento.
INICIALIZAÇÃO DA VARIÁVEL Nascimento E APRESENTAÇÃO DOS VALORES
CARLOS EDUARDO CARVALHO
23/06/2015
************************************************************************************************************************************/

#include<stdio.h>
#include<conio.h>
#include<string.h>
int main (void){
    struct Data { //Início da estrutura
       int Dia, Ano;    //Campos do tipo inteiro
       char Mes[12];    //Campo do tipo string
    }Nascimento = {04,2016, "Julho"}; //Declaração e inicialização da variável Nascimento
    
    //Apresentação na tela, da variável Nascimento com todoos os campos.
    printf("Data: %i de %s de %i.", Nascimento.Dia, Nascimento.Mes, Nascimento.Ano); 
    
    getch();
}
