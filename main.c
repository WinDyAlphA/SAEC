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

#define chemin "phone_book500.csv"

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

typedef struct data {
    char prenom[30];
    char nom[30];
    char ville[20];
    char codePostal[5];
    char numero[10];
    char mail[50];
    char metier[20];
};

// faire une fonction qui compte les ligne et faire
// tab[nligne].nom[pos]=str

int main(int argc, char **argv) {
    FILE *fp = fopen(chemin,"a+");
    struct data x;
    error_fopen(fp);
    if (argc != 1) {
        for (int i = 2; i <= argc; i++) {
            switch (argv[i][0]) {
                case 'a' : //add
                    break;
                case 'd' : //delete
                    break;
                case 'm' : //modify
                    research(fp);
                    //modify(x, fp);
                    break;
                case 'p' : //print
                    //associate();
                    print();
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
        error_fclose(fp);
        return 0;
    }
}
