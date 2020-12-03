/*********************************************************************************************************************
TESTE PARA UTILIZA��O DE ARQUIVOS.
CRIA UM ARQUIVO, ABRE PARA ESCRITA E SALVA O NOME DAS PESSOAS.
N�O � NECESS�RIO TER UMA VARI�VEL PARA O NOME DE CADA PESSOA.
CARLOS E. CARVALHO
26/01/2018
**********************************************************************************************************************************/

#include<stdio.h>
#include<conio.h>
#include<string.h>

int main(void){
    char Str[100], result, resp = 's';
    FILE *arq;  //Cria��o do ponteiro do tipo FILE

    arq = fopen("ArqGrav.csv", "wt");  // Cria um arquivo csv para grava��o
    if (arq == NULL) // Se n�o conseguiu criar
    {
        printf("Problemas na CRIACAO do arquivo\n");
        return; //Fecha o programa
    }
       
    strcpy(Str,"INICIO DA NOVA GRAVA��O");  //Copia a frase para uma string
    result = fputs(Str, arq);               //Copia a string no arquivo
    fflush(stdin);                          //LIMPA O REGISTRADOR DE ENTRADA
    
    strcpy(Str,"\n");                       //Pula uma linha no arquivo
    result = fputs(Str, arq);
    fflush(stdin);//LIMPA O REGISTRADOR DE ENTRADA
    
    if (result == EOF){                 //Se der um erro na grava��o o resultado ser�  End Of File (EOF)
       printf("Erro na Gravacao\n");
    }
    while (resp == 's'){
        fflush(stdin);                      //LIMPA O REGISTRADOR DE ENTRADA
        printf("\nDigite o seu nome:");
        fgets(Str,100,stdin);               //COLOCA A PALAVRA NA STRING 

        result = fputs(Str, arq);           //Coloca a string no arquivo
        
        if (result == EOF){
            printf("Erro na Gravacao\n");
        }
        printf("Deseja continuar?");
        scanf("%s", &resp);
    }
    strcpy(Str,"FIM DA GRAVA��O");
    result = fputs(Str, arq);
    fflush(stdin);                        //LIMPA O REGISTRADOR DE ENTRADA
    
    strcpy(Str,"\n");
    result = fputs(Str, arq);
    fflush(stdin);                       //LIMPA O REGISTRADOR DE ENTRADA
    
    fclose(arq);                        //Fecha o arquivo
    printf("Fim da gravacao");
    getch();
}
