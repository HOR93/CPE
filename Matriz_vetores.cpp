#include <iostream>
using namespace std;

int main()
{
    int m1[100][100], m2[100][100], multplica[100][100], l1=0, c1=0, l2=0, c2=0, a, b, d;

    cin >> l1 >> c1 >> l2 >> c2;

    while (c1 != l2)
    {
        cout << "ERRO!";
        break;
    }
    
    for(a = 0; a < l1; a++) {                         //PRIMEIRA MATRIZ.
        for(b = 0; b < c1; b++) {
            cin >> m1[a][b];
       }    
   }
        
    for(a = 0; a < l2; a++) {                       // SEGUNDA MATRIZ.
        for(b = 0; b < c2; b++) {
            cin >> m2[a][b];
        }
    }   

    for(a = 0; a < l1; a++) {                        //Mutilplicação
        for(b = 0; b < c2; b++) {
            multplica[a][b] = 0;
        }
    }

    for(a = 0; a < l1; a++)                         // botando os valores de A e B para mutilplicação
        for(b = 0; b < c2; b++) 
            for(d = 0; d < c1; d++)                
            {
                multplica[a][b] = multplica[a][b] + m1[a][d] * m2[d][b];
            }

    for(a = 0; a < l1; a++)                       // Impressão dos valores
    for(b = 0; b < c2; b++) {
        cout << multplica[a][b] << " ";
        if(b == c2-1)
            cout << endl;
    }

    return 0;

}
