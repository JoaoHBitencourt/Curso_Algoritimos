#include <stdio.h>

int main (){

double x, y, valor, area, preco;

printf("Digite a largura do terreno: ");
scanf("%lf", &x);
printf("Digite o comprimento do terreno: ");
scanf("%lf", &y);
printf("Digite o valor do metro quadrado: ");
scanf("%lf", &valor);

area = x * y;
preco = area * valor;

printf("Area do terreno = %.2lf\n", area);
printf("Preco do terreno = %.2lf\n", preco);

    return 0;
}