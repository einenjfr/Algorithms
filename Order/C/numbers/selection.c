#include <stdio.h>

//lnum := vector &&&& size := size of lnum
void selection (int* lnum, int size) {
	int psel, vsel;
	
	for (int i = 0; i < size; i++) {
		psel = i;			//Selection's position
		vsel = lnum[i];		//Selection's value
		
		for (int j = i+1; j < size; j++)
			if (lnum[j] < vsel) {
				psel = j;
				vsel = lnum[j];
			}

		lnum[psel] = lnum[i];
		lnum[i] = vsel;
	}
}

void selectionFloat (float* lnum, float size) {
	int psel;
	float vsel;
	
	for (int i = 0; i < size; i++) {
		psel = i;
		vsel = lnum[i];
		
		for (int j = i+1; j < size; j++)
			if (lnum[j] < vsel) {
				psel = j;
				vsel = lnum[j];
			}

		lnum[psel] = lnum[i];
		lnum[i] = vsel;
	}
}
