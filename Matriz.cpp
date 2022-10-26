#include <iostream>
using namespace std;

int main() {
	
	int i=0, c=0 , m=0, n=0, a, b;
	
	int m1 [100][100], m2 [100][100], m3 [100][100];
	
	cin >> i >> c >> m >> n;
	
	if (c != m){                        // IF para impressão de erro caso as matrizes sejam incompatives
		
	cout << "ERRO!";
	
	} 
	else {
		
	for(a = 0; a < i; a++) {        // Matriz 1
		for(b = 0; b < c; b++) {
			cin >> m1 [a] [b];
		}
	} 
	
	for(a = 0; a < m; a++) {       // Matriz 2
		for(b = 0; b < n; b++) {
			cin >> m2 [a] [b];
		}
	}
		
	for(a = 0; a < i; ++a)       
        for(b = 0; b < n; b++){
            m3 [a] [b]=0;
        }
	

	for(a = 0; a < i; a++){           // FOR para mutilplicação de matrizes, dando valor a Matriz 3
        for(b = 0; b < n; b++){
            for(int l = 0; l < c; l++) {
                m3 [a] [b] = m3 [a] [b] + m1 [a] [l] *m2 [l] [b];
            }
		}
	}

		for (int a = 0; a < i; a++) {         // FOR para imprimir
			for (int b = 0; b < n; b++)
				cout << m3 [a] [b] <<" ";
			cout << endl;
		}
		
	}

	return 0;
}
