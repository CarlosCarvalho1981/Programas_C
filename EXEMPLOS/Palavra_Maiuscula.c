/***********************************************************************************************************************************
C�DIGO USADO PARA TRANSFORMAR UMA PALAVRA EM LETRAS MIN�SCULAS PARA LETRAS MAI�SCULAS.
A PALAVRA DEVER� TER MENOS DE 200 LETRAS.
CARLOS E. CARVALHO
04/07/2016
***********************************************************************************************************************************/

#include<stdio.h>
#include<conio.h>
#include<string.h>

int main (void){
    char Resp = 's', Palavra_Min[200], Palavra_Mai[200]="0";
    int i=0;
    //Palavra_Min[200] e Palavra_Mai[200] s�o strings
    
    while (Resp == 's'){
        fflush(stdin);//LIMPA O REGISTRADOR DE ENTRADA
        printf("Digite a palavra em letras minusculas: ");//PEDE A PALAVRA
        fgets(Palavra_Min,200,stdin);//COLOCA A PALAVRA NA STRING Palavra_Min
        while (Palavra_Min[i] != '\0'){//REPETE ENQUANTO A PALAVRA N�O ACABOU
            
           if(Palavra_Min[i] >= 'a'){   //TESTA SE A PALAVRA EST� EM MIN�SCULA
                Palavra_Mai[i] = Palavra_Min[i] - 32; //SUBTRAI 32 PARA TRANSFORMAR A PALAVRA EM MAI�SCULA
                
           }
           else{//SE A LETRA J� FOR MAI�SCULA
                Palavra_Mai[i] = Palavra_Min[i];//DEIXA COMO EST�
            }
           i = i+1;
        
        }   
        i = 0;
        fflush(stdin);
        printf("\nA palavra modificada eh: %s", Palavra_Mai);//APRESENTA A PALAVRA MODIFICADA
       // puts(Palavra_Mai);
        
        //strcpy(Palavra_Mai,"0");
        
        for(i=0;i<=199;i++){
           Palavra_Mai[i] = 0;   //ZERA TODA A STRING MAI�SCULA
        }
       
        
        printf("\nDeseja continuar?");
        scanf("%s", &Resp);
    }
}
