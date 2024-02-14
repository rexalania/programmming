// Program 37

#include <iostream>
#include <cstring>
#include <sstream>
using namespace std;

int main(){
	string mystr;
	float price = 0;
	int quantity = 0;
	
	cout << "Enter Price: ";
	getline(cin, mystr);
	stringstream(mystr) >> price;
	
	cout << "Enter Quantity: ";
	getline(cin, mystr);
	stringstream(mystr) >> quantity;
	
	cout << "Total Price: " << price * quantity << endl;
	
	return 0;
}
