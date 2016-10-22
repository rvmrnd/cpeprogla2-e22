#include<iostream>
#include<cmath>
#include<fstream>
using namespace std;

int main(){
	int x, total;

	ifstream read("input.txt");
	read >> x;
	cout << x << endl;
		for(int i=0; i<x; i++){
			if(i%3==0||i%5==0){
				total += i;
			}
		}
	
	cout << total;
	return 0;
}
