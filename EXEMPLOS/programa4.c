/*********************************************************************************
ESTRUTURAS DE SELEÇÃO E OPERADORES LÓGICOS
Utilização das estruturas if - else - if e dos operadores E, OU, INVESORA.
Carlos E. Carvalho
10/03/2016
*********************************************************************************/

#include <stdio.h>
#include <conio.h>


int main (void){      //Início da função principal
       float Media;        //Variável do tipo real
       int Frequencia;    //Variável do tipo inteiro

      printf("Digite a Media: ");                            //Pede a media do estudante
      scanf("%f", &Media);                                        //Armazena o valor digitado na variável Media
      printf("Digite a Frequencia: ");                            //Pede a frequencia do estudante
      scanf("%i", &Frequencia);                                //Armazena o valor digitado na variável Frequencia


     if (Media >= 7 && Frequencia >= 75){        //Condições associadas pelo operador E                                        
            printf("Voce esta aprovado !");                        //Apresenta a mensagem.
     }                                                                          //Fim do se 

     else {
            printf("Voce esta reprovado.");
    }
      
     getch();
}      //Fim da função principal
