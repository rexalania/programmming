// Program 29

#include <iostream>
using namespace std;

void inputMatrix(int mat[2][2]);
void plusMatrix(int mat1 [2][2], int mat2[2][2], int mat3[2][2]);
void outputMatrix(int mat[2][2]);

int main (){
	int matrix1[2][2], matrix2[2][2], output[2][2];
	cout<<"Input matrix 1: \n";
	inputMatrix(matrix1);
	
	cout<<"Input matrix 2: \n";
	inputMatrix(matrix2);
	
	plusMatrix(matrix1, matrix2, output);
	cout<<"Output: \n";
	
	outputMatrix(output);
	
}

void inputMatrix(int mat[2][2]){
	int x,y;
	for (x = 0; x < 2; x++){
		for (y = 0; y < 2; y++){
			cout<<"X"<<x<<"Y"<<y<<":";
			cin>>mat[x][y];
		}
	}
}

void plusMatrix(int mat1[2][2], int mat2 [2][2], int mat3[2][2]){
	int x,y;
	for (x = 0; x < 2; y++)
		mat3[x][y] = mat1[x][y] + mat2[x][y];
	
}

void outputMatrix(int mat[2][2]){
	int x,y;
	for (x = 0; x < 2; x++){
		for (y = 0; y < 2; y++)
			cout<<mat[x][y]<<"";
			
		cout<<"\n";
	}
}

