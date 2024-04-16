/* 4. Ler uma temperatura em graus Celsius e apresentá-la convertida em graus Fahrenheit. 
A fórmula de conversão é : F = (9*C+160)/5, Sendo F a temperatura em Fahrenheit e C a temperatura em Celsius.*/

#include <iostream>

using namespace std;

main() {
	
	system("chcp 65001");
    
    double cels, fahr;
    
    cout <<"Digite a temperatura em Celsius: ";
    cin >> cels;
    
    fahr = (9*cels+160)/5;
    
    cout <<"A temperatura em Fafrenheit é " <<fahr <<"ºF";
    
    
}

