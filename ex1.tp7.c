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
#include <stdlib.h>
typedef struct {
	int nums;
	char typeproc[5];
	int vitproc;
	int taillemem;
} proc;

void main() {
	proc t[1];
	proc max1;
	int j=0;
	for (int i = 0; i < 2; i++) {
		printf("numero de serie %d \n", i);
		scanf("%d", &t[i].nums);
		printf("type de processeur %d \n", i);
		scanf("%s", &t[i].typeproc);
		printf("vit de processeur %d \n", i);
		scanf("%d", &t[i].vitproc);
		printf("taille mem %d \n", i);
		scanf("%d", &t[i]. taillemem);
	}
	max1 = t[0];
	for (int i = 0; i < 2; i++) {
		if (t[i].vitproc > max1.vitproc)
			max1 = t[j=i];

	}
	for (int i = 0; i < 2; i++) {
		if (t[i].vitproc == max1) {
			printf("l'ordinateur %d est plus rapide \n",j);
			printf("%d \n", max1.nums);
			printf("%s \n", max1.typeproc);
			printf("%d \n", max1.vitproc);
			printf("%d \n", max1.taillemem);
		}
	}

}
