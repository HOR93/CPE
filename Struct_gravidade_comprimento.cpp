#include <iostream>
#include <cmath>
#include <iomanip>
#define MAXPOINTS 1024

using namespace std;

struct Ponto { /*struct que especifica um ponto */
        double x;
        double y;
};

struct Curva { /* pontos consecutivos sao interligados por segmentos de reta. */
        Ponto pt[MAXPOINTS];
        int npts;
};

/*procedimento que recebe por referencia uma struct do tipo Curva e le
da entrada padrao os pontos que a compoem*/
void readCurve(Curva& c);

/*funcao que recebe uma struct do tipo Curva, calcula e retorna uma struct Ponto
que representa o centro de gravidade da curva*/
Ponto gravity(Curva c);

/*funcao que recebe uma struct do tipo Curva e retorna um valor double
que representa o seu comprimento*/
double length(Curva c);


int main(){
    Curva c;
    Ponto gvd;
    
    
    cin >>  c.npts;
    readCurve(c);
    gvd = gravity(c);
    cout << "Centro da Gravidade: " << "(" << setprecision(2) << fixed << gvd.x <<", "<< gvd.y << ")" << endl;
	cout << "comprimento: " << setprecision(2) << fixed << length(c) << endl;
    

}

void readCurve(Curva& c) {
    for (int i = 0; i<c.npts; i++) {
    	cin >> c.pt[i].x;
    	cin >> c.pt[i].y;
	}
	
}

Ponto gravity(Curva c) {
	    Ponto grav;
	  for (int i = 0; i<=c.npts-1; i++){
	  	grav.x = grav.x + c.pt[i].x /c.npts;
	  	grav.y = grav.y + c.pt[i].y/c.npts;
	  }
	  
    return grav;
}

double length(Curva c) {
	    double lenght =0, lenghtX=0, lenghtY=0;
	    for (int i= 0; i<=c.npts-2; i++) {
	    	lenghtX = pow (c.pt[i+1].x - c.pt[i].x, 2);
	    	lenghtY = pow (c.pt[i+1].y - c.pt[i].y, 2);
	    	lenght = lenght + sqrt (lenghtX + lenghtY);
		}
		
		return lenght;	    
}
