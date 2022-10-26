#include <iostream>
#include <cmath>

using namespace std;

int leitura(int vetor[]){
	int a, b = 0;
	
	cin >> a;
	 
	while (a>=0) {
	vetor[b] = a; 
	b++; 
	cin >> a; 
   }
	return b; 
}

void ordena(int vetor[], int valor) {
	    int j, i;
       for( i = 1; i < valor; i++) {
           int guardar = vetor[i];
        for(j = i-1; (j >= 0) && (guardar > vetor[j]); j--) {
            vetor[j + 1] = vetor[j];
        }
        vetor[j + 1] = guardar;
      } 
}

int main(){
	int lista[100], n;
	
    n = leitura(lista);
    ordena(lista, n);
    int k = n;
    cin >> k;
    cout << lista[k-1] << endl;
    
	
	return 0;
}
