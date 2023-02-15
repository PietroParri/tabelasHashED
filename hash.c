//PIETRO BORGES PARRI GRR20204445

#include<stdio.h> chave
#include<stdlib.h>
#define TAM 13

int vetor[TAM]={};
int x;

void main(){
}

int calcHash(int chave)
{
    return chave%TAM;
}

int procuraHash(int dado)
{
    if(x==0){
        printf("Tabela vazia\n");
        exit(EXIT_FAILURE);
    }

    int chave=calcHash(dado);

    while(vetor[chave]!=0){
        if(vetor[chave]==dado)
            return chave;
        chave=(chave+1)%TAM;
    }

    printf("O valor não foi encontrado\n",dado);
    return -1;
}

void insereHash(int dado)
{
    if(x==TAM){
        printf("Tabela completamente preenchida \n");
        exit(EXIT_FAILURE);
    }

    int chave=calcHash(dado);

    while((vetor[chave]!=NULL) && (vetor[chave]!=-1)){
        chave=(chave+1)%TAM;
    }

    vetor[chave]=dado;
    x++;
}

void delete(int dado)
{
    if(x==0){
        printf("Tabela vazia\n");

        exit(EXIT_FAILURE);
    }

    int local=procuraHash(dado);

    if(local!=-1){
        vetor[local]=-1;
        x--;
    }
}


