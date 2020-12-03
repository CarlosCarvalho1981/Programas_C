/*********************************************************************************************************************************
DECLARA��O DE UMA ESTRUTURA CHAMADA Estudante, COM OS CAMPOS Nome, nota para eletr�nica, nota para programa��o e m�dia das notas.
CRIA��O DE UM VETOR DO TIPO Estudante CHAMADO Aluno, PARA CADASTRAR AS INFORMA��ES DE 5 ALUNOS.
CARLOS EDUARDO CARVALHO
24/06/2015
************************************************************************************************************************************/

#include <stdio.h>
#include <conio.h>
#include <string.h>

int main (void){
    struct Estudante {  //Novo tipo "Estudante" criado
        char Nome[30];  //Campo do string
        float Eletronica, Programacao, Media; //Campo do tipo float
    };
    
    int i, max;  //Vari�vel inteira para contagem de estudantes
    struct Estudante Aluno[100];  //Vetor do tipo Estudante com 100 posi��es
    
    
    
    //INSERINDO INFORMA��ES
    printf("\nQuantos estudantes existem na turma ?");
    scanf("%i", &max);
    printf("\nINSIRA AS INFORMACOES DOS ESTUDANTES:");
    
    for (i=0;i<max;i++){//Conta a quantidade de estudantes que precisam ser cadastrados
        fflush(stdin);  //Limpa o registrador de entrada padr�o
        printf("\nDigite o nome do aluno: ");   
        gets(Aluno[i].Nome); //Pega o nome digitado e armazena no campo Nome do vetor Aluno
        printf("\nDigite a nota de eletronica:");
        scanf("%f", &Aluno[i].Eletronica);   //Pega a nota digitada e armazena no campo Eletronica do vetor Aluno
        printf("\nDigite a nota de programacao:");
        scanf("%f", &Aluno[i].Programacao);  //Pega a nota digitada e armazena no campo Programa��o do vetor Aluno
        
        Aluno[i].Media = (Aluno[i].Eletronica + Aluno[i].Programacao)/2;
    }
    
    //APRESENTANDO AS INFORMA��ES
    
    for(i=0;i<max;i++){
        fflush(stdin);
        printf("\n\nNOME: %s.", Aluno[i].Nome);   
        printf("\nMEDIA: %.2f.", Aluno[i].Media);
    }
    
    getch();
}
