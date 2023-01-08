// Mos harro me hjek /* */ (codin prej komenti)

#include <iostream>
using namespace std;

//Ushtrimi 1, K2 - gr A
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

//Ushtrimi 2, K2 - gr A
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

//Ushtrimi 3, K2 - gr A
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

//Ushtrimi 4, K2 - gr A
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

//Ushtrimi 5, K2 - gr A
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

//Ushtrimi 6, K2 - gr A
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
	return 0;
}
*/

//Ushtrimi 7, K2 - gr A
/*
#include <iomanip>
struct studenti
{
	float id;
	string emri,
		mbiemri,
		drejtimi;
};
void shfaq(studenti t) {
	cout << fixed << setprecision(0)
		<< t.id << "\n"
		<< t.emri << "\n"
		<< t.mbiemri << "\n"
		<< t.drejtimi;
}
int main() {
	studenti s;
	s.id = 227018100003;
	s.emri = "Enis";
	s.mbiemri = "Laci";
	s.drejtimi = "FIEK";
	shfaq(s);
	return 0;
}
*/

//Ushtrimi 8, K2 - gr A
/*
double indexOfMin(double v[], int n) {
	int a = 0, min = v[0];
	for (int i = 0; i < n; i++) {
		if (v[i] < min){
			min = v[i];
			a = i; 
			}
	}
	return a;
}
int main() {
	const int n = 20;
	double Vargu[n];
	for (int i = 0; i < n; i++) {
		cout << "Jepe antarin e " << i + 1 << " te vargut = ";
		cin >> Vargu[i];
	}
	cout << "Indeksi me vleren minimale eshte = " << indexOfMin(Vargu, n);
	return 0;
}
*/

//Ushtrimi 9, K2 - gr A
/*
#define PARE 1
#define DYTE 2
void funksioni() {
	int i = 1;
	while (i <= DYTE) {
		cout << "Ekzekutimi " << i << endl;
		i++;
	}
}
void funksioni(int k) {								//2. bartet ky funksion me k = 2 pasi qe #define DYTE eshte 2 "funksioni(2)"
	while (k > 0) {									//3. Plotsohet kushti pasi qe 2 > 0						//6. plotsohet prap kushti 1 > 0					//9. nuk plotsohet kushti dhe mbaron
		cout << "Ekzekutimi " << k << endl;			//4. ekzekutohet kjo si (Ekzekutimi 2)					//7. Ekzekutohet si (Ekzekutimi 1) pasi qe k = 1
		k--;										//5. k iu hjeket 1 numer (k-- = k - 1 rrjedh qe 2 - 1)  //8. k-- rrjedh k - 1 ===== 1 - 1 =0
	}
}
int main() {
	int vlera = 3;
	switch (vlera) {
	case PARE: funksioni(); break;
	case DYTE: funksioni(DYTE + 2); break;
	default: funksioni(DYTE); break;				//1. plotesohet ky kusht pasi nuk ka case 3,
	}
	return 0;
}
*/

//Ushtrimi 10, K2 - gr A
/*
struct vetura
{
	string marka;
	int vitiProdhimit, kilometrat;
	double mesatarja(int vitiProdhimit, int kilometrat) {
		double rez = 0, a = 0;
		for (int i = vitiProdhimit + 1; i <= 2023; i++) {             // ose for (int i = vitiProdhimit; i < 2023; i++)
			a++;
		}
		rez = (kilometrat / a) * 1.0;
		return rez;
	}
};
int main() {
	vetura Vjuaj;
	Vjuaj.marka = "Audi";
	Vjuaj.vitiProdhimit = 2015;
	Vjuaj.kilometrat = 189000;
	cout << "Mesatarja eshte = " 
		<< Vjuaj.mesatarja(Vjuaj.vitiProdhimit, Vjuaj.kilometrat);
	return 0;
}
*/
