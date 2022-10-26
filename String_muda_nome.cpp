#include <iostream>
#include <string>

using namespace std;



int main() {
	
	string nome;
  
  
	
    getline(cin, nome);
    
    char n = '\0'; // Char nulo
    
	for(int i=0; nome[i]!= n; i++)
	{
		if (nome[i] >= 65 && nome[i] <= 90 )         
      //Maiusculo de A até Z asciitable
			nome[i] = nome[i] + 32;  
    //conversao Maiusculo de A até Z asciitable
		else if (nome[i] >= 97 && nome[i] <= 122 )  
      // Minusculo de A até Z asciitable
		    nome[i] = nome[i] - 32;              
    //conversao  Minusculo de A até Z asciitable
	}
	
	cout << nome;
	
    return 0;
}
