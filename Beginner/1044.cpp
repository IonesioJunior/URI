#include <iostream>
 
using namespace std;
 
int main() {
 
	int x = 0;
	int y = 0;
	cin >> x >> y;
	if(y > x){
	    if((y % x) == 0){
		    cout << "Sao Multiplos" << endl;
	    }else{
		    cout << "Nao sao Multiplos" << endl;	
	    }
	    
	}else{
	    if((x % y) == 0){
	        cout << "Sao Multiplos" << endl;
	    }else{
	        cout << "Nao sao Multiplos" << endl;
	    }
	}
    return 0;
}
