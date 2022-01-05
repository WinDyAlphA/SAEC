#include <stdio.h>

#include <stdlib.h>

#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#include <time.h>

#include <assert.h>

#include <stdbool.h>

#define MAXCHAR 1024
#define MAX_STR_LEN 256
#define PERSONNE 5

#define chemin "annuaire5000.csv"

void afficher(void);
void menu(void);
void ajouter(void);
void add(void);
void afich(void);
void structure(void);
/*void sift(int, int);
void heap_sort(int);
int srch_dicho(int);*/
/*void srch_seq(char *x,struct data *datarecord); */
struct data;
int espace(char row[MAXCHAR]);

struct data {
  char prenom[30];
  char nom[30];
  char ville[20];
  char codePostal[6];
  char numero[20];
  char mail[50];
  char metier[20];
};

char * tab[PERSONNE];
void finds(struct data * p[]);

void afficher() {
  FILE * fp = fopen(chemin, "r");
  char row[MAXCHAR];

  if (fp == NULL) {
    perror("error");
    exit(1);
  }

  while (fgets(row, sizeof(row), fp)) {
    char * token;
    token = strtok(row, ";");

    while (token != NULL) {
      printf("%s", token);
      token = strtok(NULL, ";");
      printf(" ");
    }
    printf("\n");
  }
}
void structure() {
  struct data datarecord[500];

  struct data * pp[500];
  for (int n = 0; n < 500; n++) {
    pp[n] = malloc(sizeof(struct data));
  }
  struct data * ( * p)[] = & pp;

  int i = 0;
  int j = 0;
  FILE * fp = fopen(chemin, "r");
  char row[MAXCHAR];

  if (fp == NULL) {
    perror("error");
    exit(1);
  }
  while (fgets(row, sizeof(row), fp)) {

    char * token;
    if (espace(row) == true) {

    }
    token = strtok(row, ";");

    while (token != NULL) {
      switch (i) {
      case 0:
        strcpy(datarecord[j].prenom, token);
        break;
      case 1:
        strcpy(datarecord[j].nom, token);
        break;
      case 2:
        strcpy(datarecord[j].ville, token);
        break;
      case 3:
        strcpy(datarecord[j].codePostal, token);
        break;
      case 4:
        strcpy(datarecord[j].numero, token);
        break;
      case 5:
        strcpy(datarecord[j].mail, token);
        break;
      case 6:
        strcpy(datarecord[j].metier, token);
        break;
      }
      token = strtok(NULL, ";");
      i++;
    }
    i = 0;

    printf("\n");
    printf("\n");
    printf("%s", datarecord[2].nom);
    printf("\n");
    printf("\n");
    j++;

  }
  for (int b = 0; b < 4; b++) {
    ( * p)[b] = & ( * ( & datarecord[b]));
  }
  for (int z = 0; z < 4; z++) {
    printf("%s %s %s %s \n", ( * p)[z] -> nom, ( * p)[z] -> prenom, ( * p)[z] -> ville, ( * p)[z] -> numero);
  }
  char mots[21];
  printf("saisissez votre recherche");
  fgets(mots, 20, stdin);
  char * mot = & mots[0];

  finds( * p);

}

void finds(struct data * p[]) {
  for (int z = 0; z < 4; z++) {
    printf("%s %s %s %s \n", ( * p)[z].nom, ( * p)[z].prenom, ( * p)[z].ville, ( * p)[z].numero);
  }
}

int espace(char row[MAXCHAR]) {
  for (int i = 0; i < MAXCHAR; i++) {
    if (row[i] == row[i + 1] && row[i] == ';') {
      for (int j = 0; j < (MAXCHAR - i); j++) {
        row[MAXCHAR - (j + 1)] = row[MAXCHAR - j];
        row[i + 1] = ' ';

      }
    }

  }
  return 0;
}

void menu() {

  char c = '0';
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
  scanf("%s", & c);
  switch (c) {
  case '1':
    add();
    printf("test");
    menu();
  case '2':
    printf("test");
    menu();
  case '3':
    printf("test");
    menu();
  case '4':

    menu();
  case '5':
    structure();
    /*srch();*/
    printf("test");
    menu();
  case '6':
    printf("test");
    menu();
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

void add() {
  char nom[50] = {
    "nom"
  };
  char prenom[50] = {
    "prenom"
  };
  char ville[50] = {
    "ville"
  };
  char cdePostal[50] = {
    "cdePostal"
  };
  char numero[50] = {
    "numero"
  };
  char mail[50] = {
    "mail"
  };
  char metier[50] = {
    "metier"
  };
  char * tab[7] = {
    nom,
    prenom,
    ville,
    cdePostal,
    numero,
    mail,
    metier
  };
  char * add[7];
  for (int i = 0; i < 7; i++) {
    printf("veuillez inserer le %s de la personne :\n", tab[i]);
    fflush(stdin);
    fgets(tab[i], 50, stdin);
  }
  for (int i = 0; i < 7; i++) {
    printf("%s : \n", tab[i]);
  }
}
/*
void search(FILE* fp){
  int nbr;
  printf("Combien d'informations voulez vous rechercher (7 infos disponibles au total) :");
  scanf("%d",&nbr);
  char* information[7];
  printf("Quelles sont les informations que vous possédez?");
  switch(nbr) {
    case 1 :
      sscanf(information,"%s", information[0]);
      break;
    case 2 :
      sscanf(information,"%s,%s", information[0], information[1]);
    case 3 :
      sscanf(information,"%s,%s,%s", information[0], information[1], information[2]);
    case 4 :
      sscanf(information,"%s,%s,%s,%s", information[0], information[1], information[2], information[3]);
    case 5 :
      sscanf(information,"%s,%s,%s,%s,%s", information[0], information[1], information[2], information[3], information[4]);
    case 6 :
      sscanf(information,"%s,%s,%s,%s,%s,%s", information[0], information[1], information[2], information[3], information[4], information[5]);
    case 7 :
      sscanf(information,"%s,%s,%s,%s,%s,%s,%s", information[0], information[1], information[2], information[3], information[4], information[5], information[6]);
  }



}

void ferrors(FILE* fp){
  if (fopen(fp)==NULL) {
    printf("Erreur d'ouverture fichier.");
    return 0;
  }
  else{
    printf("Fichier ouvert avec succès.");
    return 1;
  }
}

void ferrorsclose(FILE *fp){
  if (fopen(fp)!=EOF) {
    printf("Fermeture du fichier réussie.");
    return 1;
  }
  else {
    printf("Erreur de fermeture du fichier");
    return 0;
  }
}

*/
/*

void sift(int node, int n) {
   int k = node;
   int j = 2*k;
   while (j <= n) {
       if (tab[j]<tab[j+1]) {
           j++;
       }
       if (tab[k]<tab[j]) {
           permute(k, j);
           k=j;
           j=2*k;
       }
       else {
           j=n+1;
       }
   }
}

void heap_sort (int length) {
    for (int i= length/2 ; i>1; i--) {
        sift(tableau, i, length);
    }
    for (int i= length; i>2; i--) {
        permute(tableau, i, 1);
        sift(&tableau[1], &tableau[i-1]);
    }
}

int srch_dicho(int x) {
  char *pt = &x;
    int left = 0;
    int right = MAX_STR_LEN;
    int mid = (left + right) /2;
    while (left <= right) {
        if (tableau[mid]==pt) {
            return mid;
        }
        if (tableau[mid]>pt) {
            right = mid-1;
        }
        if (tableau[mid]<pt) {
            left=mid+1;
        }
    }
    return -1;
}
*/
/*void srch(){
  printf("Par quel élément souhaitez vous Rechercher ?");
  int c = 0;
  printf("par numero\n");
  printf("par nom\n");
  printf("par e-mail\n");
  char *x;
    fgets(x,12,stdin);
      srch_seq(x,struct data *datarecord);


}

void srch_seq(char *x,struct data *datarecord) {

      for (int y=0;y<PERSONNE;y++){
        for (int i; i < 12; i++) {
            if (datarecord[y].numero[i]==x[i]) {
                printf("%c",datarecord[y].nom[i]);
              }
            }
        }
    }
*/