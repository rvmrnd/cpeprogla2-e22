#include <iostream>
using namespace std;

struct Name{
   char givenName[30];
};

struct Student{
   int id;
   Name name;
   double grade[3];       
};

void newLine();

int main(){
    Student stud;
    float sum, ave;
    cout << "Enter Student Record: \n";
    cout << "ID: ";
    cin >> stud.id;
    newLine();
    cout << "First Name: ";
    cin.getline(stud.name.givenName, 29);

    for(int i=0; i<3; i++){
        cout << "Grade "<< i << ": ";
        cin >> stud.grade[i];        
    }
    
    cout << "\n\n";
    cout << "Student Record:\n";
    cout << "ID: " << stud.id << endl;
    cout << "Name: " << stud.name.givenName << endl;
    for(int i=0; i<3; i++){
        sum = sum + stud.grade[i];  
    }
    
	ave = sum/3;
    cout << "Grades: " << ave << endl;
    
    if(ave>=75)
    	cout << "Remarks: Passed";
	else if(ave<75)
		cout << "Remarks: Failed";
	else
		cout << "Remarks: Invalid Grade";
    
    system("pause > 0");
    return 0;   
}
void newLine(){
    char s;
    do{cin.get(s);}while(s!='\n');     
}
