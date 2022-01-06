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

#define chemin "annuaire5000.csv"

void afficher(void);
void menu(FILE *);
void ajouter(void);
void ajouterfpf(void);
void affichermenu(void);
/*void sift(int, int);
void heap_sort(int);
int srch_dicho(int);
int srch_seq(int);


void permute(int [], int, int);
*/

void clear(void);

// faire une fonction qui compte les ligne et faire
// tab[nligne].nom[pos]=str

/* int main(int argc, char **argv) {
    FILE *fp = fopen(chemin,"a+");
    struct data x;
    error_fopen(fp);
    if (argc != 1) {
        for (int i = 2; i <= argc; i++) {
            switch (argv[i][0]) {
                case 'a' : //add
                    if (argv[i]=='add') {
                        add();
                    }
                    if (argv[i]=='associate') {
                        associate;
                    }
                    break;
                case 'd' : //delete
                    delete(argv[i]);
                    break;
                case 'm' : //modify
                    research(fp);
                    //modify(x, fp);
                    break;
                case 'p' : //print
                    //associate();
                    print();
                    break;
                case 's' : //search
                    if (argv[i]=='search') {
                        search();
                    }
                    if (argv[i]=='sort') {
                        sort();
                    }
                    break;
            }
        }
        return 0;
    }
    else {
        int tab;
        menu();
        error_fclose(fp);
        return 0;
    }
}
 */

int main(){
        scanf("");
        FILE *fp = fopen("annuaire500.csv","a+");
        if (ferrors(fp)==1) {
            return 1;
        }
        menu(fp);
        return 0;
}
/*void associate(FILE *fp, struct data x) {
    int i;
    while (fopen(fp) = !feof)
        fscanf(fp ,"%s;%s;%s;%s;%s;%s;%s", &x.prenom[], &x.nom[], &x.ville[], &x.numero[], &x.mail[], &x.metier[]);
}
*/
