#include <stdlib.h>
#include <stdio.h>
#define TAILLEMAX 10


int compterCar(char chaine[],int tailleMax) {
	int i =0;
	char car = 'a';
	while (car != '\0') {
		car = chaine[i];
		i+=1;
	}
	printf("Le mot fait %d lettre",i-1);

}
int main() {
	char chaine[TAILLEMAX];
	
	printf("Chaine : ");
	scanf_s("%s", chaine, sizeof(chaine));
	//if (sizeof(chaine) > TAILLEMAX) { printf("String trop grand");}
	//else { 
	compterCar(chaine, TAILLEMAX);
	// }

}