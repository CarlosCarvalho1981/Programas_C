/*************************************************************************************************************************************
CÓDIGO USADO PARA CRIPTOGRAFAR UMA PALAVRA OU FRASE
PEDE A PALAVRA E PEDE A CHAVE DE CÓDIGO.
A CHAVE DE CÓDIGO É UM NÚMERO INTEIRO.
O PROGRAMA TROCA AS LETRAS DE ACORDO COM A CHAVE DE CÓDIGO.
CARLOS E. CARVALHO
04/07/2016
*************************************************************************************************************************************/
#include<stdio.h>
#include<conio.h>
#include<string.h>

int main(void){
    char Resp = 's', Palavra[200], Codigo[200] = "0";
    int Chave, i=0;
    //Codigo[200] é um string com 199 posições e inicia em zero
    
    while (Resp == 's'){
        fflush(stdin);//LIMPA O REGISTRADOR DE ENTRADA
        printf("\nDigite a palavra a ser codificada: ");
        fgets(Palavra,200,stdin);//PEGA A PALAVRA E ARMAZENA 
        printf("\nDigite a chave de codigo: ");
        scanf("%i", &Chave);
        
        while (Chave > 26){//ENQUANTO O CHAVE DE CÓDIGO FOR MAIOR DO QUE 26, DIMINUI POIS SÓ TEM 26 LETRAS NO ALFABETO
           Chave = Chave - 26;    
        }
        
        printf("\nChave: %i", Chave);
        while(Palavra[i] != '\0'){//ENQUANTO A PALAVRA NÃO TERMINAR
              
              if (Palavra[i]+Chave > 'z'){//SE JÁ TIVER ULTRAPASSADO A LETRA Z, VOLTA
                  Codigo[i] = Palavra[i]+Chave-26;
              }
              else {
                  Codigo[i] = Palavra[i]+Chave;    //
              }
              i = i+1;
        }   
        i=0;
        
        printf("\nA palavra codificada eh: ");
        puts(Codigo);
        
        
        for(i=0;i< 200;i++){
            Codigo[i] = 0;   
        }
        
        printf("\nDeseja continuar ?");
        scanf("%s", &Resp);
    }
}
