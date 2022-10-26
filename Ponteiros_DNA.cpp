#include <iostream>
using namespace std;


int *cross(int pai[], int mae[], int n, int notacorte){
	
  int *medio = new int[n];
  notacorte = n/2; 

  for (int i = 0; i < notacorte; i++) {
    medio[i] = pai[i]; 
  }
  for (int i = notacorte; i < n; i++) {
    medio[i] = mae[i];
  }

  return medio;
}


int main() {
  int *pai, *mae, n, notacorte, corte, *filho1, *filho2;
  cin >> n;
  notacorte = n/2;
  
  pai = new int[n]; 
  for (int i = 0; i < n; i++) {
    cin >> pai[i];
  }

  mae = new int[n];
  for (int i = 0; i < n; i++) {
    cin >> mae[i];
  }
  
  filho1 = cross(mae, pai, n, notacorte);
  cout << filho1[0];
  for (int i = 1; i<n; i++)
    cout << " " << filho1[i];
    
    cout << endl;
    
  filho2 = cross(pai, mae, n, notacorte);
  cout << filho2[0];
  for (int i = 1; i<n; i++)
    cout << " " << filho2[i];
	
	delete[] pai;
	delete[] mae;
	delete[] filho1;
	delete[] filho2;  
  
   return 0;
}
