#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <assert.h>
#include "useful.h"

#define MAXCHAR 1024
#define MAX_STR_LEN 256

#define chemin "phone_book.csv"

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
            printf(" ");
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

void ajouter(){
    char tab[MAXCHAR];
    printf("\nque souhaiter vous ajouter au texte ?\n");
    fflush (stdin);
    fgets(tab,MAXCHAR,stdin);
    FILE *fp;
    fp = fopen(chemin,"r+");
    if (fp == NULL){
        printf("error");
        exit(1);
    }
    fseek(fp, 0, SEEK_END);
    fprintf(fp,"%s\n",tab);
    
    fclose(fp);
}

void ajouterfpf(){
  char nom[3] = {'n','o','m'};
  char prenom[6] = {'p','r','e','n','o','m'};
  char ville[5] = {'v','i','l','l','e'};
  char cdePostal[9] = {'c','d','e','P','o','s','t','a','l'};
  char numero[6] = {'n','u','m','e','r','o'};
  char mail[4] = {'m','a','i','l'};
  char metier[6] = {'m','e','t','i','e','r'};
  char *tab[7] = { nom, prenom, ville, cdePostal, numero, mail, metier};
  char *add[7];
  for (int i=0; i<7; i++){
    printf("veuillez inserer le %s de la personne :\n",tab[i]);
    fflush(stdin);
    fgets(tab[i],50,stdin);
  }
  for (int i=0; i<7; i++){
    printf("%s : \n",tab[i]);
  }
}