#include <iostream>
#include <string>
#define MAX_AGENDA 50

using namespace std;

// exemplo da aula

struct Contato{
	string nome;
	int telefone;
	};


int buscaNumero(Contato lista[], int n, string nome){
    for(int i= 0; i<n; i++) {
    	if(lista[i].nome == nome)
    	  return lista[i].telefone;  
	}
	return -1;
}

void leiaContatos(Contato lista[], int n){
    for (int i = 0; i<n; i++) {
    	cout << "nome do contato " << i+1 << ": ";
    	cin >> lista[i].nome;
    	cout << "telefone do contato " << i+1 << ": ";
    	cin >> lista[i].telefone;
	}
}

int main(){

	int n, tel;
	string buscar;
	Contato agenda[MAX_AGENDA];
	//Contato *Agenda

	cout << "Quantos contatos vai gravar ? ";
	cin >> n; 

	cout << "Digite os contatos:\n";
    leiaContatos(agenda, n);
    //Agenda = new contato[n]

	cout << "Digite o nome a pesquisar ou S para sair: ";
	cin >> buscar; 
	while(buscar!="s"){
         tel = buscaNumero(agenda, n, buscar);
         if (tel == -1)
            cout << "contato nao encontrado \n";
         else 
		    cout << "telefone: " << tel << endl;
		    cout << "Digite o nome a pesquisar ou S para sair: ";
		cin >> buscar; 	   
	}
	
	return 0;
}
