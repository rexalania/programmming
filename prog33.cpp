// Program 33

#include <iostream>
#include <cstring>
using namespace std;

int main(){
	char string[] = "This is a sentence with 7 tokens";
	char *tokenPtr;
	
	cout << "The string to be tokenized is: \n" << string
		<<"\n\nThe tokens are:\n";
		
	tokenPtr = strtok(string, " ");
	
	while(tokenPtr != NULL){
		cout << tokenPtr << '\n';
		tokenPtr = strtok(NULL, " ");
	}
	
	return 0;
}
