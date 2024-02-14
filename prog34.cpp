// Program 34

#include <iostream>
#include <cstring>
using namespace std;

int main(){
	char string1[] = "abcdefghijklmnopqrstuvwxyz";
	char string2[] = "four";
	char string3[] = "Boston";
	
	cout << "The length of " << string1
		<< " is " << strlen(string1)
		<< "\nThe length of " << string2
		<< " is " << strlen(string2)
		<< "\nThe length of " << string3
		<< " is " << strlen(string2) << endl;
		
	return 0;
}

