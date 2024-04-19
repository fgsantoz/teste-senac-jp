// 28. FUP que leia 10 números e verifique quantos destes números são negativos;

#include <iostream>

using namespace std;

main() {
	
	system("chcp 65001");
	
	const int arytmn = 10;
	int vlr[arytmn], ctmnos = 0;
	
	cout <<"\n \t Informe os números... \n";
	
	for (int i = 0; i < arytmn; ++i) {
		
		cout <<"\n \t\t Número " <<i + 1 <<": ";
		cin >>vlr[i];
		
		if(vlr[i] < 0) {
			
			ctmnos++;
			
		}
			
	}
	
	cout <<"\n \t O total de valores negativos é " <<ctmnos <<"\n\n";     
      
}

