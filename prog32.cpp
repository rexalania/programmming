// Program 32

#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;

int main(){
	char s1[] = "Happy New Year";
	char s2[] = "Happy New Year";
	char s3[] = "Happy Holidays";
	cout << "s1 = " << s1 << "\n\nstrcmp (s1, s2) = "
		<< setw(2) << strcmp(s1, s2)
		<<"\nstrcmp(s1, s3) = " << setw(2)
		<< strcmp(s1, s3) << "\nstrcmp(s3, s1) = "
		<< setw(2) << strcmp(s3, s1);
	cout << "\n\nstrcmp(s1, s3, 6) = " <<setw(2)
		<< strncmp(s1, s3, 6) << "\nstrncmp(s1, s3, 7) = "
		<< setw(2) << strncmp(s1, s3, 7)
		<< "\nstrncmp(s3, s1, 7) = "
		<< setw(2) << strncmp(s3, s1, 7) << endl;
		
	return 0; 
	
}
