
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
};
struct data personne[10];

void ouverture(void);
void menu(void);
void afficher(void);
void ajouter(void);

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
    while (c != 9 ){
    switch(c)
       {
           case 1:
           printf("test");
           ajouter();
            
               break;
           case 2:
           printf("test");
           
               break;
           case 3:
           printf("test");
           
               break;
           case 4:
           afficher();
           
               break;
           case 5:
           printf("test");

           
               break;
           case 6:
           printf("test");
           
               break;
           case 9:
               break;
       default: printf("error");
       }
       ouverture();
     }
}

// faire une fonction qui compte les ligne et faire 
// tab[nligne].nom[pos]=str

void ouverture(){
    
    menu();
}

int main(){
    printf("main ok");
    ouverture();
    return 0;
}


