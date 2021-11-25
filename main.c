#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <assert.h>
#include "utilitaries.h"
#include "func.h"


#define chemin "phone_book.csv"

typedef struct data {
<<<<<<< HEAD
//int nb;
=======
    char nom[20];
>>>>>>> a4929cdfec3210a7c1c334693e3d6a3874d50007
} DATA ;

void ouverture(void);
void menu(void);

<<<<<<< HEAD
int main () {
    clear();
    FILE* phone_book = fopen(chemin, "w");
    DATA x;
    int option=0;
    clear();
=======
void menu(){
    int c=0;
>>>>>>> a4929cdfec3210a7c1c334693e3d6a3874d50007
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
    printf("\t\n 9 - Sauvegarder les données d'un fichier \n");
    scanf("%d",&c);
    switch(c)
       {
           case 1:
               break;
           case 2:
               break;
           case 3:
               break;
           case 4:
               break;
           case 5:
               break;
           case 6:
               break;
           case 9:
               break;
       default: printf("error");
       }
}
void ouverture(){
    FILE *fic;
    fic = fopen("chemin", "a+");
    if (fic==NULL)
    {
        printf("ouverture fichier impossible !");
        exit(0);
    }
    else {
        menu();
    }
}
<<<<<<< HEAD
=======

int main () {
    ouverture();
    int option=0;
    return 0;
}
    
>>>>>>> a4929cdfec3210a7c1c334693e3d6a3874d50007
