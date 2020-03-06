#ifndef METODOSDEORDENACAO_H_INCLUDED
#define METODOSDEORDENACAO_H_INCLUDED

void preenche_vetor(int vetor[], int tam)
{
    int x;
    for (x=0; x<tam; x++)
    {
        vetor[x] = rand()%100;
    }
}

void exibir_vetor(int vetor[], int tam)
{
    int x;
    for (x=0; x<tam; x++)
    {
        printf("| %d | ", vetor[x]);
    }
}


void insertionSort_Decrescente(int vetor[], int tam )
{
   int i, j, valorAtual;

   for( j=1; j < tam; j++ )
   {
      valorAtual = vetor[j];
      i = j-1;

      while(i >= 0 && vetor[i] < valorAtual)
      {
        vetor[i+1] = vetor[i];
        i--;
      }

      vetor[i+1] = valorAtual;
   }
}

//Ordenação por inserção
void insertionSort(int vetor[], int tam )
{
   int i, j, valorAtual;

   for( j=1; j < tam; j++ )
   {
      valorAtual = vetor[j];
      i = j-1;

      while(i >= 0 && vetor[i] > valorAtual)
      {
        vetor[i+1] = vetor[i];
        i--;
      }

      vetor[i+1] = valorAtual;
   }
}

//Ordenação por Seleção
void selectionSort( int vetor[], int tam )
{
   int i, j, aux, posicaoValorMinimo;

   for (i = 0; i < ( tam - 1 ); i++)
   {
      posicaoValorMinimo = i;
      for (j = ( i + 1 ); j < tam; j++)
      {
         if( vetor[j] < vetor[posicaoValorMinimo] )
         {
           posicaoValorMinimo = j;
         }
       }

       if ( i != posicaoValorMinimo )
       {
          aux = vetor[i];
          vetor[i] = vetor[posicaoValorMinimo];
          vetor[posicaoValorMinimo] = aux;
       }
   }
}


//Ordenação por Bolha
void BubbleSort (int vetor[], int tam)
{
    int i,j,aux;
    int nc = 0;

    for (i = (tam-1); i >= 0; i--)
    {
      for (int j = 0; j <= i; j++)
      {
          if (vetor[j] > vetor[j+1])
          {
              aux  = vetor[j];
              vetor[j]   = vetor[j+1];
              vetor[j+1] = aux;
          }
      }
    }
}





#endif // METODOSDEORDENACAO_H_INCLUDED
