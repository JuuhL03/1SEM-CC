#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){

	int num1=8,num2=7;
	
	cout << "Primeiro numero ";
	cin >> num1;
	
	cout << "Segundo numero ";
	cin >> num2;
	
	if (num1 % num2 == 0)
		cout << num1 << " e multiplo do " << num2 << endl;
	else
		cout << num1 << " nao e multiplo do " << num2 << endl;
	return 0;
}
