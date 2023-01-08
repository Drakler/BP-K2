//Mos harro me hjek /* */ (komentin per te ushtrimi qe don me ekzekutu)
#include <iostream>
using namespace std;

//Ushtrimi 1, K2
/*
int main() {
	const int n = 4;
	int A[n][n], shuma = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n;j++) {
			cout << "Jepe shumen ne [" << i + 1 << "][" << j + 1 << "] = ";
			cin >> A[i][j];
			if (j % 2 == 0) {
				shuma += A[i][j];
			}
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n;j++) {
			cout << A[i][j] << " ";
		}
		cout << endl;
	}
	cout << "Shuma ne kolonat teke = " << shuma;
	return 0;
}
*/

//Ushtrimi 2, K2
/*
int pow(int a, int b) {
	int rez = 1;
	for (int i = 0; i < b; i++) {
		rez = rez * a;
	}
	return rez;
}
int main() {
	int a, b;
	std::cin >> a;
	std::cin >> b;
	std::cout << pow(a, b);
	return 0;
}
*/

//Ushtrimi 3, K2
/*
int p = 2;							//1. p= 2
int prodhimi(int n) {
	for (int i = 0; i <= n; i++) {
		p *= i;						
	}
	return p;						//3. p = 0
}
int prodhimi(int k, int n) {
	for (int i = k; i <= n; i++) {
		p *= i;
	}
	return p;						//4. p = 0
}
int main() {
	p = 1;							//2. p = 1
	cout << prodhimi(3) << endl;	//3. p = 0
	cout << prodhimi(3, 6) << endl;
	return 0;						//4. p = 0
}
*/

//Ushtrimi 4, K2
/*
#include <math.h>
#define abs(x) (abs(x))

int main() {
	double a;
	cin >> a;
	cout << abs(a);

	return 0;
}
*/

//Ushtrimi 5, K2
/*
int main()
{
    const int n = 5, m = 6;
    int a[n][m];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if(    ((i == 0) && (j == 0)) || 
			   ((i == n - 1) && (j == 0)) ||
			       ((i == 0) && (j == m - 1)) || 
			   ((i == n - 1) && (j == m - 1))) {
                a[i][j] = 1;
			}
			else if ((i > 0 && i < n - 1) && (j > 0 && j < m - 1)) {
				a[i][j] = 1;
			}
            else a[i][j] = 0;
        }
    }
    
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cout << a[i][j] <<" ";
        }
        cout << endl;
    }
	return 0;
}
*/

//Ushtrimi 6
/*
#include <math.h> // per pow dhe sqrt

enum Veprimi {
	Siperfaqja = 1,
	Diagonalja
};
double Llogaritja(double a, double b, Veprimi c) {
	double rez = 1;
	if (c == Siperfaqja) {
		cout << "Siperfaqja eshte: \n" << a << " x " << b << " = " << a * b << "^2";
		rez = a * b;
	}
	else if (c == Diagonalja) {
		cout << "Diagonalja eshte: \n" << sqrt(pow(a, 2) + pow(b, 2));
		rez = sqrt(pow(a, 2) + pow(b, 2));
	}
	return rez;
}
int main() {
	double q, w, e;
	cout << "Jepi te dhenat:\nq = ";
	cin >> q;
	cout << "w = ";
	cin >> w;
	cout << "\nDoni te gjeni siperfaqen (shenoni 1) apo diagonalen (shenoni 2): ";
	cin >> e;
	if (e == Siperfaqja) {
		Llogaritja(q, w, Siperfaqja);
	}
	else if (e == Diagonalja) {
		Llogaritja(q, w, Diagonalja);
	}

}
*/