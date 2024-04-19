/* 17. FUP que leia as 3 notas de um aluno e calcule a média final deste aluno.
Considerar que a média é ponderada e que o peso das notas é: 2,3 e 5, respectivamente. - media ponderada; */

#include <iostream>

using namespace std;

main() {
	
	system("chcp 65001");
	
	float nota01, nota02, nota03, media;
	float peso01 = 2, peso02 = 3, peso03 = 5;
	
	cout <<"\n \t Insira a 1ª nota: ";
	cin >>nota01;
	
	cout <<"\n \t Insira a 2ª nota: ";
	cin >>nota02;
	
	cout <<"\n \t Insira a 3ª nota: ";
	cin >>nota03;
	
	media = (nota01*peso01 + nota02*peso02 + nota03*peso03) / (peso01+peso02+peso03);
	
	cout <<"\n \t A média final do aluno é " <<media;    
        	    
}

