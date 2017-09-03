#include <stdlib.h>
#include <time.h>
#include <stdio.h>

#include "libs/csortview.h"

//cores rgbcymkw
//red, green, blue, cyan, yellow, magenta, black, white

void swap(int * a, int * b){
    int c = *a;
    *a = *b;
    *b = c;
}

void minimum_sort(int * vet, int qtd){
    for(int i = 0; i < qtd - 1; i++){
        for(int j = i + 1; j < qtd; j++){
            int pos[] = {i, j};
            view_show(vet, qtd, pos, "gy");
            if(vet[j] < vet[i]){
                swap(&vet[i], &vet[j]);
                view_show(vet, qtd, pos, "yg");
            }
        }
    }
}

int main(){
    srand(time(NULL));
    const int qtd = 70;
    int vet[qtd];
    int min = 10;
    int max = 400;
    int i;//inicializando vetor;
    for(i = 0; i < qtd; i++)
        vet[i] = (rand() % (max - min + 1) + min);

    view_set_bar();
    view_set_faixa(0, qtd - 1);

    minimum_sort(vet, qtd);

    view_lock();
    return 0;
}





















