#include <stdio.h>

int main(){

int N;
double maior;

printf("Qual a ordem da matriz? ");
scanf("%d", &N);

double mat[N][N];

for (int i = 0; i < N; i++)
{
    for (int j = 0; j < N; j++)
    {
        printf("Elemento [%d,%d]: ", i, j);
        scanf("%lf", &mat[i][j]);
    }
    
}

printf("MAIOR ELEMENTO DE CADA LINHA:\n");

for (int i = 0; i < N; i++)
{   maior = mat[i][0];
    for (int j = 0; j < N; j++)
    {
        if (mat[i][j] > maior)
        {
            maior = mat[i][j];
        }
            
    }
    printf("%.0lf\n", maior);
}

    return 0;
}