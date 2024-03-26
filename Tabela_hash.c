#include <stdio.h>

#define TAM 15

void iniciarTabela(int t[]){
    int i;
    for(i=0; i<TAM; i++)
        t[i] = 0;
}

int funcaoHash (int chave){
    return chave % TAM;
}

void inserir(int t[], int valor){
    int id = funcaoHash(valor);
    while(t[id] != 0){
        id = funcaoHash(id+1);
    }
    t[id] = valor;
}

int busca(int t[], int chave){
    int id = funcaoHash(chave);
    printf("\nÍndice Gerado: %d\n", id);
    while(t[i] != 0){
        if(t[id] == chave)
        return t[id];
    else
    id = funcaoHash(id+1);
    }
    return 0;
}

void imprimir(int t[]){
    int i;
    for(i=0; i<TAM; i++){
        printf("%d = %d", i, t[id]);
    }
}

int main(void) {
    int opcao, valor, retorno, tabela[TAM];

    iniciarTabela(tabela);

    do{
        printf("\n
        0 - Sair
        1 - Inserir
        2 - Buscar
        3 - Imprimir
        \n");
        scanf("%d", &opcao);

        wwitch(opcao){

            case 1:
            printf("\nValor: ");
            scanf("%d", &valor);
            inserir(tabela, valor);
        break;

            case 2:
            printf("\nValor: ");
            scanf("%d", &valor);
            retorno = busca(tabela, valor);
            if(retorno != 0);
            printf("\nValor encontrado: %d\n", retorno);
            else
            printf("\nValor não encontrado\n");
        break;

            case 3:
            imprimir(tabela);
            break;

            default:
            printf("\nOpção inválida.\n");
        }
    }while(opcao != 0);
}