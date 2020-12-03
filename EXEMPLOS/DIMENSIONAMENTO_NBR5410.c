/************************************************************************************************************************************************
PROGRAMA PARA DIMENSIONAMENTO DE NÚMERO DE TOMADAS, POTÊNCIA DE TOMADAS, POTÊNCIA DE ILUMIANÇÃO POR CÔMODO E GERAL.
CÁLCULO DE CORRENTE, DIMENSIONAMENTO DE FIAÇÃO E DISJUNTORES, BASEADO NA NORMA NBR5410.
19/12/16
CARLOS EDUARDO CARVALHO
*******************************************************************************************************************************************/
#include<stdio.h>
#include<conio.h>
#include<string.h>

//VARIAVEIS GLOBAIS
int Iluminacao[100], Tomadas[100], PotTomadas[100], PotChuveiro[100]; //VETORES 
float largura, comprimento,CorrenteChuveiro[100],BitolaChuveiro[100];
char Str[100], result;
FILE *arq;
//int i = 0;

//FUNÇÃO PARA DETERMINAR OS LIMITES DOS DISJUNTORES *****************************************************************************
int Disjuntor(float correnteProj, float bitola, char tipo){
    float correnteFio=0;
    if (bitola == 1.5){
        correnteFio = 17.5;
    }
    else if (bitola == 2.5){
        correnteFio = 24;
    }
    else if (bitola == 4){
        correnteFio = 32;
    }
    else if (bitola == 6){
        correnteFio = 41;
    }
    else if (bitola == 10){
        correnteFio = 57;
    }
    if(tipo == 'i'){ //CIRCUITO DE ILUMINAÇÃO
        if (correnteProj < correnteFio){
            printf("\n\nA corrente do disjuntor de iluminacao deve ficar entre:");
            printf("\n %.2f A e %.2f A", correnteProj, correnteFio);
            
            result = fprintf(arq,"DISJUNTOR ILUM %.2f a %.2f A",correnteProj, correnteFio);
            if (result == EOF){
                printf("Falha na gravacao.");
                getch();
            }
                
            strcpy(Str,"\n");
            result = fputs(Str, arq);
            fflush(stdin);//LIMPA O REGISTRADOR DE ENTRADA
        }
        else {
            printf("\nVoce precisa aumentar o condutor do circuito de iluminacao!");   
        }
    }
    else if(tipo == 't'){ //CIRCUITO DE TOMADAS
        if (correnteProj < correnteFio){
            printf("\n\nA corrente do disjuntor de tomadas deve ficar entre:");
            printf("\n %.2f A e %.2f A", correnteProj, correnteFio);
            result = fprintf(arq,"DISJUNTOR TUG %.2f a %.2f A",correnteProj, correnteFio);
            if (result == EOF){
                printf("Falha na gravacao.");
                getch();
            }
                
            strcpy(Str,"\n");
            result = fputs(Str, arq);
            fflush(stdin);//LIMPA O REGISTRADOR DE ENTRADA
        }
        else{
            printf("\nVoce precisa aumentar o condutor do circuito de tomadas!"); 
        }
    }
    else if(tipo == 'c'){ //CIRCUITO DE TOMADAS DA COZINHA
        if (correnteProj < correnteFio){
            printf("\n\nA corrente do disjuntor de tomadas da cozinha/lavanderia deve ficar entre:");
            printf("\n %.2f A e %.2f A", correnteProj, correnteFio);
            result = fprintf(arq,"DISJUNTOR TUG COZINHA/LAV %.2f a %.2f A",correnteProj, correnteFio);
            if (result == EOF){
                printf("Falha na gravacao.");
                getch();
            }
                
            strcpy(Str,"\n");
            result = fputs(Str, arq);
            fflush(stdin);//LIMPA O REGISTRADOR DE ENTRADA
        }
        else{
            printf("\nVoce precisa aumentar o condutor do circuito de tomadas da cozinha/lavanderia!"); 
        }
    }
    else if(tipo == 'v'){ //CIRCUITO DE TOMADAS DO CHUVEIRO
        if (correnteProj < correnteFio){
            printf("\n\nA corrente do disjuntor do chuveiro deve ficar entre:");
            printf("\n %.2f A e %.2f A", correnteProj, correnteFio);
            result = fprintf(arq,"DISJUNTOR CHUVEIRO %.2f a %.2f A",correnteProj, correnteFio);
            if (result == EOF){
                printf("Falha na gravacao.");
                getch();
            }
                
            strcpy(Str,"\n");
            result = fputs(Str, arq);
            fflush(stdin);//LIMPA O REGISTRADOR DE ENTRADA
        }
        else{
            printf("\nVoce precisa aumentar o condutor do circuito de chuveiro!"); 
        }
    }
}




//FUNÇÃO PARA DETERMINAR A BITOLA DO FIO ************************************************************************
float Bitola(float corrente, char tipo){
    float bitola = 0;
    if(corrente <= 17.5 && tipo == 'i' ){ //Se for iluminação, pode usar a bitoal de 1,5mm2
        bitola = 1.5;
    }
    else if (corrente <= 24){
        bitola = 2.5;
    }
    else if(corrente > 24 && corrente <= 32){
        bitola = 4;
    }
    else if(corrente > 32 && corrente <= 41){
        bitola = 6;
    }
    else if (corrente > 41){
        bitola = 10;
    }
    return(bitola);
}




//FUNÇÃO PARA CALCULAR A POTÊNCIA DE ILUMINAÇÃO *************************************************************************************
float Potencia_Iluminacao(float Area){
    float areaResto=0, potIlum;
     //CALCULA A POTENCIA DE ILUMINAÇÃO.
    if(Area >=10){
        areaResto = Area - 6; //==> EQUIVALENTE A 100 W
        potIlum = ((areaResto/4)*60)+100;
    }
    else {
        potIlum = 100;       
    }
    printf("\nA potencia de iluminacao deste comodo sera: %.2f W.", potIlum);
    result = fprintf(arq,"Iluminação: %.2f W",potIlum);
    if (result == EOF){
        printf("Falha na gravacao.");
        getch();
    }
    strcpy(Str,"\n");
    result = fputs(Str, arq);
    fflush(stdin);//LIMPA O REGISTRADOR DE ENTRADA
    
    return(potIlum);
}




//FUNÇÃO PARA CALCULAR A ÁREA DE CADA CÔMODO *************************************************************************************
float Area(void){
    float area;
    printf("\nDigite a largura do comodo: ");
    scanf("%f", &largura);
    printf("\nDigite o comprimento do comodo: ");
    scanf("%f", &comprimento);
        
    //CALCULA A ÁREA 
    area = largura*comprimento;
    
    printf("\nArea: %.2f m2.", area);
    result = fprintf(arq,"Area: %.2f m2",area);
    if (result == EOF){
        printf("Falha na gravacao.");
        getch();
    }
    strcpy(Str,"\n");
    result = fputs(Str, arq);
    fflush(stdin);//LIMPA O REGISTRADOR DE ENTRADA
   
    return(area);
}




//FUNÇÃO PARA CALCULAR O NÚMERO DE TOMADAS ***********************************************************************************
int Numero_Tomadas(char Comodo){
    int nTug = 0, resto;
    float perimetro;
    
    perimetro = 2*largura + 2*comprimento; //CALCULA O PERÍMETRO
    
    if(Comodo == 'c' || Comodo == 'C'){ //Se for uma cozinha, dividir o perímetro por 3,5
        nTug = ((float)perimetro)/3.5;
        resto = (int)perimetro/3.5;
        if (resto>0){
            nTug = nTug + 1;
        }
    }
    else {  //SE FOR OUTRO COMODO, DIVIDIR O PERÍMETRO POR 5
        nTug = ((float)perimetro)/5;
        resto = (int)perimetro/5;
        if (resto>0){
            nTug = nTug + 1;
        }
    }
    result = fprintf(arq,"Quantidade TUG: %i",nTug);
    strcpy(Str,"\n");
    result = fputs(Str, arq);
    fflush(stdin);//LIMPA O REGISTRADOR DE ENTRADA
    /*if (result == EOF){
        printf("Falha na gravacao.");
        getch();
    }
    */

    return(nTug);
}





//FUNÇÃO PARA CALCULAR A POTÊNCIA DAS TOMADAS **********************************************************************************
int potTomadas(char Comodo){
    int nTug = 0, potTug = 0;
    
    nTug = Numero_Tomadas(Comodo);//CALCULA O NÚMERO DE TOMADAS
   
    
    if (Comodo == 'q' || Comodo == 'Q' || Comodo == 's' || Comodo == 'S'){
        potTug = 100*nTug;//NO QUARTO OU NA SALA TODAS AS TOMADAS DE 100 W
    }
    else {
        if(nTug > 3){//NOS OUTROS COMODOS, 3 TOMADAS DE 600 W E O RESTO DE 100 W
            potTug = (3*600)+(nTug-3)*100;
        }
        else{
            potTug = nTug*600;
        }
    }
    result = fprintf(arq,"Potência TUG: %i",potTug);
    strcpy(Str,"\n");
    result = fputs(Str, arq);
    fflush(stdin);//LIMPA O REGISTRADOR DE ENTRADA
    /*if (result == EOF){
        printf("Falha na gravacao.");
        getch();
    }
    */
    
    
    return(potTug);
}




void main (void){ //INÍCIO DA FUNÇÃO PRINCIPAL *********************************************************************************
    char tipoComodo, resp = 's';
    int i = 0, nComodos, pTotal = 0,tomTotal = 0,potTugTotal=0,tensao=0,potTugCozinha=0,potChuvTotal=0,x=0;
    float area,correnteTug=0, correnteIlum = 0,correnteTotal=0, correnteCoz = 0,bitolaIlum=0,bitolaCoz = 0,bitolaTug=0;
    
    arq = fopen("Projeto.csv", "wt");  // Cria um arquivo texto para gravação
    if (arq == NULL) // Se não conseguiu criar
    {
        printf("Problemas na CRIACAO do arquivo\n");
        return;
    }
    
    while (resp == 's' || resp == 'S'){
        strcpy(Str,"\n");// Pula linha
        result = fputs(Str, arq);
        fflush(stdin);//LIMPA O REGISTRADOR DE ENTRADA
        
        strcpy(Str,"INICIO DA NOVA GRAVAÇÃO");
        result = fputs(Str, arq);
        fflush(stdin);//LIMPA O REGISTRADOR DE ENTRADA
    
        if (result == EOF){
           printf("Erro na Gravacao\n");
        }
        strcpy(Str,"\n");
        result = fputs(Str, arq);
        fflush(stdin);//LIMPA O REGISTRADOR DE ENTRADA
        
        for(i=0;i<99;i++){//LIMPAR TODOS OS VETORES
            Iluminacao[i] = 0;
            PotTomadas[i] = 0;
            Tomadas[i] = 0;
            PotChuveiro[i] = 0;
            CorrenteChuveiro[i] = 0;
            BitolaChuveiro[i] = 0;
        }
       
        i=0;
        
        printf("\nDigite o numero de comodos da casa: \n");
        scanf("%i", &nComodos);
        result = fprintf(arq,"Numero de comodos: %i ",nComodos);
        fflush(stdin);//LIMPA O REGISTRADOR DE ENTRADA
        
        result = fputc(nComodos,arq);
        if (result == EOF){
            printf("Falha na gravacao.");
            getch();
        }
        strcpy(Str,"\n");
        result = fputs(Str, arq);
        fflush(stdin);//LIMPA O REGISTRADOR DE ENTRADA
        
                
/*****************************************************************************************************************************
        BLOCO PARA VERIFICAR O TIPO DO COMODO 
*****************************************************************************************************************************/
        while(i<nComodos) {
            
            printf("\n\nDigite o tipo do comodo: ");
            scanf("%s", &tipoComodo);
                       
            
            if (tipoComodo == 'q' || tipoComodo == 'Q' ){
                strcpy(Str,"\n");
                result = fputs(Str, arq);
                fflush(stdin);//LIMPA O REGISTRADOR DE ENTRADA
                
                result = fprintf(arq,"Comodo %i ",i);
                if (result == EOF){
                    printf("Falha na gravacao.");
                    getch();
                }
                strcpy(Str,"QUARTO");
                result = fputs(Str, arq);
                fflush(stdin);//LIMPA O REGISTRADOR DE ENTRADA
            
                strcpy(Str,"\n");
                result = fputs(Str, arq);
                fflush(stdin);//LIMPA O REGISTRADOR DE ENTRADA
        
                 
                
                printf("\n********** Quarto **********");
                area = Area();//CHAMA A FUNÇÃO PARA CALCULAR A ÁREA
                
                Iluminacao[i] = Potencia_Iluminacao(area); //CHAMA A FUNÇÃO PARA CALCULAR A POTÊNCIA DE ILUMINAÇÃO
                
                Tomadas[i]=Numero_Tomadas(tipoComodo);//ARMAZENA O NÚMERO DE TOMADAS NO VETOR
                printf("\nNumero de tomadas desse comodo: %i.", Tomadas[i]);
                PotTomadas[i] = potTomadas(tipoComodo);//ARMAZENA A POTENCIA DE TOMADAS NO VETOR
                printf("\nPotencia de tomadas: %i W.", PotTomadas[i]);
                i++;
            }
            
            else if ( tipoComodo == 's' || tipoComodo == 'S'){
                printf("\n********** Sala **********");
                strcpy(Str,"\n");
                result = fputs(Str, arq);
                fflush(stdin);//LIMPA O REGISTRADOR DE ENTRADA
                
                result = fprintf(arq,"Comodo %i ",i);
                if (result == EOF){
                    printf("Falha na gravacao.");
                    getch();
                }
                strcpy(Str,"SALA");
                result = fputs(Str, arq);
                fflush(stdin);//LIMPA O REGISTRADOR DE ENTRADA
            
                strcpy(Str,"\n");
                result = fputs(Str, arq);
                fflush(stdin);//LIMPA O REGISTRADOR DE ENTRADA
                
                area = Area();//CHAMA A FUNÇÃO PARA CALCULAR A ÁREA
                Iluminacao[i] = Potencia_Iluminacao(area); //CHAMA A FUNÇÃO PARA CALCULAR A POTÊNCIA DE ILUMINAÇÃO
                Tomadas[i]=Numero_Tomadas(tipoComodo);//ARMAZENA O NÚMERO DE TOMADAS NO VETOR
                printf("\nNumero de tomadas desse comodo: %i.", Tomadas[i]);
                PotTomadas[i] = potTomadas(tipoComodo);//ARMAZENA A POTENCIA DE TOMADAS NO VETOR
                printf("\nPotencia de tomadas: %i W.", PotTomadas[i]);
                i++;
            }
            
            else if (tipoComodo == 'b' || tipoComodo == 'B'){
                printf("\n********** Banheiro **********");
                strcpy(Str,"\n");
                result = fputs(Str, arq);
                fflush(stdin);//LIMPA O REGISTRADOR DE ENTRADA
                
                result = fprintf(arq,"Comodo %i ",i);
                if (result == EOF){
                    printf("Falha na gravacao.");
                    getch();
                }
                strcpy(Str,"BANHEIRO");
                result = fputs(Str, arq);
                fflush(stdin);//LIMPA O REGISTRADOR DE ENTRADA
            
                strcpy(Str,"\n");
                result = fputs(Str, arq);
                fflush(stdin);//LIMPA O REGISTRADOR DE ENTRADA
                
                area = Area();//CHAMA A FUNÇÃO PARA CALCULAR A ÁREA
                Iluminacao[i] = Potencia_Iluminacao(area); //CHAMA A FUNÇÃO PARA CALCULAR A POTÊNCIA DE ILUMINAÇÃO
                Tomadas[i] = 1;
                strcpy(Str,"Quantidade TUG 1");
                result = fputs(Str,arq);
                if (result == EOF){
                    printf("Falha na gravacao.");
                    getch();
                }
             
                strcpy(Str,"\n");
                result = fputs(Str, arq);
                fflush(stdin);//LIMPA O REGISTRADOR DE ENTRADA
                
                strcpy(Str,"Potência TUG 600 W");
                result = fputs(Str,arq);
                if (result == EOF){
                    printf("Falha na gravacao.");
                    getch();
                }
             
                strcpy(Str,"\n");
                result = fputs(Str, arq);
                fflush(stdin);//LIMPA O REGISTRADOR DE ENTRADA
                
                PotTomadas[i] = 600;
                printf("\n1 ponto de tomada de uso geral.");
                printf("\nPotencia de tomadas: %i W.", PotTomadas[i]);
                printf("\n\nDigite a potencia do chuveiro deste banheiro: ");
                scanf("%i", &PotChuveiro[i]);
                
                result = fprintf(arq,"Pot Chuveiro %i W",PotChuveiro[i]);
                if (result == EOF){
                    printf("Falha na gravacao.");
                    getch();
                }
             
                strcpy(Str,"\n");
                result = fputs(Str, arq);
                fflush(stdin);//LIMPA O REGISTRADOR DE ENTRADA
                i++;
            }
            
            else if (tipoComodo == 'c' || tipoComodo == 'C'){
                printf("\n********** Cozinha **********");
                strcpy(Str,"\n");
                result = fputs(Str, arq);
                fflush(stdin);//LIMPA O REGISTRADOR DE ENTRADA
                
                result = fprintf(arq,"Comodo %i ",i);
                if (result == EOF){
                    printf("Falha na gravacao.");
                    getch();
                }
                strcpy(Str,"COZINHA");
                result = fputs(Str, arq);
                fflush(stdin);//LIMPA O REGISTRADOR DE ENTRADA
            
                strcpy(Str,"\n");
                result = fputs(Str, arq);
                fflush(stdin);//LIMPA O REGISTRADOR DE ENTRADA
                
                area = Area();//CHAMA A FUNÇÃO PARA CALCULAR A ÁREA
                Iluminacao[i] = Potencia_Iluminacao(area); //CHAMA A FUNÇÃO PARA CALCULAR A POTÊNCIA DE ILUMINAÇÃO
                Tomadas[i]=Numero_Tomadas(tipoComodo);//SALVA O NÚMERO DE TOMADAS NO VETOR
                printf("\nNumero de tomadas desse comodo: %i.", Tomadas[i]);
                PotTomadas[i] = potTomadas(tipoComodo);//SALVA A POTENCIA DE TOMADAS NO VETOR
                printf("\nPotencia de tomadas: %i W.", PotTomadas[i]);
                potTugCozinha = PotTomadas[i];
                i++;
                
            }
            else if (tipoComodo == 'l' || tipoComodo == 'L'){
                printf("\n********** Lavanderia **********");
                strcpy(Str,"\n");
                result = fputs(Str, arq);
                fflush(stdin);//LIMPA O REGISTRADOR DE ENTRADA
                
                result = fprintf(arq,"Comodo %i ",i);
                if (result == EOF){
                    printf("Falha na gravacao.");
                    getch();
                }
                strcpy(Str,"LAVANDERIA");
                result = fputs(Str, arq);
                fflush(stdin);//LIMPA O REGISTRADOR DE ENTRADA
            
                strcpy(Str,"\n");
                result = fputs(Str, arq);
                fflush(stdin);//LIMPA O REGISTRADOR DE ENTRADA
                
                area = Area();//CHAMA A FUNÇÃO PARA CALCULAR A ÁREA
                Iluminacao[i] = Potencia_Iluminacao(area); //CHAMA A FUNÇÃO PARA CALCULAR A POTÊNCIA DE ILUMINAÇÃO
                Tomadas[i]=Numero_Tomadas(tipoComodo);//SALVA O NÚMERO DE TOMADAS NO VETOR
                printf("\nNumero de tomadas desse comodo: %i.", Tomadas[i]);
                PotTomadas[i] = potTomadas(tipoComodo);//SALVA A POTENCIA DE TOMADAS NO VETOR
                printf("\nPotencia de tomadas: %i W.", PotTomadas[i]);
                potTugCozinha = PotTomadas[i];
                i++;
            }
            else{
                printf("\n********** Comodo nao encontrado! **********");
            }
    
        }//FIM DO ENQUANTO
        
        for (i=0;i<=99;i++){
            pTotal = pTotal + Iluminacao[i];
            tomTotal = tomTotal + Tomadas[i];
            potTugTotal = potTugTotal + PotTomadas[i];
            potChuvTotal = potChuvTotal + PotChuveiro[i];
        }
        
        //APRESENTA OS RESULTADOS DE POTÊNCIA
        printf("\n\n********************************************************************************");
        
        strcpy(Str,"\n");
        result = fputs(Str, arq);
        fflush(stdin);//LIMPA O REGISTRADOR DE ENTRADA
        
        printf("\nPotencia Total de Iluminacao: %i W.", pTotal);
        result = fprintf(arq,"ILUMINAÇÃO TOTAL %i W",pTotal);
        if (result == EOF){
            printf("Falha na gravacao.");
            getch();
        }
                
        strcpy(Str,"\n");
        result = fputs(Str, arq);
        fflush(stdin);//LIMPA O REGISTRADOR DE ENTRADA
        
        printf("\nQuantidade total de tomadas: %i.", tomTotal);
        result = fprintf(arq,"TUG TOTAL %i W",tomTotal);
        if (result == EOF){
            printf("Falha na gravacao.");
            getch();
        }
                
        strcpy(Str,"\n");
        result = fputs(Str, arq);
        fflush(stdin);//LIMPA O REGISTRADOR DE ENTRADA
        
        printf("\nPotencia total de tomadas: %i W.", potTugTotal);
        result = fprintf(arq,"POT TUG TOTAL %i W",potTugTotal);
        if (result == EOF){
            printf("Falha na gravacao.");
            getch();
        }
                
        strcpy(Str,"\n");
        result = fputs(Str, arq);
        fflush(stdin);//LIMPA O REGISTRADOR DE ENTRADA
        
        printf("\nPotencia total dos chuveiros: %i W.", potChuvTotal);
        result = fprintf(arq,"POT CHUVEIRO TOTAL %i W",potChuvTotal);
        if (result == EOF){
            printf("Falha na gravacao.");
            getch();
        }
                
        strcpy(Str,"\n");
        result = fputs(Str, arq);
        fflush(stdin);//LIMPA O REGISTRADOR DE ENTRADA
        
        printf("\nPotencia total geral %i W.", pTotal+potTugTotal+potChuvTotal);
        result = fprintf(arq,"POTÊNCIA TOTAL %i W",pTotal+potTugTotal+potChuvTotal);
        if (result == EOF){
            printf("Falha na gravacao.");
            getch();
        }
                
        strcpy(Str,"\n");
        result = fputs(Str, arq);
        fflush(stdin);//LIMPA O REGISTRADOR DE ENTRADA
        
        //PEDE A TENSÃO DE ALIMENTAÇÃO
        printf("\n\n********************************************************************************");
        printf("\nDigite a tensao de alimentacao da instalacao: ");
        scanf("%i", &tensao);
        
        //CALCULA E APRESENTA A CORRENTE TOTAL, DAS TOMADAS E DA ILUMINACAO.
        correnteTug = ((float)potTugTotal-(float)potTugCozinha)/tensao;
        correnteIlum = (float)pTotal/tensao;
        correnteCoz = (float)potTugCozinha/tensao;
        correnteTotal = ((float)potTugTotal+(float)pTotal+(float)potChuvTotal)/tensao;
        
        //CALCULA A CORRENTE DE CADA CHUVEIRO SEPARADAMENTE
        for (i=0;i<=99;i++){
            if(PotChuveiro[i] > 0){
                CorrenteChuveiro[i] = PotChuveiro[i]/tensao;
            }
        }
        
        printf("\n\n********************************************************************************");
        printf("\nCorrente total: %.2f A.", correnteTotal);
        result = fprintf(arq,"CORRENTE TOTAL %.2f A",correnteTotal);
        if (result == EOF){
            printf("Falha na gravacao.");
            getch();
        }
                
        strcpy(Str,"\n");
        result = fputs(Str, arq);
        fflush(stdin);//LIMPA O REGISTRADOR DE ENTRADA
               
        printf("\nCorrente TUG geral: %.2f A.",correnteTug);
        printf("\nCorrente da iluminacao: %.2f A.", correnteIlum);
        for (i=0;i<=99;i++){
            if(PotChuveiro[i]>0){
                printf("\nCorrente do chuveiro %i: %.2f A.", i, CorrenteChuveiro[i]);
            }
        }
        
        //DETERMINAÇÃO DA FIAÇÃO DE ACORDO COM A NORMA NBR5410
        //CONSIDERANDO INSTALAÇÃO EM ALVENARIA NÃO - TÉRMICA
        //ELETRODUTO EMBUTIDO DE SEÇÃO CIRCULAR - MÉTODO DE INSTALAÇÃO B1 - 2 CONDUTORES CARREGADOS.
        bitolaIlum = Bitola(correnteIlum, 'i');
        bitolaTug = Bitola(correnteTug, 't');
        bitolaCoz = Bitola(correnteCoz, 'c');
        for (i=0;i<=99;i++){
            if(CorrenteChuveiro[i] > 0){
                BitolaChuveiro[i] = Bitola(CorrenteChuveiro[i],'v');
            }
        }
        printf("\n\n********************************************************************************");
        printf("\nA bitola dos condutores da iluminacao sera: %.2f mm2 (FASE, NEUTRO E TERRA).", bitolaIlum); 
        result = fprintf(arq,"BITOLA ILUMINAÇÃO %.2f mm2",bitolaIlum);
        if (result == EOF){
            printf("Falha na gravacao.");
            getch();
        }
                
        strcpy(Str,"\n");
        result = fputs(Str, arq);
        fflush(stdin);//LIMPA O REGISTRADOR DE ENTRADA
        
        printf("\nA bitola dos condutores de tomada geral sera: %.2f mm2 (FASE, NEUTRO E TERRA).", bitolaTug); 
        result = fprintf(arq,"BITOLA TUG GERAL %.2f mm2",bitolaTug);
        if (result == EOF){
            printf("Falha na gravacao.");
            getch();
        }
                
        strcpy(Str,"\n");
        result = fputs(Str, arq);
        fflush(stdin);//LIMPA O REGISTRADOR DE ENTRADA
        
        printf("\nA bitola dos condutores tomadas da cozinha/lavanderia sera: %.2f mm2 (FASE, NEUTRO E TERRA).", bitolaCoz); 
        result = fprintf(arq,"BITOLA COZINHA %.2f mm2",bitolaCoz);
        if (result == EOF){
            printf("Falha na gravacao.");
            getch();
        }
                
        strcpy(Str,"\n");
        result = fputs(Str, arq);
        fflush(stdin);//LIMPA O REGISTRADOR DE ENTRADA
        
        for (i=0;i<=99;i++){
            if(CorrenteChuveiro[i] > 0){
                printf("\nA bitola do chuveiro %i sera %.2f mm2.",i,BitolaChuveiro[i]);
                result = fprintf(arq,"BITOLA CHUVEIRO %i: %.2f mm2 ",i, BitolaChuveiro[i]);
                if (result == EOF){
                    printf("Falha na gravacao.");
                    getch();
                }
                
                strcpy(Str,"\n");
                result = fputs(Str, arq);
                fflush(stdin);//LIMPA O REGISTRADOR DE ENTRADA
            }
        }
        
        //APRESENTAÇÃO DOS LIMITES PARA OS DISJUNTORES
        printf("\n\n********************************************************************************");
        printf("\nEVITE ACIDENTES, SEMPRE USE O DISPOSITIVO DIFERENCIAL RESIDUAL !!");
        Disjuntor(correnteCoz,bitolaCoz,'c');
        Disjuntor(correnteIlum, bitolaIlum, 'i');
        Disjuntor(correnteTug, bitolaTug, 't');
        for (i=0;i<=99;i++){
            if(CorrenteChuveiro[i] > 0){
                Disjuntor(CorrenteChuveiro[i],BitolaChuveiro[i],'v');
            }
        }
        
        
        printf("\n\nVoce deseja refazer os calculos (s/n) ?");
        scanf("%s", &resp);
    }
    fclose(arq); /************************************************/ 
}//FIM DA FUNÇÃO PRINCIPAL
