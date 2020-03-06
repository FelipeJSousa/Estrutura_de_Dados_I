#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>

using namespace std;

float calc_mediaalunos(int vetor[], int n){
    float media = 0, soma=0;
    int qtd, i;

    for(i=0;i<n;i++)
    {
        soma+=vetor[i];
    }
    media = soma/n;

    return media;

}

void lervetor_float(float fvetor[], int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("Informe o valor da posicao %d: ", i);
        scanf("%f",&fvetor[i]);
    }
}
void lervetor(int vetor[], int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("Informe o valor da posicao %d: ", i);
        scanf("%d",&vetor[i]);
    }
}

void exibefvetor(float fvetor[], int n)
{
    int i;
    printf("\n\nVetor:\n|");
    for(i=0;i<n;i++)
    {
        printf("%f | ", fvetor[i]);
    }
}

void exibevetor_inverso(int vetor[], int n)
{
    int i;
    printf("\n\nVetor em ordem Inversa:\n|");
    for(i=n-1;i>=0;i--)
    {
        printf("%d | ", vetor[i]);
    }
}

int main()
{
    char desc[20];
    int n, opcao;


    do
    {
        system("cls");
        printf("\n 1 - Opcao 1");
        printf("\n 2 - Opcao 2");
        printf("\n 3 - Opcao 3");
        printf("\n 4 - Opcao 4");
        printf("\n 5 - Opcao 5");

        printf("\nOpcao >>> ");
        scanf("%d", &opcao);

        if (opcao ==1){
            printf("||Exercicio 1||\n\n");
            printf("Informe a quantidade de posicoes do vetor: ");
            scanf("%d", &n);
        }
        if (opcao ==2){
            printf("||Exercicio 2||\n\n");
            printf("Informe a quantidade de posicoes do vetor: ");
            scanf("%d", &n);
        }
        if (opcao ==3){
            printf("||Exercicio 3||\n\n");
            printf("Informe a quantidade de alunos: ");
            scanf("%d", &n);
        }
        if (opcao ==4){

        }
        if (opcao ==5){

        }

        printf("\n\n");
        int vetor[n];
        float media;
        int i, acima=0, abaixo=0;

        switch (opcao)
        {
          case 1:
            lervetor(vetor,n);
            exibevetor_inverso(vetor,n);

          break;

          case 2:


          break;

          case 3:

            for(i=0;i<n;i++)
            {
                printf("Informe o valor da nota do aluno %d: ", i);
                scanf("%d",&vetor[i]);
            }
            media = calc_mediaalunos(vetor, n);

            for(i=0;i<n;i++)
            {
                if(vetor[i]>media){
                    acima++;
                }
                else{
                    abaixo++;
                }
            }
            if(abaixo==n){
                printf("Nao ha nenhum aluno com nota acima da media!");
            }
            else{
                printf("%d alunos estao acima da media\n%d alunos estao abaixo da media", acima, abaixo);
            }

           break;

           case 4:



           break;

           case 5:


           break;

           default:
              if (opcao != 0)
                printf("Opcao invalida !!!");
           break;
        }

        system("pause");

    } while(opcao != 0);


    return 0;
}



// 1.	Dada uma sequencia de n números, imprimi-la na ordem inversa à da leitura.


