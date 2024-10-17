/*Наприкінці травня фірма формує звіт по заробітній платі 12 співробітників за весняний квартал. 
Написати програму, яка запитуватиме суму заробітної плати кожного співробітника за Березень, Квітень і Май.
Необхідно визначити:
■ виплату по кожному співробітнику за квартал;
■ загальну виплату по всім співробітникам за квартал. */

#include<iostream>
using namespace std;
int main() {
	float mS = 0, mT = 0, sK = 0, sumK = 0;
	for (int i = 1; i <= 12; i++) {
		for (int j = 3; j <= 5; j++) {
			cout << "Vedite zarplaty " << i << " spivrobitnuka za misats " << j << " :";
            cin >> mS;
			sK += mS;
		}
		cout << "\nZarplata za kvartal " << i << " spivrobitnuka " << sK << " gr\n\n";
		sumK += sK;
		sK = 0;
	}
	cout << "\nZarplata za kvartal vsih spivrobitnukiv " << sumK << " gr\n";
}