#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    int r=0;
    char resp = 's';
    printf ("PRESSIONE QUALQUER TECLA PARA COMECAR:\n");
    getch();
    while (resp == 's'){
        srand(time(NULL));
        r = rand()%5;
        printf("\n\nCIRCUITO: %i\n\n", r);
    /*
        srand(time(NULL));
        r = rand()%7;
        printf("ESTUDANTE: %i\n\n", r);
        */
        printf("DESEJA EXECUTAR NOVAMENTE?");
        scanf("%s", &resp);
        
    }
}
