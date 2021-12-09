#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <assert.h>
#include "useful.h"

#define MAXCHAR 1024
#define MAX_STR_LEN 256

#define chemin "annuaire500.csv"

void afficher(void);
void menu(void);
void ajouter(char *tab);
void ajouterfpf(void);
void affichermenu(void);
void concat(char *str1, char *str2, char *end);

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
            menu();
               break;
           case 2:
           ajouterfpf();
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

void ajouter(char *tab){
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
void concat(char *str1, char *str2, char *end){
  int i=0;
  i = strlen(str1);
  str1[i-1] = ';';
  end = strcat(str1,str2);

}

void ajouterfpf(){
  int i=0;
  char nom[50] = {'n','o','m'};
  char prenom[50] = {'p','r','e','n','o','m'};
  char ville[50] = {'v','i','l','l','e'};
  char cdePostal[50] = {'c','d','e','P','o','s','t','a','l'};
  char numero[50] = {'n','u','m','e','r','o'};
  char mail[50] = {'m','a','i','l'};
  char metier[50] = {'m','e','t','i','e','r'};
  char *tab[7] = { nom, prenom, ville, cdePostal, numero, mail, metier};
  char temp[350];
  char *add[7];
  for (int i=0; i<7; i++){
    printf("veuillez inserer le %s de la personne :\n",tab[i]);
    fflush(stdin);
    fgets(tab[i],350,stdin);
  }
  concat(nom,prenom,temp);
  concat(nom,ville,temp);
  concat(nom,cdePostal,temp);
  concat(nom,numero,temp);
  concat(nom,mail,temp);
  concat(nom,metier,temp);

  printf("%s : \n",tab[0]);
  ajouter(tab[0]);
  
}

void affichermenu(){
    menu();
}
