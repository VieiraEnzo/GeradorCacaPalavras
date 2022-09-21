#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int PORC_ALFABETO[] = {15,1,4,5,13,1,1,1,6,1,0,3,5,5,11,3,1,7,8,4,5,2,0,0,0,1};


int main(){

    char modo;
    int i,k;
    int tamanho_tabela;
    srand(time(NULL));

//Recebe os imputs principais do usuario como modo de jog
    do{  
    printf("Qual dificuldade de palavra cruzada voce quer?\n");
    printf("Modo (f)acil \nModo (m)edio \nModo (d)ificil\n");
    scanf("%c", &modo);}
    while(modo != 'f'||modo!='m'||modo!='d');
    printf("\nQual o tamanho da tabela vc quer (menor que 15)");
    scanf("%d", &tamanho_tabela);
    char tabela[tamanho_tabela][tamanho_tabela];
    
//------------------------------GERANDO A MATRIZ---------------------------------//
//cria o tamanho do vetor que vamos declarar
    int soma_porc;
    for (i=0;i<26;i++){
        soma_porc += PORC_ALFABETO[i];
    }
    //estamos com o i entrando no vetor PROC que nos dara a frequencia de cada letra
    //em seguida com o k imprimimos essa letra dentro do vetor frequencia o numero de vezes 
    //que o vetor PORC nos retorna para aquela letra
    char frequencia[soma_porc];
    int voltas = 0;
    for(i=0; i<26; i++){
        for(k=0; k < PORC_ALFABETO[i]; k++){
            frequencia[voltas] = 'a' + i;
            voltas++;}
    }

//usando um valor aleatorio da tabela frequencia gera noss matriz        
    char aux;
    for(i=0; i < tamanho_tabela; i++){
        for(k=0; k < tamanho_tabela; k++){
            tabela[i][k] = frequencia[rand() %soma_porc];;
        }
    } 


    //printar tabela
    for(i=0; i < tamanho_tabela; i++){
        printf("\n");
        for(k=0; k < tamanho_tabela; k++){
            printf("%c", tabela[i][k]);
        }
    }
//------------------------------FIM GERANDO A MATRIZ---------------------------------//

    switch (modo)
    {
    case 'f':
        
//    modo_facil()
        break;
    
    case 'm':
//    modo_medio();
        break;

    case 'd':
//    modo_dificl();
        break;

    default:
        printf("Escreve direito carambolas\n");
        break;
    }

}