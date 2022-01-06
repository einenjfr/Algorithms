void quickSort (int* lnum, int begin, int end) {
	int aux;
	
	int i = begin;
	int j = end;
	
	int piv = (begin + end) / 2;
	int vpiv = lnum[piv];
	
	do {
		while (lnum[i] < vpiv)
			i++;
		while (lnum[j] > vpiv)
			j--;
		if (i <= j) {
			aux = lnum[j];
			lnum[j] = lnum[i];
			lnum[i] = aux;
			i++;
			j--;
		}
	} while (i < j);
	
	if (begin < j)
		quickSort(lnum,begin,j);
	if (end > i)
		quickSort(lnum,i,end);
}
