#include <stdio.h>
#include<stdlib.h>

int main (void){

        int linhas, colunas;
        
        printf("digite a quantidade de linhas da matriz: \n");
        scanf("%d", &linhas);
        printf("digite a quantidade de colunas da matriz \n");
        scanf(%d, &colunas);

        int **matriz = (int*) malloc (linhas*sizeof(int**));
        if (matriz==NULL){
            exit(1);

        }

        int contador;
        for (contador=0; contador<linhas; contador++){
            matriz[contador]= (int*) malloc(colunas*sizeof(int));
        }

        int linha, coluna;
        for (linha=0; linha<linhas; linha++){
            for(coluna=0; coluna<colunas; coluna++){
                scanf("%d", &matriz[linha][coluna]);
            }
        }

        int **matrizT = (int*) malloc (linhas*sizeof(int**));
        if (matrizT==NULL){
            exit(1);
        }
        int contador;
        for (contador=0; contador<linhas; contador++){
            matrizT[contador]= (int*) malloc(colunas*sizeof(int));
        }

        for (linha=0; linha<linhas; linha++){
            for (coluna=0;  coluna<colunas; coluna++){
                matrizT[linha][coluna] = matriz[coluna][linha];
            }
        }

        for(linha=0; coluna<colunas; coluna++){
            for (coluna=0; coluna<colunas; coluna++){
            printf("%d", matriz[linha][coluna]);
        }
        printf("\n");
        }
        for (linha=0; linha<linhas; linha++){
            free (matriz[linha]);
            free(matrizT[linha]);
        }
        free (matriz);
        free(matrizT);

        return=0;
        }