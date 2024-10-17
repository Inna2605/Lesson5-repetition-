/*Написати програму, яка для чисел у діапазоні 
від A до B визначала кількість їхніх дільників. 
Наприклад, A = 10, B = 15.
Дільники для числа 10 — 1 2 5 10;
Дільники для числа 11 — 1 11;
Дільники для числа 12 — 1 2 3 4 6 12;
Дільники для числа 13 — 1 13;
Дільники для числа 14 — 1 2 7 14;
Дільники для числа 15 — 1 3 5 15.*/

#include<iostream>
using namespace std;
int main() {
	int A, B, a = 1;
	cout << "Vvedite chisla A i B diapazonu: ";
	cin >> A >> B;
	cout << endl;
	for (int j = 0; A <= B; j++) {
		a = A;
		cout << "Dilnuku dla chisla " << A << " - ";
		for (int i = 1; i <= A; i++) {
			a /= i;
			if (A % i == 0) {
				cout << i << ' ';
			}
		}
		A += 1;
		cout << endl;
	}
	cout << endl;
}