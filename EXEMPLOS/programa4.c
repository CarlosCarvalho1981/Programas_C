/*********************************************************************************
ESTRUTURAS DE SELE��O E OPERADORES L�GICOS
Utiliza��o das estruturas if - else - if e dos operadores E, OU, INVESORA.
Carlos E. Carvalho
10/03/2016
*********************************************************************************/

#include <stdio.h>
#include <conio.h>


int main (void){      //In�cio da fun��o principal
       float Media;        //Vari�vel do tipo real
       int Frequencia;    //Vari�vel do tipo inteiro

      printf("Digite a Media: ");                            //Pede a media do estudante
      scanf("%f", &Media);                                        //Armazena o valor digitado na vari�vel Media
      printf("Digite a Frequencia: ");                            //Pede a frequencia do estudante
      scanf("%i", &Frequencia);                                //Armazena o valor digitado na vari�vel Frequencia


     if (Media >= 7 && Frequencia >= 75){        //Condi��es associadas pelo operador E                                        
            printf("Voce esta aprovado !");                        //Apresenta a mensagem.
     }                                                                          //Fim do se 

     else {
            printf("Voce esta reprovado.");
    }
      
     getch();
}      //Fim da fun��o principal
