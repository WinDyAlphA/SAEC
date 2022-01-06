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

#define chemin "annuaire5000.csv"

void clear(void);
void permute(int *, int *);

void clear () {
    system("cls");
}

void permute(int* i, int* j) {
    int tmp = *j;
    *j = *i;
    *i = tmp;
}