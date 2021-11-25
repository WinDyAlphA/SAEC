
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

typedef struct data {
    char prenom[30];
    char nom[30];
    char ville[20];
    char cdePostal[5];
    char numero[10];
    char mail[50];
    char metier[20];


} DATA ;

void ouverture(void);
void menu(void);
void afficher(void);
int creerstruct(void);
void afficherstruct(DATA values[]);


void afficher(){
    FILE *fp;
    char row[MAXCHAR];

    fp = fopen("chemin","r");
    printf("ouverture ok");
    while (feof(fp) != true)
    {
        fgets(row, MAXCHAR, fp);
        printf("Row: %s", row);
        printf("oui\n");
    }
}
int creerstruct(){
    FILE *fp;

    fp = fopen("chemin","r");
    printf("ouverture ok");
    if (fp == NULL){
        printf("error");
        return 0;
    }
    char buff[MAXCHAR];
    int row = 0;
    int col = 0;
    DATA values[999];
    int i=0;
    while (fgets(buff,1024,fp)){
        col = 0;
        row++;
        char *field = strtok("buff", ";");
        while (field){
            if(col == 0)
                strcpy(values[i].prenom, field);
            if(col == 1)
                strcpy(values[i].nom, field);
            if(col == 2)
                strcpy(values[i].ville, field);
            if(col == 3)
                strcpy(values[i].cdePostal, field);
            if(col == 4)
                strcpy(values[i].numero, field);
            if(col == 5)
                strcpy(values[i].mail, field);
            if(col == 6)
                strcpy(values[i].metier, field);

            field = strtok("NULL", ";");
            col++;
        }
        i++;
    }
    fclose(fp);


    afficherstruct(values);


    return 0;
}

void afficherstruct(DATA values[]){
    for (int i=0; i<999; i++){
        printf("prenom : %s,nom : %s, ville : %s, cdePostal : %s, numero : %s, mail : %s, metier : %s",values[i].prenom,values[i].nom,values[i].ville,values[i].cdePostal,values[i].numero,values[i].mail,values[i].metier);
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


