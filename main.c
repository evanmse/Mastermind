#include "master.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 5

int main(){
    int random[SIZE], comb[SIZE];
    int x[20][5];
    int a,b,c;

    srand((unsigned)time(NULL));
    random_comb(random);

    printf("  __  __           _                      _           _ \n"
           " |  \\/  |         | |                    (_)         | |\n"
           " | \\  / | __ _ ___| |_ ___ _ __ _ __ ___  _ _ __   __| |\n"
           " | |\\/| |/ _` / __| __/ _ \\ '__| '_ ` _ \\| | '_ \\ / _` |\n"
           " | |  | | (_| \\__ \\ ||  __/ |  | | | | | | | | | | (_| |\n"
           " |_|  |_|\\__,_|___/\\__\\___|_|  |_| |_| |_|_|_| |_|\\__,_|\n"
           "                                                        \n"
           "                                                        ");

    for(int i = 0; i < 20; i++){
        do{
            a = read_comb(comb);
        }while(a == 0);

        display_comb(comb);
        b = well_placed(random, comb).nbr;
        c = at_wrong_place(random, comb ).nbr;
        result(c,b);
        if(c==0 && b==5){
            printf("\n WHOAAA you found the number mister !!");
            display_comb(random);
            break;
        }else{
            for (int j = 0; j < SIZE; ++j) {
                x[i][j] = comb[j];
            }
        }
    }
    return 0;
}