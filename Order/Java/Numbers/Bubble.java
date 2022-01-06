public class Bubble {
  void bubble (int[] lnum) {
		int aux;

		for (int i = 0; i < lnum.length; i++)
			for (int j = i+1; j < lnum.length; j++)
				if (lnum[i] > lnum[j]){
					aux = lnum[j];
					lnum[j] = lnum[i];
					lnum[i] = aux;
				}
	}
}
