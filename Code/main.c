#include <stdio.h>
#include <stdlib.h>

void imprimi(char **vetor, int n_l, int n_c){
    printf("debug: entrou >imprimi<");
    
    for(int l=0; l<n_l; l++){
        for(int c=0; c<n_c; c++){
            printf("%c ", vetor[l][c]);
        }
        printf("\n");
    }
}

int main(){
    int n_l=0;
    int n_c=0;
    scanf("%d", &n_l);
    scanf("%d", &n_c);
    char **vetor = malloc(n_l*sizeof(char*));

    //Alocando memória para as linhas do vetor
    for(int i=0; i<n_l; i++){
        vetor[i] = malloc(n_c*sizeof(char));
    }

    for(int l=0; l<n_l; l++){
        for(int c=0; c<n_c; c++){
            scanf("%c", &vetor[l][c]);
        }
    }

    imprimi(vetor, n_l, n_c);

    return 0;
}