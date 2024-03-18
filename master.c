#include "master.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void display_comb(int comb[]){
    printf("%d - %d - %d - %d - %d", comb[0],comb[1],comb[2],comb[3],comb[4]);
}

int read_comb(int comb[]){
    int nb = 0, count = 0;
    printf("\n Enter a number : ");
    scanf(" %d",&nb);
    int temp = nb;
    do{
        temp /= 10;
        count ++;
    }while(temp != 0);

    if(count !=5){
        printf("You must enter exactly 5 digits.\n");
        return 0;
    }else{

        count = 4;
        do {
            comb[count] = nb % 10;
            nb /= 10;
            count--;
        } while (nb != 0);
        return 1;

    }
}

void random_comb(int array[]){
    srand(time(NULL));

    for(int i = 0; i < SIZE; i++){
        array[i] = rand() % 8;
    }
}

Wp well_placed(int *comb, int *propos) {
    Wp res;
    res.nbr = 0;
    int count = 0;
    for(int i = 0; i < SIZE; i++){
        if(comb[i]==propos[i]){
            res.nbr ++;
            res.val[count] = comb[i];
            count ++;
        }
        res.nbr_val = count;
    }
    return res;
}

Awp at_wrong_place(int comb[], int propos[]){
    Awp res;
    res.nbr = 0;
    int count = 0;
    for(int i=0;i<SIZE; i++){
        for(int j=0; j<SIZE; j++){
            if(comb[i]==propos[j] && comb[i]!=propos[i]){
                res.nbr ++;
                res.val[count] = comb[i];
                count ++;
            }
            res.nbr_val = count;
        }
    }
    return res;
}

void result(int x, int y){
    printf("\n%d presents - %d at the good place",x, y);
}