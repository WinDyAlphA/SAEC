#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <assert.h>
#include <header.h>


#define chemin "phone_book.csv"

typedef struct data {

} DATA ;


int main () {
    clear();
    FILE* phone_book = fopen(chemin, "w");
    DATA;
    int option=0;
    clear();
    printf("\n\t\t\t\tQue voulez vous faire ?\n\n");
    printf("\t\n 1 - Ajouter un client");
    printf("\t\n 2 - Modifier les donnees d'un client");
    printf("\t\n 3 - Supprimer un client");
    printf("\t\n 4 - Afficher les donnees-client");
    return 0;
}