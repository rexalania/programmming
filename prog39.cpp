// Program 39

#include <iostream>
using namespace std;

struct nameType {
	char first[10];
	char middleInitial;
	char last[20];
};

void inputSingle(nameType &sname);

int main(){
	nameType sname, ename[3], currentName;
	cout << "--- Input Single ---\n";
	inputSingle(sname);
	cout << "--- Display Single ---\n";
	cout << sname.first << " " << sname.middleInitial << ". " << sname.last << "\n";
	
}

void inputSingle(nameType &sname){
	cout << "Enter your frst name: ";
	cin >> sname.first;
	cout << "Enter your middle initial: ";
	cin >> sname.middleInitial;
	cin.ignore();
	cout << "Enter your last name: ";
	cin >> sname.last;
}
