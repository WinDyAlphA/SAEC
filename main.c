#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <assert.h>
#include <stdbool.h>


#define MAXCHAR 1024
#define MAX_STR_LEN 256

#define chemin "annuaire500.csv"

struct data {
    char prenom[30];
    char nom[30];
    char ville[20];
    char cdePostal[5];
    char numero[10];
    char mail[50];
    char metier[20];
};
struct data personne[10];

void ouverture(void);
void menu(void);
void afficher(void);
void ajouter(void);
void ajouterfpf(void);

// faire une fonction qui compte les ligne et faire
// tab[nligne].nom[pos]=str

int main(){
    printf("main ok");
    ouverture();
    return 0;
}


