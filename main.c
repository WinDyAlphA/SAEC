
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <assert.h>
#include <stdbool.h>
#include "utilities.h"
#include "func.h"

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
}
struct data personne[10];

void ouverture(void);
void menu(void);
void afficher(void);
void creerstruct(void);
void afficherstruct(void);

void creerstruct(){
  char temp[MAXCHAR];
  char r[30];
  int i =0;
  char * pointer;
  FILE *fp;
  fp = fopen(chemin, "r");
  if (fp == NULL){
    printf ("error");
    exit(1);
  }
  while (!feof(fp)){
    fgets(r, 130, import);
    pointer = strtok(r,";");
    while (pointer != NULL){
      strcpy(temp[i].nom,pointer);
      pointer = strtok(NULL,";");
      strcpy(temp[i].prenom,pointer);
      pointer = strtok(NULL,";");
      strcpy(temp[i].ville,pointer);
      pointer = strtok(NULL,";");
      strcpy(temp[i].cdePostal,pointer);
      pointer = strtok(NULL,";");
      strcpy(temp[i].numero,pointer);
      pointer = strtok(NULL,";");
      i++;
    }
  }
  fclose(fp);
  afficherstruct();
}
void afficherstruct(){
  int i=0;
  for (i=0;i<10;i++){
    printf("%s_%s_%s",personne[i].nom,personne[i].prenom,personne[i].ville);
  }
}

void afficher(){
   FILE *fp = fopen(chemin,"r");
    char row[MAXCHAR];

    if  (fp == NULL){
        perror("error");
        exit(1);
    }

    while (fgets(row, sizeof(row), fp)){
        char *token;
        token = strtok(row, ";");

        while (token != NULL){
            printf("%s", token);
            token = strtok(NULL, ";");
        }
        printf("\n");
    }
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
           creerstruct();

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

void ouverture(){
    
    menu();
}

int main(){
    printf("main ok");
    ouverture();
    return 0;
}


