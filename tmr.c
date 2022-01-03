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
    switch(c) {
            case: '1':
            add();
            printf("test");
             menu();
           case '2':
           printf("test");
           menu();
           case '3':
           structure();
           printf("test");
           menu();
           case '4':
           afficher();
           menu();
           case '5':
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