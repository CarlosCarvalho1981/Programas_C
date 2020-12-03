/*******************************************************************************************************************************
PROGRAMA EXEMPLO PARA PEGAR A DATA E A HORA USANDO A BIBLIOTECA time.h
NESTE CASO ESTÁ SENDO USADO UM PONTEIRO e uma struct.
ESTE CÓDIGO FOI FEITO USANDO AS FUNÇÕES ENCONTRADAS EM
//www.rogercom.com
//Fuções para manipulação de data e hora.
02/07/2016
Carlos E. Carvalho
*********************************************************************************************************************************/

#include <stdio.h>
#include<conio.h>
#include <time.h>

struct tm *DataAtual; //estrutura para armazenar data e hora.
time_t Segundos;
 
 int ObtemDia(void){
    time(&Segundos); //obtém a hora em segundos.
    DataAtual = localtime(&Segundos); //converte horas em segundos.
    return(DataAtual->tm_mday); //retorna os dias de 1 a 31.
}
int ObtemMes(void)
{
    time(&Segundos); //obtém a hora em segundos.
    DataAtual = localtime(&Segundos); //converte horas em segundos.
    return(DataAtual->tm_mon+1); //retorna os meses de 0 a 11.
}

int ObtemAno(void)
{
    time(&Segundos); //obtém a hora em segundos.
    DataAtual = localtime(&Segundos); //converte horas em segundos.
    return(DataAtual->tm_year+1900); //retorna o ano atual.
}

char *ObtemStrData(void)
{
    char *BuffData = "00/00/0000";  //define um tamanho de 8 bytes à variável; 
    time(&Segundos); //obtém a hora em segundos.
    DataAtual = localtime(&Segundos); //converte horas em segundos.
    sprintf(BuffData,"%02d/%02d/%04d", DataAtual->tm_mday, DataAtual->tm_mon+1, DataAtual->tm_year+1900);
    return(BuffData); //retorna uma strind da data atual.
}

int ObtemHora(void)
{
    time(&Segundos); //obtém a hora em segundos.
    DataAtual = localtime(&Segundos); //converte horas em segundos.
    return(DataAtual->tm_hour); //retorna as horas de 0 a 24.
}

int ObtemMinuto(void)
{
    time(&Segundos); //obtém a hora em segundos.
    DataAtual = localtime(&Segundos); //converte horas em segundos.
    return(DataAtual->tm_min); //retorna os minutos de 0 a 59.
}

int ObtemSegundo(void)
{
    time(&Segundos); //obtém a hora em segundos.
    DataAtual = localtime(&Segundos); //converte horas em segundos.
    return(DataAtual->tm_sec); //retorna os segundos de 0 a 59.
}

 
 
int main(){
    int dia, anoUsuario, anoAtual, idade;
    const time_t timer = time(NULL);
    printf("ctime is %s\n", ctime(&timer));
    
    dia = ObtemDia();
    printf("\n Dia: %i.", dia);
    printf("\nDigite o ano que voce nasceu: ");
    scanf("%i", &anoUsuario);
    
    anoAtual = ObtemAno();
    idade =  anoAtual - anoUsuario;
    printf("\nVoce tem %i anos.", idade);
    
    getch();
}
