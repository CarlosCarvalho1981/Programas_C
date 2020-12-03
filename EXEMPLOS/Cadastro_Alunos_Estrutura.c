/*********************************************************************************************************************************
DECLARAÇÃO DE UMA ESTRUTURA CHAMADA Estudante, COM OS CAMPOS Nome, nota para eletrônica, nota para programação e média das notas.
CRIAÇÃO DE UM VETOR DO TIPO Estudante CHAMADO Aluno, PARA CADASTRAR AS INFORMAÇÕES DE 5 ALUNOS.
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
    
    int i, max;  //Variável inteira para contagem de estudantes
    struct Estudante Aluno[100];  //Vetor do tipo Estudante com 100 posições
    
    
    
    //INSERINDO INFORMAÇÕES
    printf("\nQuantos estudantes existem na turma ?");
    scanf("%i", &max);
    printf("\nINSIRA AS INFORMACOES DOS ESTUDANTES:");
    
    for (i=0;i<max;i++){//Conta a quantidade de estudantes que precisam ser cadastrados
        fflush(stdin);  //Limpa o registrador de entrada padrão
        printf("\nDigite o nome do aluno: ");   
        gets(Aluno[i].Nome); //Pega o nome digitado e armazena no campo Nome do vetor Aluno
        printf("\nDigite a nota de eletronica:");
        scanf("%f", &Aluno[i].Eletronica);   //Pega a nota digitada e armazena no campo Eletronica do vetor Aluno
        printf("\nDigite a nota de programacao:");
        scanf("%f", &Aluno[i].Programacao);  //Pega a nota digitada e armazena no campo Programação do vetor Aluno
        
        Aluno[i].Media = (Aluno[i].Eletronica + Aluno[i].Programacao)/2;
    }
    
    //APRESENTANDO AS INFORMAÇÕES
    
    for(i=0;i<max;i++){
        fflush(stdin);
        printf("\n\nNOME: %s.", Aluno[i].Nome);   
        printf("\nMEDIA: %.2f.", Aluno[i].Media);
    }
    
    getch();
}
