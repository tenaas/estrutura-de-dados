#include <stdio.h>
#include <stdlib.h>

int somar(int x, int y){
	int resultado;
	resultado = x + y;
	return resultado;
}

int subtrair(int x, int y){
	int resultado;
	resultado = x - y;
	return resultado;
}

int produto(int x, int y){
	int resultado;
	resultado = x * y;
	return resultado;
}

int divi(int x, int y){
	int resultado;
	resultado = x / y;
	return resultado;
}

int main()
{
    int a, b, c;

    printf("Informe o valor de A:\n");
    scanf("%d", &a);
    printf("Informe o valor de B:\n");
    scanf("%d", &b);

    c = somar(a, b);
    printf("Soma %d\n", c);

    c = subtrair(a, b);
    printf("Subtracao %d\n", c);

    c = produto(a, b);
    printf("Produto %d\n", c);

    c = divi(a, b);
    printf("Divisao %d\n", c);

    return 0;
}
