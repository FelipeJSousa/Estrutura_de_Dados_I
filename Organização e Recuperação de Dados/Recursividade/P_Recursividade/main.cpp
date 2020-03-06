#include <iostream>
#include <conio.h>
#include <stdio.h>

#define TF 3

using namespace std;
int fatorial (int n){
    if(n==0 || n==1){
        return 1;
    }

    return n*fatorial(n - 1);
}
int cond_fatorial (int n){
    int i, fat=n;
    do{
        fat *= fat*(n-1);
        n--;
    }while(n>0);

    return fat;
}
void lervetor_int(int vettf[])
{
    int i;
    for(i=0;i<TF;i++)
    {
        printf("Informe o valor da posicao %d: ", i);
        scanf("%d",&vettf[i]);
    }
}
void lervetor_float(float fvettf[])
{
    int i;
    for(i=0;i<TF;i++)
    {
        printf("Informe o valor da posicao %d: ", i);
        scanf("%f",&fvettf[i]);
    }
}
int calc_exp(int x, int y){
        // base = x | expoente = y
        int exp = 1;
        if(y==0){
            return 1;
        };
        return x * calc_exp(x,y-1);

}
int f_exemplo(int i){
    //5=15
    if(i>1){
        return(i+f_exemplo(i-1));
    }
        else return 1;
}

int f(int i){
    //5=15
    int aux = i-1;
    for (aux;aux>=1;aux--){
        i+=aux;
    }
    return i;
}

int somarvettf(int vet[TF], int tam){
    if(tam==1){
        return vet[tam-1];
    }
   return vet[tam-1]+somarvettf(vet,tam-1);
}

void preenchernum(int tam){
    if(tam==0){
        printf("%d ", tam);
    }
    else{ //
        preenchernum(tam-1);
        printf("- %d ", tam);
    }

}
int mdc(int x, int y){
    if(x==0){
        return y;
    } else if(y==0){
        return x;
    }
    return mdc(y, x%y);
}


int main(){
    int opcao;
    int num,y, x, tam, vettf[TF];
    float fvettf[TF];

    do
    {

        printf("\n 1 - Fatorial");
        printf("\n 2 - Calcular Exponenciacao");
        printf("\n 3 - Transformar funcao nao recursiva");
        printf("\n 4 - Somar Valor Inteiro Vetor");
        printf("\n 5 - Calcular MDC");
        printf("\n 6 - Preencher Numeros Ate");

        printf("\nOpcao >>> ");
        scanf("%d", &opcao);

        printf("\n\n");

        switch (opcao)
        {
          case 1:
            int n,op;
            printf("Informe o valor para calcular o fatorial: ");
            scanf("%d", &n);


            printf("\n\nEscolha: 1 - Recursivo\n2 - Nao recursivo");
            scanf("%d", &op);
            do{
                if(op==1){
                    printf("Recursivo>>> O fatorial de %d eh: %d", n, fatorial(n));
                }
                else if(op==2){
                    printf("Nao Recursivo>>> O fatorial de %d eh: %d", n, cond_fatorial(n));
                }
                else{
                    printf("Opcao invalida!");
                }
            }while(op!=1&&op!=2);


          break;

          case 2:
              printf("|Calcular Exponenciacao|\n\n");
              printf("Informe um numero: ");
              scanf("%d", &num);
              printf("Informe o expoente: ");
              scanf("%d", &y);
              printf("Resultado: %d", calc_exp(num,y));



          break;

          case 3:
              printf("Informe um numero: ");
              scanf("%d", &num);
              printf("Resultado>> %d", f(num));



           break;

           case 4:
              lervetor_int(vettf);
              printf("Resultado da Soma dos Vetores>>> %d", somarvettf(vettf, TF));

           break;

           case 5:
               printf("<< MDC entre Dois Numeros >>\n\n");
               printf("Informe o primeiro numero: ");
               scanf("%d", &x);
               printf("Informe o segundo numero: ");
               scanf("%d", &y);
               printf("Maior Divisivel Comum>> %d", mdc(x,y));



           break;

           case 6:
               printf("Informe um numero para preencher: ");
               scanf("%d", &num);

               preenchernum(num);

               break;

           default:
                if (opcao != 0){
                    printf("Opcao invalida !!!");
                }
           break;
        }

        getch();

    } while(opcao != 0);

}
