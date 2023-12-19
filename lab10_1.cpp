#include<iostream>
using namespace std;

int main(){
	int count[5] = {}; //Declare array count for counting A,B,C,D,F and initialize all element = 0
	char grade;
	int student=1;
	cout << "Please input grade of each student (A-F) or input 0 to exit.\n";
	do{
		cout << "Student [" << student <<"]: ";
		cin >> grade; //The loop must be terminated when grade = '0'
		if(grade == 'A'){ // if grade is A
			count[0]=count[0]+1;
		}else if(grade == 'B'){
			count[1]=count[1]+1;
		}else if(grade == 'C'){
			count[2]=count[2]+1;
		}else if(grade == 'D'){
			count[3]=count[3]+1;
		}else if(grade == 'F'){
			count[4]=count[4]+1;
		}else if(grade == '0'){
			student--;
			break;
		}else{
			cout<<"Wrong input. Please input again.\n";
			student--;
		}
		student++;
	}while(grade != '0');
	
	cout << "In total "<< student <<" students.\n";
	cout << "A = " << count[0] <<", ";
	cout << "B = " << count[1] <<", ";
	cout << "C = " << count[2] <<", ";
	cout << "D = " << count[3] <<", ";
	cout << "F = " << count[4] ;	
	
	return 0;
}