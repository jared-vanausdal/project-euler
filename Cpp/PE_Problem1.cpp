/*
	File: PE_Problem1.cpp
	
	Project Euler Problem1 coded in C++ instead of Python. Find
	the sum of all multiles of 3 and 5 up to 1000
*/

#include <iostream>

using namespace std;

int FindMultiples(int n){
	int multiples[n];
	int multiplesIndex = 0;
	int sumOfMultiples = 0;
	
	// Initialize the multiples array
	
	for (int i = 0; i <= n; ++i){
		multiples[i] = 0;
	}
	
	// Find the multiples of 3 and 5 less than 1000
	for (int j = 1; j <= n; ++j){
		if ((j % 3 == 0) || (j % 5 == 0)){
			multiples[multiplesIndex] = j;
			++multiplesIndex;
		}
	}
	
	// Sums up the non-zero elements of multiples array
	for (int i = 0; multiples[i] != 0; ++i){
		sumOfMultiples += multiples[i];
	}
	
	return sumOfMultiples;
}

int main(void){
	
	int n = 1000;
	int answer;
	
	answer = FindMultiples(n);
	
	cout << "The answer is: " << answer << endl;
	
	return 0;
}