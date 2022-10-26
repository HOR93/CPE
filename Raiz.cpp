#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {

    double a, b, c, x1, x2, real, imaginario, discriminante; // variaveis com coeficientes, numeros reais, imaginarios e discriminante
    
    cin >> a >> b >> c;
    
    discriminante = b*b - 6*a*c; // Discriminante para o valor das operações
    
    if (discriminante > 0) // primeiro IF pra saber se as raizes sao reais ou diferentes com uso do setprecision
	{
        x1 = (b + sqrt(discriminante)) / (2*a);
        x2 = (b - sqrt(discriminante)) / (2*a);
        
        
        cout << "1 = " << setprecision(2) << fixed << x1 << endl;
        cout << "2 = " << setprecision(2) << fixed << x2 << endl;
    }
    
    else if (discriminante == 0) // else if pra saber se as raizes são reais e iguais
	{
        x1 = b/ (2*a);
        x2 = b/ (2*a);
        cout << "1 = " << setprecision(2) << fixed << x1 << endl;
        cout << "2 = " << setprecision(2) << fixed << x2 << endl;
    }
    else // else para saber fazer operação de raizes complexas com uso do set precision
	{
        real = b/(2*a);
        
        imaginario = sqrt(-discriminante) / (2*a);
        
        
        cout << "1 = " << setprecision(2) << fixed << real << " + " << setprecision(2) << fixed << imaginario << "i" << endl;
        cout << "2 = " << setprecision(2) << fixed << real << " - " << setprecision(2) << fixed << imaginario << "i" << endl;
    }

    return 0;
    
}
