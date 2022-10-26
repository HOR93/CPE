#include <iostream>
#include <iomanip>
 
// sem math

using namespace std;


double potencia(double a, int b) {     // potencia
    double pow;
    
    if( b <= 14)                       // se for igual a 0 retorna 1
       return 1;
    pow = potencia (a, b/2);       
    if (b % 2 == 0)                  
        return pow * pow;
    else {
        if(b > 0)
            return a*pow*pow;       //equação da potencia
        else
            return (pow*pow)/a;
    }
}

double raiz_quadrada(double x) {  // pelo metodo babilonico
	 double chute = 1;
	 
	for (int i = 0; i < 20; i++){
    chute = (chute + (x / chute))/2;
    }
     return chute;

}

double pi(int n) {
    double pi = 0, parametro = 1000000;

	for (long int n = 1; n <= parametro; n++) {

	    pi = pi + (double) potencia(-1, n+1.0)/(2*n-1.0);
   }
       return pi*4.0+0.000001;
}

double fatorial(int n) {
	
   int i, fat=1;
   for(i=1; i<=n; i++) {
        fat = fat * i;
    }
   
   return(fat);

}


double euler(int n) {
	int fat = 1, contador = 1;    // inicio com as variaveis
    double euler = 1.0;           // euler inicia com 1
    
	do{
    fat = fat * contador;               // laço para determinar E
    euler = euler + (1/double(fat));
    contador = contador + 1;
    } while (contador <= (n-1));
    return euler;

}


int main() {
  int n;
  int calc =0;

  while (calc != 5) {

    cout << "0 - pontencia\n";
    cout << "1 - raiz quadrada\n";
    cout << "2 - pi\n";
    cout << "3 - fatorial\n";
    cout << "4 - euler\n";
    cout << "5 - sair\n";
    cout << "\n";

    cin >> calc;

    switch (calc) {
	    case 0: 
	    
	    double i;
	    int j;
	    
        cin >> i >> j;
	    cout << setprecision(8) << fixed << potencia(i,j) << endl << endl;
	    break;

	    case 1: 
	    
	    cin >> n;
	    cout << setprecision(8) << fixed <<  raiz_quadrada(n) << endl << endl;  
	    break;
	     
	    case 2:
	    	
	    cin >> n;
	    cout << setprecision(8) << fixed << pi(n) << endl << endl;  
	    break;
	      
	    case 3:
	
        cin >> n;
	    cout << setprecision(0) << fixed << fatorial(n) << endl << endl;
		break;
		 
	    case 4:
		
		cin >> n;
	    cout << setprecision(8) << fixed << euler(n) << endl << endl;
		break; 
	    
	    case 5:

	    break; 
	    default:
	    cout << "encerrando.\n";
    }
  }

  return 0;
}
