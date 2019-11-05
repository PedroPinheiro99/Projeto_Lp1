//
// Created by ppinh on 05/11/2019.
//
#include "projeto.h"
#include <stdio.h>
#include <strings.h>
#include <stdlib.h>
#include <time.h>

int matriz_aleatoria(){
    int tam=0;
    printf("Insira o tamanho do tabuleiro:");
    scanf("%d",&tam);
    int matriz[tam][tam];
    printf("\t");
    srand(time(NULL));
    for(int i = 0; i < tam; i++) {
        for (int j = 0; j < tam; j++){
            matriz[i][j] = rand() % 10;
        }
    }
    for (int k = 0; k < tam ; k++) {
        for (int i = 0; i < tam ; i++) {
            printf(" \t %d",matriz[k][i]);
        }
        printf("\n");
    }
}

void menu()
{
    char op;
    do
    {
        printf("\n\n");
        printf("===============================\n");
        printf("|              MENU           |\n");
        printf("|=============================|\n");
        printf("| [1]Gerar Matrix Aleatoria   |\n");
        printf("| [2]Carregar Matrix por txt  |\n");
        printf("|                             |\n");
        printf("| [S]air                      |\n");
        printf("===============================\n");
        fflush(stdin);
        printf("->");scanf("%c", &op);
        switch (op)
        {
            case '1':
                printf("\nmenu Artistas\n");
                matriz_aleatoria();
                break;
            case '2':
                printf("\nmenu Musicas\n");
                break;
            case 's':
            case 'S':
                break;
            default:
                printf("\n");
                printf("===============================\n");
                printf("|       Opcao invalida!!!     |\n");
                printf("===============================\n");
        }
        if (op!='s' && op!='S')
        {
            system("pause");
        }
    }
    while (op!='s' && op!='S');
}
int main_projeto(int argc, char **argv){
    menu();
    printf("===============================\n");
    printf("|  Obrigado, ate a proxima!!! |\n");
    printf("===============================\n");
}