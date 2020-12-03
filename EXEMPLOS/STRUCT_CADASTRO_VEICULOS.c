/****************************************************************************************************************************************
EXEMPLO DE UTILIZAÇÃO DE STRUCT: 
CADASTRO DE VEÍCULOS
13/11/18

*******************************************************************************************************************************************/
#include<stdio.h>
#include<conio.h>
#include<string.h>

typedef struct {
        int anoFabricacao, quilometragem;
        char fabricante[50], nome[50], cor[50];   
}veiculo;
    
int main(void){
    
    veiculo carros[5];
    int i,a=0;
    char nomePesquisa[50];
    //RECEBE TODAS AS INFORMAÇÕES DOS 5 CARROS
    for(i=0;i<3;i++){
        printf("\nDigite o fabricante do carro: ");
        fflush(stdin);//LIMPA O REGISTRADOR DE ENTRADA
        gets(carros[i].fabricante);//ARMAZENA O VALOR DIGITADO
        printf("\nDigite o nome do carro: ");
        fflush(stdin);
        gets(carros[i].nome);
        printf("\nDigite o ano de fabricacao do carro: ");
        scanf("%i", &carros[i].anoFabricacao);
        printf("\nDigite a cor do carro: ");
        fflush(stdin);
        gets(carros[i].cor);
        printf("\nDigite a quilometragem :");
        scanf("%i", &carros[i].quilometragem);
        
    }
    printf("\nDigite o nome do carro que deseja pesquisar: ");
    fflush(stdin);
    gets(nomePesquisa);
    printf("\nCarros com nome: ");
    puts(nomePesquisa);
    for(i=0;i<3;i++){
        
        if(strcmp(nomePesquisa,carros[i].nome) == 0){
            printf("\nCor: ");
            puts(carros[i].cor);
            printf("\nQuilometragem %i:",carros[i].quilometragem);
            printf("\nAno de Fabricacao: %i",carros[i].anoFabricacao);

            a++;
        }
        if(a == 0){
            printf("\nNenhum carro encontrado!");
        }
    }
    getch();
}
