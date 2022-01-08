#ifndef USEFUL
#define USEFUL
#include "useful.c"

struct data;

void afficher(void);
void menu(struct data (*p)[]);
void ajouter(void);
void ajouterfpf(void);
void affichermenu(void);
void srch(struct data *p[]);
void finds(struct data *p[]);
void structure(struct data (*p)[]);

/*
void sift(int, int);
void heap_sort(int);
int srch_dicho(int);
int srch_seq(int);
*/
#endif

