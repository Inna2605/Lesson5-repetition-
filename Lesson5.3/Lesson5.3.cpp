/*Ќаписати програму, €ка виводить на екран  Ч таку ф≥гуру:
*       *       *
  *     *     *
    *   *   *
*  *  * * *  *  *
    *   *   *
  *     *     *
*       *       *
Ўирина й висота ф≥гури запитуютьс€ в користувача €к додатне, непарне число.*/

#include<iostream>
using namespace std;
int main() {
    int N;
    cout << "Vvedite shuruny i dlinny figyru (neparne chuslo) N = ";
    cin >> N;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (i == j || (i + j) == N-1 || (i == N/2) || (j == N/2)) {
                cout << " * ";
            }
            else {
                cout << "   ";
            }
        }
        cout << endl;
    }
    cout << endl;
}