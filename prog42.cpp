//Program 42

#include <iostream>
#define MAX 50
using namespace std;

void push();
void pop();
void display();

int stack[MAX], top = 1, item;

int main(){
	int ch;
	
	do{
		cout<<"\n\tProgram using Stacks";
		cout<<"\n\n1.\tPush\n2.\tPop\n3.\tDisplay\n4.\tExit\n";
		cout<<"\nEnter your choice: ";
		cin>>ch;
		
		switch(ch) {
			case1:
				push();
				break;
			case2:
				pop();
				break;
			case3:
				display();
				break;	
			case4:
				return 0;
			default:
				printf("\n\nInvalid entry. Please try again...\n");	
		}
	}while(ch != 4);
	
	
}

void push (){
	if(top == MAX -1)
		cout<<"\n\nStack is full.";
	else {
		cout<<"\n\nEnter ITEM: ";
		cin>>item;
		top++;
		stack[top] = item;
		cout<<"\n\nITEM inserted: "<<item<<"\n";
	}
}

void pop(){
	if(top == -1)
		cout<<"\n\nStack is empty.";
	else {
		item = stack[top];
		top--;
		cout<<"\n\nITEM deleted: "<<item<<"\n";
	}
}

void display(){
	int i;
	if(top == -1)
		cout<<"\n\nStack is empty. \n";
	else {
		for(i = top; i >= 0; i--)
		cout<<"\n"<<stack[i];
	}
	
}
