#include <iostream>
 
using namespace std;
 
int main() {
	int number = 0;
	int copyNumber = 0;
	int nCem = 0;
	int nCinquenta = 0;
	int nVinte = 0;
	int nDez = 0;
	int nCinco = 0;
	int nDois = 0;
	int nUm = 0;

	cin >> number;
	copyNumber = copyNumber + number;

	if(number / 100 > 0){
		nCem = number / 100;
		number = number - ((number / 100) * 100);
	}
	if(number / 50 > 0){
		nCinquenta = number / 50;
		number = number - ((number / 50) * 50);
	}
        if(number / 20 > 0){
                nVinte = number / 20;
		number = number - ((number / 20) * 20);
        }

        if(number / 10 > 0){
                nDez = number / 10;
                number = number - ((number / 10) * 10);
        }

        if(number / 5 > 0){
                nCinco = number / 5;
                number = number - ((number / 5) * 5);
        }

        if(number / 2 > 0){
                nDois = number / 2;
                number = number - ((number / 2) * 2);
        }
	nUm = number;
	cout << copyNumber<<endl;
	
	cout << nCem <<" nota(s) de R$ 100,00"<<endl;
	cout << nCinquenta <<" nota(s) de R$ 50,00"<<endl;
	cout << nVinte <<" nota(s) de R$ 20,00"<<endl;
	cout << nDez <<" nota(s) de R$ 10,00"<<endl;
	cout << nCinco <<" nota(s) de R$ 5,00"<<endl;
	cout << nDois <<" nota(s) de R$ 2,00"<<endl;
	cout << nUm <<" nota(s) de R$ 1,00"<<endl;

 
    return 0;
}
