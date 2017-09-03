#ifndef CSORTVIEW_H
#define CSORTVIEW_H

#include "sortview.h"
#include <vector>
static SortView sview;

//versão c
void view_show(int *vet, int qtd, int * pos, const char * colors){
    int marcados = std::string(colors).size();
    sview.show(std::vector<int>(vet, vet + qtd),
               std::vector<int>(pos, pos + marcados),
               std::string(colors));
}

//versão cpp
void view_show(std::vector<int> &vet, std::vector<int> pos = {}, std::string cores = ""){
    sview.show(vet, pos, cores);
}

void view_set_bar(){
    sview.set_bar_view();
}

void view_set_dot(){
    sview.set_dot_view();
}

void view_set_faixa(int begin, int end){
    sview.set_faixa(begin, end);
}

void view_lock(){
    my_player->wait();
}

#endif // CSORTVIEW_H

