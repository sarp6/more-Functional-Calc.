#include <iostream>
#include <math.h>
using namespace std;

int main(){
	char ans;
	do{
		double x,y;
		cout<< "Which operation would you like to do?"<< endl;
		cout<< "1-Summation."<<endl;
		cout<< "2-Substraction."<<endl;
		cout<< "3-Multiplication."<<endl;
		cout<< "4-Division."<<endl;
		cout<< "5-Taking a root of number."<<endl;
		int operation;
		cin>> operation;
		switch (operation){
			case 1:
				cout<< "Enter first number: ";
				cin>> x;
				cout<< "Enter second number: ";
				cin>>y;
				cout<< "Summation: "<< x + y;
			break;
			case 2:
				cout<< "Enter first number: ";
				cin>> x;
				cout<< "Enter second number: ";
				cin>>y;
				cout<< "Submission: "<< x - y;
			break;
			case 3:
				cout<< "Enter first number: ";
				cin>> x;
				cout<< "Enter second number: ";
				cin>>y;
				cout<< "Multiplication: "<< x * y;
			break;
			case 4:
				cout<< "Enter first number: ";
				cin>> x;
				cout<< "Enter second number: ";
				cin>>y;
				cout<< "Division: "<<  x / y;
			break;
			case 5:
				cout<< "Enter the number which you want to take the root: ";
				cin>> x;
				cout<< "Root: "<<  sqrt(x);
			break;
			default:
				cout<< "WRONG INPUT!!";	
		}
		cout<< endl;
		cout<< "Would you like to do another operation?(Y for yes N for no): ";
		cin>> ans;
		cout<< endl<< endl;
	}
	while (ans== 'y'|| ans== 'Y');
}
