#include <iostream>
using namespace std;

int main() {
	int markA,markB,markC,totalSum;
	float averageMark;
	cout<<"Please enter the mark of the first student: ";
	cin>>markA;
	cout<<"Please enter the mark of the second student: ";
	cin>>markB;
	cout<<"Please enter the mark of the last student:";
	cin>>markC;
	totalSum = markC + markB + markC;
	averageMark = (float)totalSum / 3; // tyepecasting
	cout<<"Your average mark of the three student is "<<averageMark;
	
}

