/**************************************************************************************************************************************
EXEMPLO DE UTILIZA��O DE ESTRUTURAS. AS ESTRUTURAS CRIAM UM NOVO TIPO DE DADO.
DECLARA��O DE UMA ESTRUTURA DO TIPO Data, COM UMA VARI�VEL CHAMADA Nascimento.
INICIALIZA��O DA VARI�VEL Nascimento E APRESENTA��O DOS VALORES
CARLOS EDUARDO CARVALHO
23/06/2015
************************************************************************************************************************************/

#include<stdio.h>
#include<conio.h>
#include<string.h>
int main (void){
    struct Data { //In�cio da estrutura
       int Dia, Ano;    //Campos do tipo inteiro
       char Mes[12];    //Campo do tipo string
    }Nascimento = {04,2016, "Julho"}; //Declara��o e inicializa��o da vari�vel Nascimento
    
    //Apresenta��o na tela, da vari�vel Nascimento com todoos os campos.
    printf("Data: %i de %s de %i.", Nascimento.Dia, Nascimento.Mes, Nascimento.Ano); 
    
    getch();
}
