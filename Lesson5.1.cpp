/*�������� ��������, ��� ��� ����� � ������� 
�� A �� B ��������� ������� ���� �������. 
���������, A = 10, B = 15.
ĳ������ ��� ����� 10 � 1 2 5 10;
ĳ������ ��� ����� 11 � 1 11;
ĳ������ ��� ����� 12 � 1 2 3 4 6 12;
ĳ������ ��� ����� 13 � 1 13;
ĳ������ ��� ����� 14 � 1 2 7 14;
ĳ������ ��� ����� 15 � 1 3 5 15.*/

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