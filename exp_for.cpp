#include <iostream>
#include <math.h>
#include <string>
using namespace std;
int main(){
// Exemplo da aula
	
	int i, alunos, ft;
	float p1, p2, nota_final;
	cout << "Menção!";
	cout << "Quantidade de alunos: ";
	cin >> alunos;
	i=1;
	
	while(i <= alunos){
		
		while(1){
			cout << "faltas do aluno " << i << ": ";
			cin >> ft;
			if(ft<0 || ft>100){
				cout << "errado!" << endl;
			}else{
				break;
			}
		}
		
		if (ft > 25){
			cout << " reprovado " << i << " SR" << endl;
		}else{
			cout << "p1 " << i << " vai ser: ";
			cin >> p1;
			cout << "p2 " << i << " vai ser: ";
			cin >> p2;
			 nota_final = .5*p1+.5*p2;
			if( nota_final >= 0 &&  nota_final < 1){
				cout << "O aluno " << i << " teve a nota " <<  nota_final <<"\nSR" << endl;
			}
      else if ( nota_final >= 1 &&  nota_final < 3){
				cout << "O aluno " << i << " teve a nota " <<  nota_final <<"\nII" << endl;
			}
      else if ( nota_final >= 3 &&  nota_final < 5){
				cout << "O aluno " << i << " teve a nota " <<  nota_final <<"\nMI" << endl;
			}
      else if ( nota_final >= 5 &&  nota_final < 7){
				cout << "O aluno " << i << " teve a nota " <<  nota_final <<"\nMM" << endl;
			}
      else if ( nota_final >= 7 &&  nota_final < 9){
				cout << "O aluno " << i << " teve a nota " <<  nota_final <<"\nMS" << endl;
			}
      else{
				cout << "O aluno " << i << " teve a nota " <<  nota_final <<"\nSS" << endl;
			}
		}
		 i++;
	}
