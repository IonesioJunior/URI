#include <iostream>
 
using namespace std;
 
int main() {

 	string firstWord,secondWord,thirdWord;
	cin >> firstWord;
	cin >> secondWord;
	cin >> thirdWord;
	
	if(firstWord == "vertebrado"){
		if(secondWord == "mamifero"){
			if(thirdWord == "onivoro"){
				cout << "homem" << endl;	
			}else{
				cout << "vaca" << endl;
			}
		}else{
			if(thirdWord == "carnivoro"){
				cout << "aguia" << endl;
			}else{
				cout << "pomba" << endl;
			}
		}
	}else{
		if(secondWord == "inseto"){
			if(thirdWord == "hematofago"){
				cout << "pulga" << endl;
			}else{
				cout << "lagarta" << endl;
			}
		}else{
			if(thirdWord == "hematofago"){
				cout << "sanguessuga" << endl;
			}else{
				cout << "minhoca" << endl;
			}
		}
	}
    return 0;
}
