#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int buscaValor(int x, int v[10]){
   int i, res;
   res = 0;
   for(i=0; i<10; i++){
        if(v[i] == x)
            res = 1;
   }
   return res;
}



int main()
{
    int vet1[10], i, valor, resp;

    for(i=0; i<10; i++){
        printf("Preencha o vetor\n");
        scanf("%d", &vet1[i]);
    }
    for(i=0; i<10; i++){
        printf("o vetor eh %d\n", vet1[i]);
    }
    // definir valor
    printf("Informe o valor a ser buscado:\n");
    scanf("%d", &valor);

    resp = buscaValor(valor, vet1);
    if(resp == 1)
    	printf("achou\n");
    else
    	printf("Valor nao encontrado\n");
    return 0;
}
