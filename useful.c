#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <assert.h>
#include "useful.h"


#define chemin "phone_book.csv"

typedef struct data {
    char nom[20];
} DATA ;

void ouverture(void);
void menu(void);
void afficher(void);
const char* decoupe(char* line, int num);

void afficher(){
    {
    FILE* stream = fopen("input", "r");

    char line[1024];
    while (fgets(line, 1024, stream))
    {
        char* tmp = strdup(line);
        printf("Field 3 would be %s\n", decoupe(tmp, 3));
        // NOTE strtok clobbers tmp
        free(tmp);
    }
}
    
}
    const char* decoupe(char* line, int num)
{
    const char* tok;
    for (tok = strtok(line, ";");
            tok && *tok;
            tok = strtok(NULL, ";\n"))
    {
        if (!--num)
            return tok;
    }
    return NULL;
}


void menu(){
    int c=0;
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
           printf("test");
            menu();
               break;
           case 2:
           printf("test");
           menu();
               break;
           case 3:
           printf("test");
           menu();
               break;
           case 4:
           afficher();
           menu();
               break;
           case 5:
           printf("test");
           menu();
               break;
           case 6:
           printf("test");
           menu();
               break;
           case 9:
               break;
       default: printf("error");
       }
}

int main(){
    ouverture();
    int option=0;
    return 0;
}
