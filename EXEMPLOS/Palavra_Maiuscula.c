/***********************************************************************************************************************************
CÓDIGO USADO PARA TRANSFORMAR UMA PALAVRA EM LETRAS MINÚSCULAS PARA LETRAS MAIÚSCULAS.
A PALAVRA DEVERÁ TER MENOS DE 200 LETRAS.
CARLOS E. CARVALHO
04/07/2016
***********************************************************************************************************************************/

#include<stdio.h>
#include<conio.h>
#include<string.h>

int main (void){
    char Resp = 's', Palavra_Min[200], Palavra_Mai[200]="0";
    int i=0;
    //Palavra_Min[200] e Palavra_Mai[200] são strings
    
    while (Resp == 's'){
        fflush(stdin);//LIMPA O REGISTRADOR DE ENTRADA
        printf("Digite a palavra em letras minusculas: ");//PEDE A PALAVRA
        fgets(Palavra_Min,200,stdin);//COLOCA A PALAVRA NA STRING Palavra_Min
        while (Palavra_Min[i] != '\0'){//REPETE ENQUANTO A PALAVRA NÃO ACABOU
            
           if(Palavra_Min[i] >= 'a'){   //TESTA SE A PALAVRA ESTÁ EM MINÚSCULA
                Palavra_Mai[i] = Palavra_Min[i] - 32; //SUBTRAI 32 PARA TRANSFORMAR A PALAVRA EM MAIÚSCULA
                
           }
           else{//SE A LETRA JÁ FOR MAIÚSCULA
                Palavra_Mai[i] = Palavra_Min[i];//DEIXA COMO ESTÁ
            }
           i = i+1;
        
        }   
        i = 0;
        fflush(stdin);
        printf("\nA palavra modificada eh: %s", Palavra_Mai);//APRESENTA A PALAVRA MODIFICADA
       // puts(Palavra_Mai);
        
        //strcpy(Palavra_Mai,"0");
        
        for(i=0;i<=199;i++){
           Palavra_Mai[i] = 0;   //ZERA TODA A STRING MAIÚSCULA
        }
       
        
        printf("\nDeseja continuar?");
        scanf("%s", &Resp);
    }
}
