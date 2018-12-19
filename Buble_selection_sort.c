#include <stdio.h>
#include <stdlib.h>

# define tamanho 10

void selectionSort(int *vet, int tam) { 

  int i, j, min, aux;
  
  for (i = 0; i < (tam-1); i++){
  	
    min = i;
     
    for (j = (i+1); j < tam; j++) {
       if(vet[j] < vet[min]) 
         min = j;
    }
     
    if (vet[i] != vet[min]) {
       aux = vet[i];
       vet[i] = vet[min];
       vet[min] = aux;
    }
     
  }
  
}

void bubbleSort(int *vet, int tam) {
	
	int i, j, temp;

	for (i = 0; i < tam - 1; i++){
		
        for (j = (i+1); j < tam; j++){
         	
          	if (vet[j] < vet[i]){
          	
               temp = vet[i];
               vet[i] = vet[j];
               vet[j] = temp;
           }
        }
    }
}


int main(int argc, char *argv[]) {

	int vet[tamanho];
	int i;
	
	
	for(i=0 ; i < tamanho; i++){
		
		printf("Informe um valor: ");
		scanf("%i", &vet[i]);
	}

	printf("\nAntes \n");
	for(i=0 ; i < tamanho; i++){
		
		printf("Valor: %i \n", vet[i]);
	}		

	//bubbleSort(vet, tamanho);
	selectionSort(vet, tamanho);
	
	printf("\nDepois \n");
	for(i=0 ; i < tamanho; i++){
		
		printf("Valor: %i \n", vet[i]);
	}
	
	return 0;
}
