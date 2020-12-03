/*************************************************************************************************************************************
DECLARA��O DA ESTRUTURA Data E UTILIZA��O DESTA ESTRUTURA DENTRO DA ESTRUTURA Cadastro COM A UTILIZA��O DO TYPEDEF.
ENTRADA DE VALORES E ARMAZENAMENTO NOS CAMPOS DA ESTRUTURA.

CARLOS EDUARDO CARVALHO
24/06/2015
**************************************************************************************************************************************/

#include <stdio.h>
#include <conio.h>

typedef struct {    //Estrutura com typedef
    int Dia, Ano;   //Campos do tipo inteiro
    char Mes[20];   //Campo do tipo string
}Data;              //Novo tipo chamado Data

typedef struct {    //Estrutura com typedef
    char Nome [50]; //Campo string
    int Idade;      //Campo inteiro
    float Salario;  //Campo do tipo ponto flutuante
    Data Nascimento; //Campo do tipo Data com uma vari�vel struct
}Cadastro;           //Novo tipo chamado Cadastro

/************** FUN��O PRINCIPAL *************************/
int main (void){
    Cadastro Pessoa;    //Vari�vel do tipo Cadastro chamada Pessoa
    
    fflush(stdin);      //Limpa o registrador de entrada do teclado
    printf("\nDigite o seu nome: ");
    gets(Pessoa.Nome);  //Armazena no campo Nome, da vari�vel Pessoa
    fflush(stdin);      //Limpa o registrador de entrada do teclado
    
    printf("\nDigite sua idade: "); 
    scanf("%i", &Pessoa.Idade); //Armazena no campo Idade, da vari�vel Pessoa
    
    printf("\nDigite o seu salario: ");
    scanf("%f", &Pessoa.Salario);   //Armazena no campo Salario, da vari�vel Pessoa
    
    printf("\nDigite o dia do seu nascimento: ");
    scanf("%i", &Pessoa.Nascimento.Dia);    //Armazena no campo Dia, da vari�vel Nascimento, da vari�vel Pessoa
    
    fflush(stdin);
    printf("\nDigite o mes do seu nascimento: ");
    gets(Pessoa.Nascimento.Mes);    //Armazena no campo Mes, da vari�vel Nascimento, da vari�vel Pessoa
    
    printf("\nDigite o ano do seu nascimento: ");
    scanf("%i", &Pessoa.Nascimento.Ano);  //Armazena no campo Ano, da vari�vel Nascimento, da vari�vel Pessoa
    
    printf("\n\nAPRESENTACAO DOS VALORES: ");
    
    printf("\nNome: %s.", Pessoa.Nome);
    printf("\nData de Nascimento: %i/%s/%i.", Pessoa.Nascimento.Dia, Pessoa.Nascimento.Mes, Pessoa.Nascimento.Ano);
    printf("\nIdade: %i.", Pessoa.Idade);
    printf("\nSalario: %.2f", Pessoa.Salario);
    
    
    getch();
}
