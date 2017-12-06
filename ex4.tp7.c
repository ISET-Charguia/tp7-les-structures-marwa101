/*
 ============================================================================
 Name        : tp7.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include<string.h>
//structure représentant un étudiant
typedef struct {
	char nom[21];
	float noteDS;
	float noteEX;
	float moyenne;
} Etudiant;

//structure représentant une classe d'au maximum 30 étudiants
typedef struct {
	Etudiant liste[30];
	int nbrEtudiants; //le nombre reel d'étudiants
} Classe;

//les fonctions
int menu();
Classe saisie();
Classe moyenne(Classe c);
float moyenneClasse(Classe c);
void resultatEtudiant(Classe c, char nom[]);
void resultatClasse(Classe c);
void  //pour attendre la saisie d'une touche quelconque

int main() {
	Classe ti103;
	int choix;
	char et[21];
	//éliminer les buffers pour éviter les problèmes d'affichage et de lecture
	setbuf(stdout, NULL);
	setbuf(stdin, NULL);
	do {
		choix = menu();
		switch (choix) {
		case 1:
			ti103 = saisie();

			break;
		case 2:
			ti103 = moyenne(ti103);

			break;
		case 3:
			printf("\nMoyenne de la classe :%.3f", moyenneClasse(ti103));

			break;
		case 4:
			printf("\nDonner le nom de l'étudiant : ");
			scanf("%s", et);
			resultatEtudiant(ti103, et);

			break;
		case 5:
			resultatClasse(ti103);

			break;
		case 6:
			printf("\nAu revoir...");
		}
	} while (choix != 6);
return 0;}
int menu() {
	int c;
	do {
		printf("\n===========================================");
		printf("\n|         Gestion des moyennes            |");
		printf("\n===========================================");
		printf("\n|   1- Saisir la liste des �tudiants      |");
		printf("\n|   2- Calculer la moyenne                |");
		printf("\n|   3- Calculer la moyenne de la classe   |");
		printf("\n|   4- Afficher le r�sultat d'un �tudiant |");
		printf("\n|   5- R�sultat de la classe              |");
		printf("\n|   6- Quitter                            |");
		printf("\n|_________________________________________|");

		printf("\n\nEntrer votre choix(1-6): ");
		scanf("%d", &c);

	} while (c < 1 || c > 6);
	return c;
}
Classe saisie(){
	int i;
	Classe c;
	 Etudiant etud;
	printf("donner le nombre des étudiants");
	scanf("%d",c.nbrEtudiants);

	for(i=0;i<(c.nbrEtudiants);i++)
	{
		printf("entrer le nom de l'étudiant: ");
		scanf("%s",&etud.nom);
		print("DS: ");
		scanf("%f",&c.noteDS);
		print("EX: ");
		scanf("%f",&c.noteEX);
	}
	return c;
}
Classe moyenne(Classe c){
	Classe c;
	int i;
	float moy;
	for(i=0;i<(c.nbrEtudiants);i++)
		{
	moy=0.2*c.noteDS+0.8*noteEX;}
	return moy;
}
float moyenneClasse(Classe c){
	float moytotale;
	Classe c;
	int i;
	int som=0;
	for(i=0;i<(c.nbrEtudiants);i++)
			{
		moyenne(Classe c)
		som=som+moy;
		moytotale=som/c.nbrEtudiants;
			}
	return moytotale;
}
void resultatEtudiant(Classe c, char nom[]){
	char mention[];
	printf("entrer le nom de l'étudiant: ");
	scanf("%s",&nom);
	 moyenne(Classe c);
	if(moy<10)
			mention='faible';
		else if(moy<12)
			mention='passable';
		else if(moy<14)
				mention='bien';
		else if(moy<16)
				mention='trés bien';
		else
				mention='excellent';
	printf("moyenne:%.3f mention %s",moy,mention);
}
void resultatClasse(Classe c){
	moyenneClasse(Classe c);
	printf("moyenne de la classe:%.3f",moytotale);
}
