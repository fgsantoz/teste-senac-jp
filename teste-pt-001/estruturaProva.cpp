// Fabricio Gomes Santos: 04 10 17 24 28;
// Uso obrigatório do Array na última questão;

#include <iostream>

using namespace std;

main() {

	system("chcp 65001");
    
	int op, num;
	double cels, fahr;
	char gen;
	float alt, imc, nota01, nota02, nota03, media, peso01 = 2, peso02 = 3, peso03 = 5;
	// float pes;
	 
    
    do{

        cout <<"\n Selecione uma opção no menu abaixo: \n";
        cout <<"\n [1] Exercício 04";
        cout <<"\n [2] Exercício 10";
        cout <<"\n [3] Exercício 17";
        cout <<"\n [4] Exercício 24";
        cout <<"\n [5] Exercício 28";
        cout <<"\n [6] Use a sua criatividade";
        cout <<"\n [7] Encerrar \n\n";
        cout <<"\n Digite a opção: ";
        cin >>op; cout <<"\n";

        switch(op) {

            case 1: {
                
                cout <<"\n \t Conversor de Temperatura: \n";
                
                cout <<"\n \t Digite a temperatura em Celsius: ";
    			cin >> cels;
    
    			fahr = (9*cels+160)/5;
    
   				cout <<"\n \t A temperatura em Fafrenheit é " <<fahr <<"ºF\n";                            
                                
                break;

            };

            case 2: {
                
                cout <<"\n \t Calculadora de IMC: \n";

                cout <<"\n \t Informe seu gênero... \n\n \t M: para masculino | F: para feminino: ";
                cin >>gen;
        
                // cout <<"\n \t Informe seu peso (em quilogramas): ";
                // cin >>pes; 
                // devido a formula dada no enunciado, a solicitação de peso, por hora, se tornou dispensável e, portanto, foi desativada do código;
    
                cout <<"\n \t Informe sua altura (em metros): ";
                cin >>alt;    
    
                if(gen == 'M' || gen == 'm') {
            
                    imc = (72.7*alt)-58;
                    cout <<"\n \t Seu IMC é " <<imc <<"\n\n";

                }
    	
                else if(gen == 'F' || gen == 'f') {
            
                    imc = (62.1*alt)-44.7;
                    cout <<"\n \t Seu IMC é " <<imc <<"\n\n";

                }

                break;

            };

            case 3: {

                cout <<"\n \t Exercício 17: \n";
                
                cout <<"\n \t Insira a 1ª nota: ";
				cin >>nota01;
	
				cout <<"\n \t Insira a 2ª nota: ";
				cin >>nota02;
	
				cout <<"\n \t Insira a 3ª nota: ";
				cin >>nota03;
	
				media = (nota01*peso01 + nota02*peso02 + nota03*peso03) / (peso01+peso02+peso03);
	
				cout <<"\n \t A média final do aluno é " <<media <<"! \n\n";                

                break;
                
            };

            case 4: {

                cout <<"\n \t Tabuada de Multiplicação: \n";

                cout <<"\n \t Insira o número da tabuada: ";
		        cin >>num; cout <<"\n";

		        for (int i = 0; i <= 10; i++)	{

					cout <<"\n \t" <<num <<"*" <<i <<"=" <<num*i <<"\n\n";

		        }
                
                
                break;

            };

            case 5: {

                cout <<"Exercício 28: ";
                break;

            };

            case 6: {

                cout <<"Sendo criativo";
                break;

            };

            case 7: {

                cout <<"Finalizando";
                break;

            };

            default:

                cout <<"\nOpção inválida";
                break;

        }

    }while(op != 7);
    
    cout <<"\n\n\n\n\n - Até mais \n\n\n\n\n";
    
}

