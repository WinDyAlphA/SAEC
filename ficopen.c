#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define chemin "work1"


int main (){	
    printf("test");
    FILE *fic;
    fic = fopen("chemin", "a+");
    if (fic==NULL)
    {
        printf("ouverture fichier impossible !");
        exit(0);
    }
    else {
    	printf("ouvert");
    }
    return 0;
}
