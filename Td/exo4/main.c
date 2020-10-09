#include <stdlib.h>
#include <stdio.h>
#define TAILLEMAX 10


int occur(char mot[], int tailleMax,char cha) {
	int count = 0;
	for (int i = 0; i < tailleMax; i++) {
		if (cha == mot[i]) { count += 1; }
	}
	return count;

}
int main() {
	char chaine[TAILLEMAX];
	int n;
	printf("Lettre : ");
	char cha;
	cha = _getch();
	printf("Chaine : ");
	scanf_s("%s", chaine, (unsigned)_countof(chaine));
	n = occur(chaine, TAILLEMAX,cha);
	print("il y a %d fois la lettre %c dans %s", n, cha, chaine);
}