#include <iostream>
using namespace std;
int main ()
{
	int age;
	double cgpa;
	char grade;
	int failedAttempts = 3;
	const int MAX_LOGIN_ATTEMPTS = 5;
	
	
	
	cout << "Enter your age:";
	cin >> age;
	cout << "Enter your cgpa:";
	cin >> cgpa;
	cout << "Enter your grade:";
	cin >> grade;
	cout<<"\n";
	

	cout << "Age:\t" << age << "\n";
	cout << "CGPA:\t" << cgpa << "\n";
	cout << "Grade:\t" << grade << "\n";
	cout << "Failed Logins:\t" << failedAttempts << "\n";
	cout << "Maximum Attempts Allowed:"<<MAX_LOGIN_ATTEMPTS << "\n";
	cout << "\n";
	
	
/*	// Experiment 
	int total = 9;
	int count = 2;
	cout <<"total using implicit:"<<total / count<< endl;
	cout <<"total using explicit:"<<static_cast<double>(total) / count << endl; 
	*/
	
	int total = 10+2;
	int count = 2;
	cout <<"total using implicit:"<<total / count<< endl;
	cout <<"total using explicit:"<<static_cast<double>(total) / count << endl; 
	
	
	return 0;
	
}
