#include <iostream>

using namespace std;

int main(){
	int x, y;
	
	for(x=1;x<=100;x++){
		
		if((y%3==0) && (y%5==0)){		
			cout << "fizzbuzz" << endl;
			y++;
		}
		else if (y%3==0){
			cout << "fizz" << endl;
			y++;
		}
		else if (y%5==0){
			cout << "buzz" << endl;
			y++;
		}
		else{
			cout << y << endl;
			y++;
		}
	}
	return 0;
}
