#include <stdio.h>
#include <stdlib.h>

struct endereco{
    char rua[25];
    int numero;
    char cidade[25];
    char estado[25];
    int cep;
};

struct pessoal{
    int codigo;
    char nome[25];
    char cargo[25];
    float salario;
    struct endereco end;
    int telefone;
};

int funcBuscar(int bs, struct pessoal fc[]){

    int i, result;

    result = 0;

    for(i = 0 ; i < 10; i++){

        if(fc[i].codigo == bs){
            result = 1;
        }

    }

    return result;

}

int main(int argc, char *argv[]) {

    int i, busca;
    struct pessoal func[10];

    for(i = 0 ; i < 1; i++){

            printf("Informe o codigo: ");
            scanf("%i", &func[i].codigo);

            printf("Informe o nome: ");
            scanf("%s", &func[i].nome);

            printf("Informe o cargo: ");
            scanf("%s", &func[i].cargo);

            printf("Informe o salario: ");
            scanf("%f", &func[i].salario);

            printf("Informe o rua: ");
            scanf("%s", &func[i].end.rua);

            printf("Informe o numero: ");
            scanf("%i", &func[i].end.numero);

            printf("Informe a cidade: ");
            scanf("%s", &func[i].end.cidade);

            printf("Informe o estado: ");
            scanf("%s", &func[i].end.estado);

            printf("Informe o CEP: ");
            scanf("%i", &func[i].end.cep);

            printf("Informe o Telefone: ");
            scanf("%i", &func[i].telefone);
    }

    printf("Informe o codigo: ");
    scanf("%i", &busca);

    printf("Retorno: %i", funcBuscar(busca, func));

    return 0;
}
