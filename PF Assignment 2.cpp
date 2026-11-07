// Name: Majid Ali
// SAP ID: 5000020282

#include <iostream>
using namespace std;
int main () {

cout << "---Student Marks Evaluation System---" << endl;
cout << "WARNING: Invalid Marks are considered as 0" << endl;

int English, Maths, Biology, Physics, Chemistry; 

cout << "Enter the marks of English (Out of 100): ";
cin >> English;
if(!(English>0&&English<100)){
	cout <<"invalid marks"<<endl;
	English=0;
}
cout << "Enter the marks of Maths (Out of 100): ";
cin >> Maths;
if(!(Maths>0&&Maths<100)){
	cout <<"invalid marks"<<endl;
     Maths=0;
}
cout << "Enter the marks of Biology (Out of 100): ";
cin >> Biology;
if(!(Biology>0&&Biology<100)){
	cout <<"invalid marks"<<endl;
	Biology=0;
     
}

cout << "Enter the marks of Physics (Out of 100): ";
cin >> Physics;
if(!(Physics>0&&Physics<100)){
	cout <<"invalid marks"<<endl;
     Physics= 0;
}

cout << "Enter the marks of Chemistry (Out of 100): ";
cin >> Chemistry;
if(!(Chemistry>0&&Chemistry<100)){
	cout <<"invalid marks"<<endl;
     Chemistry=0;
}

int total = English + Maths + Biology + Physics + Chemistry;
double percentage = (total / 500.0) * 100;

    
cout << endl << "Total marks out of 500: " << total << endl;
cout << "Percentage: " << percentage << "%" << endl;


if (percentage >=90){
	cout << "Grade:A" << endl;
} else if (percentage >=80) {
	cout << "Grade:B" << endl;
} else if (percentage >=70) {
	cout << "Grade:C" << endl;
}  else {
	cout << "Fail";
}
	
	
	
	
	
	
	return 0;
}

