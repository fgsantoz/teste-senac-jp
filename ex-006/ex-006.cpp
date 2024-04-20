// Sexta Questão - Avaliação P.02;

#include <iostream>

using namespace std;

main() {
	
	system("chcp 65001");
	
	const int MAX = 2; 	
	
    
        for(int i = 0; i <= MAX; ++i) {
                	
        			int padrao[] = {i+1, i+2, i+1};
            		int count = sizeof(padrao) / sizeof(padrao[0]);
                	
            		for(int j = 0; j < count; ++j ) {
                			
               			for(int p = 0; p < padrao[j]; p++) {
                				
                			std::cout <<"*";
                				
						}
						
						std::cout << std::endl;
                			
					}
					
				}
		
		
    
}

