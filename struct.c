#include <stdio.h>

typedef struct personne{
	char prenom[30];
    char nom[30];
    char ville[20];
    char cdePostal[5];
    char numero[10];
    char mail[50];
    char metier[20];
}personne;

void create(void);
void display(void);
void append(void);

void append(){}
void create(){}
void display(){
	personne s1;
	FILE *fp;
	int j;
	fp = fopen("annuaire500.csv","r");
	while (fread(&s1,sizeof(personne),1,fp)){
	}
	fclose(fp);
}

int main()
{
	int ch;
		printf("\n1.create");
		printf("\n2.display");
		printf("\n3.append");
		printf("\n0.exit");

		scanf("%d",&ch);
		switch (ch){
			case 1:
				create();
				break;
			case 2:
				display();
				break;
			case 3:
				append();
				break;
			case 0:
				create();
				break;
			}	

	return 0;
			}