#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <assert.h>
#include <stdbool.h>
#include "func.h"
#include "useful.h"


#define MAXCHAR 1024
#define MAX_STR_LEN 256

#define chemin "annuaire500.csv"

void afficher(void);
void menu(void);
void ajouter(void);
void ajouterfpf(void);
void affichermenu(void);
void sift(int [], int, int);
void heap_sort(int [], int);
int srch_dicho(int [], int);
int srch_seq(int [], int);

void clear(void);
void permute(int [], int, int);



// faire une fonction qui compte les ligne et faire
// tab[nligne].nom[pos]=str

int main(int argc, char **argv) {
    if (argc != 1) {
        for (int i = 2; i < argc; i++) {
            switch (argv[i][0]) {
                case 'a' : //add
                    break;
                case 'd' : //delete
                    break;
                case 'm' : //modify
                    break;
                case 'p' : //print
                    break;
                case 'r' : //research
                    break;
                case 's' : //sort
                    break;
            }
        }
        return 0;
    }
    else {
        int tab;
        menu();
        return 0;
    }
}
