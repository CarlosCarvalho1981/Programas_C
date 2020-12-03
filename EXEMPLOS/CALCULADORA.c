/***********************
CALCULADORA
CARLOS CARVALHO
16/02/17
************************/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main (void){ //INICIO DA FUNÇÃO PRINCIPAL
    float N1, N2, Result;
    int i;
    char Oper;
    
    while(1){ //ENQUANTO
        printf("\n\nDigite um numero: ");//Pede o primeiro número
        scanf("%f", &N1);   //Lê o número digitado
        
        printf("Digite a operacao: ");
        scanf("%s", &Oper);
        
        
        
            printf("\nDigite outro número: ");
            scanf("%f", &N2);
            
            if(Oper == '+'){
                Result = N1 + N2;
            }
            else if (Oper == '-'){
                Result = N1 - N2;
            }
            else if (Oper == '*'){
                Result = N1 * N2;
            }
            else if(Oper == '/'){
                Result = N1/N2;
            }
           
            printf("\n%.2f %c %.2f = %.2f",N1, Oper, N2, Result);
      
        getch();
        system("cls");
   
    }//FIM ENQUANTO
    
} //FIM DA FUNÇÃO PRINCIPAL
