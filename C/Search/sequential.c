#include <stdio.h>

int sequential (int* lnum, size, int obj) {
	for (int i = 0; i < size; i++) {
		if (lnum[i] == obj)
			return i;
	}
}
