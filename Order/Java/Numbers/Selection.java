public class Selection {
  void selection (int[] lnum) {
		int psel, vsel;
		
		for (int i = 0; i < lnum.length; i++) {
			psel = i;
			vsel = lnum[psel];

			for (int j = i+1; j < lnum.length; j++)
				if (lnum[j] < vsel) {
					psel = j;
					vsel = lnum[j];
				}
			lnum[psel] = lnum[i];
			lnum[i] = vsel;
		}
	}
}
