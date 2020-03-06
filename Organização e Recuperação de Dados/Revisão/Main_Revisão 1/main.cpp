#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>

using namespace std;

void execl();
void exec2();
void exec3();
void exec4();
void exec5();
void exec6();
void par_impar();

int type_intnum();

int main()
{
    int opcao;

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

        printf("\n\n");

        switch (opcao)
        {
          case 1: execl();

          break;

          case 2:


          break;

          case 3:



           break;

           case 4:



           break;

           case 5:


           break;

           default:
              if (opcao != 0){
                printf("Opcao invalida !!!");
           break;
        }
        getch();
    }
    }while(opcao != 0);

    return 0;
    }


int type_intnum()
{
    int num;
    printf("Informe um numero: ");
    scanf("%d", &num);

    return num;
}

char type_name()
{
    char name[100];
    printf("Informe o nome: ");
    gets(name);
    return name;
}

void par_impar(int num)
{
    if (num%2 == 0)
    {
        printf("Numero eh patype_intnumr!");
    }
    else{
        printf("Numero eh impar!");
    }
}
//1.Fazer um algoritmo para ler um valor x e determinar se ele é par ou impar.
void execl()
{
    printf("<<Exercicio 1>>\n\n");
    void par_impar(type_intnum());
}
//2.Para atingir-se o índice olímpico, são realizados vários torneios de corridas
//  de 100 metros. Faça um algoritmo que leia o nome e o tempo de um atleta e
//  apresente sua pontuação, conforme listado abaixo:
//  T < 10 seg  - 100 pontos
//  T >= 10 e T <=13  seg  - 70 pontos
//  T > 13 Seg - 40 pontos

void exec2()
{
    char nome[100];
    printf("<<Exercicio 2>>\n\n");
    nome = type_name();

}



