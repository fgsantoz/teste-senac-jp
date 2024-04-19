// 24. FUP que imprima a tabuada de um numero de 0 a 10;

#include <iostream>

using namespace std;

main() {
	
	system("chcp 65001");

	int num;

	cout <<"\n Insira o número da tabuada: ";
	cin >>num; cout <<"\n";

	for (int i = 0; i <= 10; i++)	{

		cout <<num <<"*" <<i <<"=" <<num*i <<"\n\n";

	}
     	    
}

