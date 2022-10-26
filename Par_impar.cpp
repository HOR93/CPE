#include <iostream>

using namespace std;


int main () {
	
int num,soma1=0,soma2=0,par=0,impar=0;


for(int i = 1; i++;) {
	
    cin>>num;
    if (num == 0) {
    break;
    
	}
    else if (num % 2 == 0 ){
        soma1=soma1+num;
        par++;
    }
    else if (num % 2 != 0)
    {

        soma2=soma2+num;
        impar++;
    }
}
    
    cout<< impar << " impares, " << "total = " << soma2 << endl;
    
    cout<< par << " pares, " << "total = " << soma1 << endl;




    return 0;
    
}
