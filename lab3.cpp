#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

char stringcomp(){
	char str1[20], str2[20];
	cout << "******************\nSTRING COMPARE\n******************\n";
	cout << "Enter a first word (str1): ";
	cin >> str1;
	cout << "Enter a second word (str2): ";
	cin >> str2;
	
	if (strcmp(str1, str2) == -1)
		cout << "negative";

	else if (strcmp(str1,str2) == 0)
		cout << "equal";
	else if (strcmp(str1,str2) == 1)
		cout << "positive";
	else
		cout << "invalid";
	
	
		
}
main(){
	stringcomp();
	return 0;
}
