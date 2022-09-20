#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){

    char modo;
    int tamanho_tabela;
    int i,k;
    srand(time(NULL));  
    printf("Qual dificuldade de palavra cruzada voce quer?\n");
    printf("Modo (f)acil \nModo (m)edio \nModo (d)ificil\n");
    scanf("%c", &modo);
    printf("\nQual o tamanho da tabela vc quer (menor que 15)");
    scanf("%d", &tamanho_tabela);
    char tabela[tamanho_tabela][tamanho_tabela];
    //gerar tabela
    char aux;
    for(i=0; i < tamanho_tabela; i++){
        for(k=0; k < tamanho_tabela; k++){
            do{
            aux = rand() % 26 + 97;
            tabela[i][k] =  aux;
            }while (    aux == 'k' ||  aux == 'y' ||    aux == 'w');
            
        }
    }  
    //printar tabela
    for(i=0; i < tamanho_tabela; i++){
        printf("\n");
        for(k=0; k < tamanho_tabela; k++){
            printf("%c", tabela[i][k]);
        }
    }


    switch (modo)
    {
    case 'f':
 //       modo_facil();
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