#include "lib.h"
float numeroMassimo (const float numeri [], int dim){
    numeri [dim] ;
    float massimo = numeri [0];
    for (int i=0 ; i < dim ; i++){
        if (massimo < numeri[1]){
            massimo = numeri [1];
        }
    }
    return massimo;
}
