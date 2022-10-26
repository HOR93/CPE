#include <iostream>
#include <iomanip>

using namespace std;
// exe aula

int main () {
	double pol1[26], pol2[26], soma[26];
	int grau;
	
	cout << "grau dos polinomios: ";
	cin >> grau;
	
	while (grau < 0 || grau > 25) {
		cout << "grau invalido: ";
		cin >> grau;
	}
	
	cout << "coeficientes do polinomio 1: ";
	for (int i = grau; i >=0; i--) {
	    cin >> pol1[i];
	}    
	cout << "coeficientes do polinomio 2: ";
	for (int i = grau; i >=0; i--) {
	    cin >> pol2[i];
	}	 
	// soma	   
	for (int i =0; i <= grau; i++) {
	    soma[i] = pol1[i] + pol2[i];
	}  
	
	cout << "resultado:\n" << setprecision(1) << fixed << soma[grau] << "x^" << grau;  
	
	for (int i = grau - 1; i >= 0; i--) { 
		if (soma[i] != 0)
			if (soma[i] >= 0)
				cout << " + " << soma[i] << "x^" << i;
			else
				cout << " - " << -soma[i] << "x^" << i;
	}
	
	cout << endl;    
	return 0;    
}
