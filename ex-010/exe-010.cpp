/* 10. FUP que calcule o IMC - Solicite se é H ou M e faça o calculo;

para homens: (72.7*Alt)-58
para mulheres: (62.1*Alt)-44.7 */


#include <iostream>

using namespace std;

main() {
	
	system("chcp 65001");
    
    char gen;
	double alt, imc;
        
    cout <<"\n Informe seu gênero... \n\n (H: para Homem | M: para Mulher): ";
    cin >> gen;
    
    
    cout <<"\n Informe seu peso (em quilos): ";
    cin >>pes;
    
    cout <<"\n Informe sua altura (em metros): ";
    cin >>alt;
    
    
    imc = pes/(alt*alt);
    
	cout <<imc;
    
    
    // if(gen == 'M' || gen == 'm'){
    	
    	
    	
	
    
}

