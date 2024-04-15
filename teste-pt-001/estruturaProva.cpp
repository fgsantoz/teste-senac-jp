// Fabricio Gomes Santos: 04 10 17 24 28;
// Uso obrigatório do Array na última questão;

#include <iostream>

using namespace std;

main() {
    int op;
    system("chcp 65001");
    
    double cels, fahr; // Q-04
    
    
    
    do{
        cout<<"\n \t Selecione uma opção no menu abaixo: \n";
        cout<<"\n [1] Exercício 04";
        cout<<"\n [2] Exercício 10";
        cout<<"\n [3] Exercício 17";
        cout<<"\n [4] Exercício 24";
        cout<<"\n [5] Exercício 28";
        cout<<"\n [6] Use a sua criatividade";
        cout<<"\n [7] Encerrar \n\n";
        cout<<"\n Digite a opção: ";
        cin>>op;
        switch(op) {
            case 1: {
                cout<<"\n Conversor de Temperatura: \n";
                
                cout <<"\n Digite a temperatura em Celsius: ";
    			cin >> cels;
    
    			fahr = (9*cels+160)/5;
    
   				cout <<"\n A temperatura em Fafrenheit é " <<fahr <<"ºF\n";                            
                                
                break;
            };
            case 2: {
                cout<<"Sendo criativo";
                break;
            };
            case 3: {
                cout<<"Sendo criativo";
                break;
            };
            case 4: {
                cout<<"Sendo criativo";
                break;
            };
            case 5: {
                cout<<"Sendo criativo";
                break;
            };
            case 6: {
                cout<<"Sendo criativo";
                break;
            };
            case 7: {
                cout<<"Finalizando";
                break;
            };
            default:
                cout<<"\nOpção inválida";
                break;
        }
    }while(op != 7);
    cout<<"\n\n\n\n\n - Até mais \n\n\n\n\n";
}

