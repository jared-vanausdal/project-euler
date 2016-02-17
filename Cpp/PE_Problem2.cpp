/* 
	File: PE_Problem1.cpp
	
	Finds the sum of the even fibonacci numbers that are less than
	4,000,000.
*/

#include <iostream>

using namespace std;

int Fib(int n){
	if (n == 0){
		return 0;
	}
	if (n == 1){
		return 1;
	}
	int FibNum = Fib(n-2) + Fib(n-1);
	return FibNum;
}

int main(void){
	
	int cap = 4000000;
	int sumOfFibs = 0;
	
	for (int i = 0; Fib(i) < cap; ++i){
		if (Fib(i) % 2 == 0){
			sumOfFibs += Fib(i);
		}
	}
	
	cout << "The answer is: " << sumOfFibs << endl;

	return 0;
}