//
// Created by Evan on 18/03/2024.
//

#ifndef UNTITLED_MASTER_H
#define UNTITLED_MASTER_H

#define SIZE 5

typedef struct{
    int nbr;
    int val[SIZE];
    int nbr_val;
} Wp;

typedef struct{
    int nbr;
    int val[SIZE];
    int nbr_val;
} Awp;

void display_comb(int comb[]);
int read_comb(int comb[]);
void random_comb(int array[]);
Wp well_placed(int comb[], int propos[]);
Awp at_wrong_place(int comb[], int propos[]);
void result(int x, int y);

#endif //UNTITLED_MASTER_H
