#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <assert.h>
#include <stdbool.h>
#include "func.h"


#define MAXCHAR 1024
#define MAX_STR_LEN 256

#define chemin "annuaire500.csv"

void clear(void);
void permute(int [], int, int);
int length(int []);

void clear () {
    system("cls");
}

void permute(int tab[], int i, int j) {
    int tmp = tab[j];
    tab[j] = tab[i];
    tab[i] = tmp;
}

int length(int tab[]) {
    size_t n = sizeof(tab)/sizeof(tab[0]);
    return n;
}

