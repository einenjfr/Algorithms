#include <stdio.h>

//lnum := vector &&&& size := size of lnum
void insertion (int* lnum, int size) {
	int aux;

	for (int i = 0; i < size; i++) {
		int aux, j;
		
		aux = lnum[i];
		j = i - 1;
		while (j >= 0 && lnum[j] > aux) {
			lnum[j+1] = lnum[j];
			lnum[j] = aux;
			j--;
		}
		lnum [j+1] = aux;
	}
}

void insertionFloat (float* lnum, float size) {
	int aux;

	for (int i = 0; i < size; i++) {
		int j;
		float aux;
		
		aux = lnum[i];
		j = i - 1;
		while (j >= 0 && lnum[j] > aux) {
			lnum[j+1] = lnum[j];
			lnum[j] = aux;
			j--;
		}
		lnum [j+1] = aux;
	}
}
