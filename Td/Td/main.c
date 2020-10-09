#include <stdlib.h>
#include <stdio.h>


int somme(int n) {
	int r = 0;
	for (int i = 0; i <= n; i++) {
		r += i;
	}
	return r;

}
int main() {
	int n;
	printf("Entrer un entier : ");
	scanf_s("%d", &n);
	n = somme(n);
	printf("Somme de 0 a n : %d\n", n);
	n = somme(5);
	printf("Somme de 0 a 5 : %d\n", n);




}