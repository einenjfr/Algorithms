#include <stdio.h>

#lnum := vector &&&& size := size of lnum
void bubble (int* lnum, int size) {
	int aux;
	
	for (int i = 0; i < size; i++)
		for (int j = i+1; j < size; j++)
			if (lnum[i] > lnum[j]) {
				aux = lnum[j];
				lnum[j] = lnum[i];
				lnum[i] = aux;
			}
}

void bubbleFloat (float* lnum, float size) {
	float aux;
	
	for (int = 0; i < size; i++)
		for (int j = i+1; j < size; j++)
			if (lnum[i] > lnum[j]) {
				aux = lnum[j];
				lnum[j] = lnum[i];
				lnum[i] = aux;
			}
}
