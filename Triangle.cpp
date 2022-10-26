#include<iostream>
using namespace std;

int main()
{
	double lado1, lado2, lado3;  // Lados do triangulo para analise
	
	cin >> lado1 >> lado2 >> lado3;
	
	if(lado1 == lado2 && lado2 == lado3) // if para se todos os lados do triângulo possuem a mesma medida
  	{
  		cout << "equilatero";
  	}
  	else if(lado1 == lado2 || lado2 == lado3 || lado1 == lado3) // else if se o triangulo possui pelo menos dois lados congruentes
    {
  		cout << "isosceles";
	}
	else if (lado1 >= lado2+lado3 || lado2 >= lado1+lado3 || lado3 >= lado1+lado2) { // else if para saber se os triangulo são invalidos
	    cout << "invalido";
	}
  	else
    	cout << "escaleno"; // else para se todos os seus lados do triangulo são diferentes
		
 	return 0;
}
