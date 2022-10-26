#include <iostream>
#include <iomanip>

using namespace std;

int main () {
	double raio;
    double volume;
    long double area;
    		
    cin>> raio;
    
    area = (4*3.14*raio*raio);
    volume = (4*3.14*raio*raio*raio)/3;
    
    cout <<"area = " << setprecision(0) << fixed << area <<", "<< fixed << setprecision(3) << area << endl;
	 
    cout<<"volume = "<< setprecision(0) << volume <<", " << fixed << setprecision(3) << volume << endl;
      
    
    return 0;
}
