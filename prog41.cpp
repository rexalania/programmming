// Program 41

#include <iostream>
#include <cstdlib>
using namespace std;

struct student {
	int number;
	char grade;
};

typedef struct student *StudentPointer;

int main(){
	StudentPointer P1, P2;
	
	cout << "--- Structure and Pointer ---\n";
	P1 = (StudentPointer) malloc (sizeof(struct student));
	P1 -> number = 1;
	P1 -> grade = 'A';
	
	cout << P1 -> number << " " << P1 -> grade << "\n";
	P2 = (StudentPointer) malloc (sizeof(struct student));
	P2 -> number = 2;
	P2 -> grade = 'B';
	
	P1 = P2;
	P2 -> number = 3;
	P2 -> grade = 'C';
	
	cout << P1 -> number << " " << P1 -> grade << " " << P2 -> number << " " << P2 -> grade;
	
	return 0;
}


