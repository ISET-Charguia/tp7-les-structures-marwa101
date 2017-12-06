/*
 ============================================================================
 Name        : tp4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include<string.h>
typedef struct {
	char nom[5];
	char date[10];
	char nationalite[15];
	char sexe[6];
} joueur;

void main() {
	 int max = 100;
	joueur t[max];
	int n;
	printf("donner le nombre des joueurs ");
	scanf("%d", n);
	for (int i = 0; i < n; i++)
	{
		printf("nom: ");
		scanf("%s", t[i].nom);
		printf("date: ");
		scanf("%s", t[i].date);
		printf("nationalité: ");
		scanf("%s", t[i].nationalite);
		printf("sexe: ");
		scanf("%s", t[i].sexe);
	}
	for(int i=0;i<n;i++)
	{
		if(t[i].nationalite=='Tunisienne')
		{ for(int i=0;i<n;i++)
		   {
			printf("la liste des joueurs tunisiens:");
			printf("%s \n",t[i].nom);
			printf("%s \n",t[i].date);
			printf("%s \n",t[i].nationalite);
			printf("%s \n",t[i].sexe);}

		}
	}
}
