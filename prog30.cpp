// Program 30

#include <iostream>
#include <cstring>
using namespace std;

int main(){
	char x[] = "Happy Birthday to You";
	char y[25], z[15];
	
	cout<<"The string in array x is: "<<x
	<<"\nThe string in array y is: "<<strcpy(y,x)
	<<'\n';
	
	strncpy(z, x, 14);
	z[14] = '0';
	
	cout<<"The string in array z is: "<<z<<endl;
	
	return 0;
	
}

