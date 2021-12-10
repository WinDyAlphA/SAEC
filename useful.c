#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <assert.h>
#include <stdbool.h>
#include "func.c"
#include "useful.h"

#define MAXCHAR 1024
#define MAX_STR_LEN 256

#define chemin "annuaire500.csv"

void afficher(void);
void menu(void);
void ajouter(void);
void ajouterfpf(void);
void affichermenu(void);
void sift(int [], int, int);
void heap_sort(int [], int);
int srch_dicho(int [], int);
int srch_seq(int [], int);

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
    printf("\t\n 6 - Afficher la liste des clients repondant a une caracteristique commune");
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

void affichermenu () {
    menu();
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
    int right = length(tab);
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
    for (int i; i < length(tab); i++) {
        if (tab[i]==x) {
            int pos = i;
            return pos;
        }
    }
    return -1;
}

