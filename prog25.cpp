// Program 25

#include <iostream>
using namespace std;

int main (){
	int score[3], i, counter, totalScore;
	float averageScore;
	
	for(i = 0; i < 3; i++){
		cout<<"Enter score: ", i;
		cin>>score[i];
	}
	totalScore = 0;
	
	for(i = 0; i < 3; i++)
		totalScore += score[i];
	
	
	averageScore = (float)totalScore / 3;
	
	counter = 0;
	
	for(i=0;i<3;i++)
		if(score[i] > averageScore)
			counter++;
			
	cout<<"\nAverage score: "<<averageScore;
	cout<<"\nNumber of students with score above average: "<<counter<<"\n";




}
