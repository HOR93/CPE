#include <iostream>

using namespace std;

double* concatena (double p1[], int n1, double p2[], int n2) {
	double *p3;
	// alocação dinamica com outro vetor
	p3 = new double [n1+n2];
	// copiar os valores de p1 até começo de p3
	for (int i=0; i<n1; i++)
	p3[i] = p1[i];
	//copiar os valores de p2 que pariu na epata 2 em p3
	for (int i = n1; i<n1+n2; i++)
	p3[i] = p2[i-n1];
	//retorno p3
	return p3;
}

int main () {
	int t1, t2;
	double *v1, *v2, *v3;
	
	cout << "dimensao da lista 1: ";
	cin >> t1;
	v1 = new double [t1];
	cout << "digite os valores separados por espaco: ";
	for (int i = 0; i<t1; i++)
	     cin >> v1[i];
	     
	cout << "dimensao da lista 2: ";
	cin >> t2;
	v2 = new double [t2];
	cout << "digite os valores separados por espaco: ";
	for (int i = 0; i<t2; i++)
	     cin >> v2[i]; 
		 
	v3 = concatena(v1, t1, v2, t2);
	
	cout << "concatenacão:\n";
	for (int i=0; i<t1+t2; i++)
	    cout << v3[i] << " ";
	cout << endl;
	
	delete[] v1;
	delete[] v2;
	delete[] v3;
			     
	return 0;	
}
