#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <assert.h>
#include "utilitaries.h"
#include "func.h"


#define chemin "phone_book.csv"

typedef struct data {
//int nb;
} DATA ;


int main () {
    clear();
    FILE* phone_book = fopen(chemin, "w");
    DATA x;
    int option=0;
    clear();
    printf("\n\t\t\t   **********-- M E N U --**********");
    printf("\n\n\t\t\t\tQue voulez vous faire ?\n\n");
    printf("\t\n 1 - Ajouter un client");
    printf("\t\n 2 - Modifier les donnees d'un client");
    printf("\t\n 3 - Supprimer un client");
    printf("\t\n 4 - Afficher les donnees-client");
    printf("\t\n 5 - Rechercher une caracterisque client");
    printf("\t\n 6 - Afficher la liste des clients repondant a une caracteristique commune ");
    printf("\t\n 7 - Rechercher ou afficher les données d'un client ");
    printf("\t\n 8 - Afficher la liste des clients et le nombre de clients ayant des informations manquantes ");
    printf("\t\n 9 - Sauvegarder les données d'un fichier");
    return 0;
}
