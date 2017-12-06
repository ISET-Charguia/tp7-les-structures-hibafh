/*
 ============================================================================
 Name        : ex1.c
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
	char nom[21];
	float noteds, noteex, moyenne;

} Etudiant;
typedef struct {
	Etudiant liste[30];
	int nbrEtudiants;
} Classe;

int menu();
Classe saisie(Classe c);
Classe moyenne(Classe c);
float moyenneClasse(Classe c);
void resultatEtudiant(Classe c, char nom[]);
void resultatClasse(Classe c);

void main() {
	Classe ti103;
	int choix;
	char et[21];

	setbuf(stdout, NULL);
	setbuf(stdin, NULL);
	do {
		choix = menu();
		switch (choix) {
		case 1:
			ti103 = saisie(ti103);

			break;
		case 2:
			ti103 = moyenne(ti103);

			break;
		case 3:
			printf("\n Moyenne de la classe :%.3f", moyenneClasse(ti103));

			break;
		case 4:
			printf("\n Donner le nom de l'étudiant : ");
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
}
int menu() {
	int c;
	do {

		printf("\n===========================================");
		printf("\n|         Gestion des moyennes            |");
		printf("\n===========================================");
		printf("\n|   1- Saisir la liste des étudiants      |");
		printf("\n|   2- Calculer la moyenne                |");
		printf("\n|   3- Calculer la moyenne de la classe   |");
		printf("\n|   4- Afficher le résultat d'un étudiant |");
		printf("\n|   5- Résultat de la classe              |");
		printf("\n|   6- Quitter                            |");
		printf("\n|_________________________________________|");

		printf("\n\nEntrer votre choix(1-6): ");
		scanf("%d", &c);

	} while (c < 1 || c > 6);
	return c;
}
Classe saisie(Classe c) {
	int i, n;
	float noteds, noteex;

	do {
		printf("donner le nombre detudiant");
		scanf("%d", &n);

	} while (n > 30 || n < 0);
	c.nbrEtudiants = n;
	for (i = 0; i < n; i++) {
		printf("donner le nom");
		scanf("%s", c.liste[i].nom);
		printf("donner le note de DS");
		scanf("%f", &noteds);
		printf("donner le note EXAMEN");
		scanf("%f", &noteex);
		c.liste[i].noteds = noteds;
		c.liste[i].noteex = noteex;
	}
	return c;
}
float moyenneClasse(Classe c) {
	float moy;
	int i, n;
	n=c.nbrEtudiants ;
	for (i = 0; i < n; i++) {

		moy = moy + c.liste[i].moyenne;
	}
	moy=moy/n;
	return moy;
}
void resultatEtudiant(Classe c, char nom[]) {
	float moy;
	int i, n;
	n=c.nbrEtudiants;
	for (i = 0; i < n; i++)
		if (nom==c.liste[i].nom) {
			printf("la moyenne de l'étudiant %s est %3.f", nom, moy);
			break;
		}

}
void resultatclasse(Classe c)
{
	float m;
	m=moyenneClasse(c);
	if(m<10) Name        : ex1.c

#include <stdio.h>
#include <stdlib.h>
#include<string.h>
typedef struct {
	char nom[21];
	float noteds, noteex, moyenne;

} Etudiant;
typedef struct {
	Etudiant liste[30];
	int nbrEtudiants;
} Classe;

int menu();
Classe saisie(Classe c);
Classe moyenne(Classe c);
float moyenneClasse(Classe c);
void resultatEtudiant(Classe c, char nom[]);
void resultatClasse(Classe c);

void main() {
	Classe ti103;
	int choix;
	char et[21];

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
			printf("\n Moyenne de la classe :%.3f", moyenneClasse(ti103));

			break;
		case 4:
			printf("\n Donner le nom de l'étudiant : ");
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
}
int menu() {
	int c;
	do {

		printf("\n===========================================");
		printf("\n|         Gestion des moyennes            |");
		printf("\n===========================================");
		printf("\n|   1- Saisir la liste des étudiants      |");
		printf("\n|   2- Calculer la moyenne                |");
		printf("\n|   3- Calculer la moyenne de la classe   |");
		printf("\n|   4- Afficher le résultat d'un étudiant |");
		printf("\n|   5- Résultat de la classe              |");
		printf("\n|   6- Quitter                            |");
		printf("\n|_________________________________________|");

		printf("\n\nEntrer votre choix(1-6): ");
		scanf("%d", &c);

	} while (c < 1 || c > 6);
	return c;
}
Classe saisie(Classe c) {
	int i, n;
	float noteds, noteex;

	do {
		printf("donner le nombre detudiant");
		scanf("%d", &n);

	} while (n > 30 || n < 0);
	c.nbrEtudiants = n;
	for (i = 0; i < n; i++) {
		printf("donner le nom");
		scanf("%s", c.liste[i].nom);
		printf("donner le note de DS");
		scanf("%f", &noteds);
		printf("donner le note EXAMEN");
		scanf("%f", &noteex);
		c.liste[i].noteds = noteds;
		c.liste[i].noteex = noteex;
	}
	return c;
}
float moyenneclasse(Classe c) {
	float moy;
	int i, n;
	n=c.nbrEtudiants ;
	for (i = 0; i < n; i++) {

		moy = moy + c.liste[i].moyenne;
	}
	moy=moy/n;
	return moy;
}
void resultatEtudiant(Classe c, char nom[]) {
	float moy;
	int i, n;
	n=c.nbrEtudiants;
	for (i = 0; i < n; i++)
		if (nom==c.liste[i].nom) {
			printf("la moyenne de l'étudiant %s est %3.f", nom, moy);
			break;
		}

}
void resultatClasse(Classe c)
{
	float m;
	m=moyenneclasse(c);
	if(m<10)
		printf("faible");
		else if (m<12)
			printf("passable");
		else if (m<15)
			printf("bien");
		else
			printf("trés bien");
}



