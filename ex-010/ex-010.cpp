/* 10. FUP que calcule o IMC - Solicite se é H ou M e faça o calculo;
para homens: (72.7*alt)-58
para mulheres: (62.1*alt)-44.7 */


#include <iostream>

using namespace std;

main() {
	
	system("chcp 65001");
    
    char gen;
	float alt, imc;
    // float pes;
        
    cout <<"\n Informe seu gênero... \n\n (M: para masculino | F: para feminino): ";
    cin >>gen;
        
    // cout <<"\n Informe seu peso (em quilogramas): ";
    // cin >>pes; 
    // devido a formula dada no enunciado, a solicitação de peso, por hora, se tornou dispensável e, portanto, foi desativada do código;
    
    cout <<"\n Informe sua altura (em metros): ";
    cin >>alt;    
    
        if(gen == 'M' || gen == 'm') {
            
            imc = (72.7*alt)-58;
            cout <<"\n Seu IMC é " <<imc <<"\n\n";

        }
    	
        else if(gen == 'F' || gen == 'f') {
            
            imc = (62.1*alt)-44.7;
            cout <<"\n Seu IMC é " <<imc <<"\n\n";

        }
    	    
}

