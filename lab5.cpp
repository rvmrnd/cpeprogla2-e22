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
    cout << "Name: ";
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

/****
LAB 3 PROBLEM #2
#include <iostream>
using namespace std;

struct Name{
   char givenName[30];
};

struct Student{
   double id[5];
   Name name[5];
   double grade[3];
   float ave[5], sum[5];  
};

void newLine();

int main(){
    Student stud[5];  
    for (int i=0; i<5; i++){
    	cout << "Student: " << i+1 << endl;
    	cout << "ID: ";
    	cin >> stud[i].id[i];
    	newLine();
    	cout << "Name: ";
		cin.getline(stud[i].name[i].givenName, 29);
		cout << "Enter 3 quizzes: ";
		for(int j=0; j<3; j++){
	        cin >> stud[i].grade[j];
    	}
	}
	
	cout << "No.\t\tStudent No.\t\t\tName\t\t\tGrade\t\tRemark\n";
    for (int i=0; i<5; i++){
    	cout << i+1 << "\t\t" << stud[i].id[i] << "\t\t\t\t" << stud[i].name[i].givenName << "\t\t\t";
    	for(int j=0; j<3; j++){
        	stud[i].sum[i] += stud[i].grade[j];  
    	}
    	
	    stud[i].ave[i] = stud[i].sum[i]/3;
	    cout << stud[i].ave[i];
	    
	    if(stud[i].ave[i]>=75)
	    	cout << "\t\tPassed\n";
		else
			cout << "\t\tFailed\n";
	}
    
    system("pause > 0");
    return 0;   
}
void newLine(){
    char s;
    do{cin.get(s);}while(s!='\n');     
}
****/
