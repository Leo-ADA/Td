#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#define TAILLE 100
float tab[TAILLE];
int remplirTab(float tab[],int tabSize,int nbval,int min,int max) {
	srand(time(NULL));
	for (int i = 0; i < nbval; i++) {
		tab[i] = (float)((rand() % (max -min)) + min);
	}
	return nbval;
}
int afficherTab(float tab[], int tabSize, int nbval) {
	for (int i = 0; i < nbval; i++) {
		if (i % 10 == 0) { printf("\n"); }
		printf("%0.2f ", tab[i]);
	}
	return nbval;
}
int maxTab(float tab[], int tabSize, int nbval) {
	float max = -1;
	int maxpos = 0;
	for (int i = 0; i < nbval; i++) {
		if (tab[i] > max) { maxpos = i; max = tab[i]; }
	}
	printf("La valeur max est %0.2f en %d ", max,maxpos);
}
int main() {
	remplirTab(tab, 100, 10, 10, 20);
	afficherTab(tab, 100, 10);
	maxTab(tab,100,10);





}