#include <iostream>
#include <stdio.h>
#include <conio.h>
//rand()
#include <stdlib.h>
#include "MetodosDeOrdenacao.h"




using namespace std;

int main()
{
    int tam, option;

    printf("Informe o tamanho do vertor: ");
    scanf("%d", &tam);
    int vetor[tam];

    preenche_vetor(vetor,tam);
    printf("\n\n\n|| Vetor antes da Ordenacao ||\n\n");
    exibir_vetor(vetor,tam);


    printf("\n\nSelecione um metodo de Ordenacao: \n");
    printf("1 - Insertion Sort\n");
    printf("2 - Selection Sort \n");
    printf("3 - BubbleSort\n");
    printf("4 - Insertion Sort Decrescente\n");
    printf("5 - Selection Sort Decrescente\n");
    printf("6 - BubbleSort Decrescente\n");
    scanf("%d", &option);


    switch(option){

        case 1:
            insertionSort(vetor,tam);
            printf("\n\n|| Vetor depois da Ordenacao ||\n\n");
            exibir_vetor(vetor,tam);
            printf("\n\n");
            break;

        case 2:
            selectionSort(vetor,tam);
            printf("\n\n|| Vetor depois da Ordenacao ||\n\n");
            exibir_vetor(vetor,tam);
            printf("\n\n");
            break;

        case 3:
            BubbleSort(vetor,tam);
            printf("\n\n|| Vetor depois da Ordenacao ||\n\n");
            exibir_vetor(vetor,tam);
            printf("\n\n");
            break;

        case 4:
            insertionSort_Decrescente(vetor,tam);
            printf("\n\n|| Vetor depois da Ordenacao Decrescente||\n\n");
            exibir_vetor(vetor,tam);
            printf("\n\n");
            break;

        case 5:
            break;

        case 6:
            break;

        default:
            printf("Opcao invalida...");
            break;
    }



    return 0;
}
