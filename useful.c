#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <assert.h>
#include <stdbool.h>
#include "func.h"
#include "useful.h"

#define MAXCHAR 1024
#define MAX_STR_LEN 256

#define chemin "phone_book500.csv"

void afficher(void);
void menu(void);
void ajouter(void);
void add(void);
void sift(int [], int, int);
void heap_sort(int [], int);
int srch_dicho(int [], int);
int srch_seq(int [], int);
/*void structure(void);*/

typedef struct data {
    char prenom[30];
    char nom[30];
    char ville[20];
    char cdePostal[5];
    char numero[20];
    char mail[50];
    char metier[20];
}PERSONNE;



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

int error_fopen(FILE *fp) {
    int a;
    if (fp == NULL) {
        a=0;
        printf("Erreur fichier.");
    }
    else {
        a=1;
    }
    return a;
/*void structure(){
  struct data datarecord[500];
  int i =0;
  int j=0;

    while (fgets(row, sizeof(row), fp)){
        char *token;
        token = strtok(row, ";");
        j++;
        while (token != NULL){
            

            switch(i){
              case 0:
              strcpy(datarecord[j].nom,token);
              break;
              case 1:
              strcpy(datarecord[j].prenom,token);
              break;
              case 2:
              strcpy(datarecord[j].ville,token);
              break;
              case 3:
              strcpy(datarecord[j].cdePostal,token);
              break;
              case 4:
              strcpy(datarecord[j].numero,token);
              break;
              case 5:
              strcpy(datarecord[j].mail,token);
              break;
              case 6:
              strcpy(datarecord[j].metier,token);
              break;
            }
            printf(" ");
            i++;

            token = strtok(NULL, ";");
            printf(" l'element %d est : %s \n",i, token);
        }
        i=0;
        printf("\n");
    }
}*/

void menu(){
    clear();
    char c='0';
    printf("\n\t\t\t   **********-- M E N U --**********");
    printf("\n\t\t\t\tQue voulez vous faire ?\n");
    printf("\t\n 1 - Ajouter un client");
    printf("\t\n 2 - Modifier les donnees d'un client");
    printf("\t\n 3 - Supprimer un client");
    printf("\t\n 4 - Afficher les donnees-client");
    printf("\t\n 5 - Rechercher une caracterisque client");
    printf("\t\n 6 - Afficher la liste des clients repondant a une caracteristique commune");
    printf("\t\n 7 - Rechercher ou afficher les donnees d'un client ");
    printf("\t\n 8 - Afficher la liste des clients et le nombre de clients ayant des informations manquantes ");
    printf("\t\n 9 - Sauvegarder les donnees d'un fichier \n");
    scanf("%s",&c);
    switch(c)
       {
           case '1':
             add();
            printf("test");
             menu();
            break;
           case '2':
           printf("test");
           menu();
               break;
           case '3':
           structure();
           printf("test");
           menu();
               break;
           case '4':
           afficher();
           menu();
               break;
           case '5':
           printf("test");
           menu();
               break;
           case '6':
           printf("test");
           menu();
               break;
            case '7':
            printf("test");
            menu();
            case '8':
            printf("test");
            menu();
           case '9':
            printf("test");
            menu();
           case '#':
            printf("Sortie du programme.");
            exit(1);
           default:
            printf("Erreur, rentrez un nombre valide ou un '#' si vous avez fini.");
            menu();
       }
}

void add(){
  char nom[50] = {"nom"};
  char prenom[50] = {"prenom"};
  char ville[50] = {"ville"};
  char cdePostal[50] = {"cdePostal"};
  char numero[50] = {"numero"};
  char mail[50] = {"mail"};
  char metier[50] = {"metier"};
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

void sift(int tab[], int node, int n) {
   int k = node;
   int j = 2*k;
   while (j <= n) {
       if (tab[j]<tab[j+1]) {
           j++;
       }
       if (tab[k]<tab[j]) {
           permute(tab, k, j);
           k=j;
           j=2*k;
       }
       else {
           j=n+1;
       }
   }
}

void heap_sort (int tab[], int length) {
    for (int i= length/2 ; i>1; i--) {
        sift(tab, i, length);
    }
    for (int i= length; i>2; i--) {
        permute(tab, i, 1);
        sift(tab, 1, i-1);
    }
}

int srch_dicho(int tab[], int x) {
    int left = 0;
    int right = MAX_STR_LEN;
    int mid = (left + right) /2;
    while (left <= right) {
        if (tab[mid]==x) {
            return mid;
        }
        if (tab[mid]>x) {
            right = mid-1;
        }
        if (tab[mid]<x) {
            left=mid+1;
        }
    }
    return -1;
}

int srch_seq(int tab[], int x) {
    for (int i; i < MAX_STR_LEN; i++) {
        if (tab[i]==x) {
            int pos = i;
            return pos;
        }
    }
    return -1;
}

void associate(FILE *fp, struct data x) {
    int i=0;
    char line[MAX_STR_LEN];
    while (fgets(line, MAX_STR_LEN, fp) != NULL) {
        sscanf(line, "%s;%s;%s;%s;%s;%s;%s", &x.prenom[i], &x.nom, &x.ville, &x.numero, &x.mail, &x.metier);
        i++;
    }
}

void modify(struct data x, FILE *fp) {
    printf("Quelle information de cet utilisateur voulez vous modifier? ");
    char *buffer;
    scanf("%s", &buffer);
}

void research(FILE *fp){
    printf("Rentrez la / les informations que vous connaissez, si vous en connaissez plusieures rentrez les en les séparant par un espace.\n");
    exemple("ex : prenom, nom, mail");
    char *buffer;
    fgets(buffer,MAX_STR_LEN,stdin);
}
