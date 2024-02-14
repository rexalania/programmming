// Program 43

#include <iostream>
using namespace std;

int main(){
	int p, *ptr, size;
	
	ptr = &p;
	
	cout << "Enter an intiger: ";
	cin >> *ptr;
	cin.ignore();
	
	size = sizeof(*ptr);
	
	cout << "\nValue: " << *ptr;
	cout << "\nAddress: " << &p;
	cout << "\nSize in bytes: " << size << "\n";
	
	return 0;
}
