#include<stdio.h>
#include<conio.h>

int main (void){
    int i, Numeros[10]   ;
    
    //RECEBE OS NUMEROS
    for (i=0;i<10;i++){
        printf("\nDigite um numero:\n");
        scanf("%i", &Numeros[i]);
    }
    
    //APRESENTA OS NUMEROS NA ORDEM INVERSA
    printf("\n\nNUMEROS NA ORDEM INVERSA!\n\n");
    for (i=9;i>=0;i--){
        printf("\n Numero: %i\n", Numeros[i]);
        
    }
    getch();
    
}
