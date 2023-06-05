#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int x;
	
	cout << "Digite um numero: ";
	cin >> x;
	
	if (x % 3 == 0)
		cout << x << " e multiplo de 3" << endl;	
	else
		cout << x << " nao e multiplo de 3" << endl;
	return 0;
}
