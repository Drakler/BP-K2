//Ushtrimi 1, K2 - gr B
/*
int p = 2;
int prodhimi(int n) {
	for (int i = 0; i <= n; i++) {
		p *= i;
	}
	return p;
}
int main() {
	cout << prodhimi(3) << endl;
	cout << prodhimi(2) << endl;
	return 0;
}

//rezultatet dalin 0 pasi qe tek fuksioni i = 0, dhe qdo numer i shumzuar me 0 = 
*/

//Ushtrimi 2, K2 - gr B
/*
#include <iomanip>
int main() {
	const int n = 6;
	int M[n][n];
	int sNendiagonale = 0,
		sKolonacift = 0,
		sRreshtacift = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << "Jepe poziten [" << i+1 << "][" << j+1 << "] te matrices = ";
			cin >> M[i][j];
		}
		cout << endl;
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << setw(4) << M[i][j] << " ";
		}
		cout << endl;
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i > j)
				sNendiagonale += M[i][j];
			if (i % 2 == 1)
				sRreshtacift += M[i][j];
			if (j % 2 == 1)
				sKolonacift += M[i][j];

		}
		cout << endl;
	}
	cout << "\nShuma nen Diagonale " << sNendiagonale;
	cout << "\nShuma ne kolona cift " << sKolonacift;
	cout << "\nShuma ne rreshta cift " << sRreshtacift;

	return 0;
}
*/

//Ushtrimi 3, K2 - gr B
/*
double pow(int a) {
	double rez = a * a;
	return rez;
}

double pow(int a, int b) {
	double rez = 1;
	for (int i = 1; i <= b; i++) {
		rez *= a;
	}
	return rez;
}


int main() {
	int nr1, nr2;
	cin >> nr1;
	cin >> nr2;
	cout << pow(nr1) << endl;
	cout << pow(nr1, nr2) << endl;

	return 0;
}
*/

//Ushtrimi 4, K2 - gr B
/*
inline int min(int a, int b) {
	int rez = a;
	if (b < a)
		rez = b;

	return rez;
}
int main() {
	int a, b;
	cin >> a >> b;
	cout << "Minimalja " << min(a, b);

	return 0;
}
*/

//Ushtrimi 5, K2 - gr B
/*
int main() {
	const int n = 100, m = 100;
	int M[n][m];

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			M[i][j] = j + i;
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << M[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}
*/

//Ushtrimi 6, K2 - gr B
/*
int indexOfMax(int m[], int a) {
	int max = 0;
	for (int i = 1; i < a; i++) {
		if (m[i] > m[max]) {
			max= i;
		}
	}
	return max;
}
int main() {
	const int a = 5;
	int M[a];
	for (int i = 0; i < a; i++) {
		cin >> M[i];
	}
	cout << "Max " << indexOfMax(M, a);
	return 0;
}
*/

//Ushtrimi 7, K2 - gr B
/*
enum veprimi{
	Mbledhja,
	Zbritja,
	Shumzimi,
	Pjestimi
};
double llogaritja(int a, int b, veprimi c) {
	double rezs = 0;
	if (c == Mbledhja) 
		return rezs = a + b;
	if (c == Zbritja)
		return rezs = a - b;
	if (c == Shumzimi)
		return rezs = a * b;
	if (c == Pjestimi)
		return rezs = a / b;
}
int main() {
	double a, b;
	veprimi s;
	string l;
	cin >> l;
	cin >> a >> b;
	if (l == "mbledhje")
		cout << llogaritja(a, b, Mbledhja);
	else if (l == "zbritje")
		cout << llogaritja(a, b, Zbritja);
	else if (l == "shumzim")
		cout << llogaritja(a, b, Shumzimi);
	else if (l == "pjestim")
		cout << llogaritja(a, b, Pjestimi);
	else

	return 0;
}
*/
