#include <iostream>

using namespace std;

int main(){
	bool p = (5 > 4);
	bool q = (4 == 5);

	if (p && !q)
		cout << "CONDICIONAL p -> q FALSA";
	else
		cout << "CONDICIONAL p -> q VERDADEIRA";
	return 0;
}
