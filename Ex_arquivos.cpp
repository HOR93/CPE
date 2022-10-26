#include <iostream>
#include <fstream>
#include <string>
#define MAX_AGENDA 1000

using namespace std;

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


void leiaContatos(Contato lista[], int& n){
	ifstream arquivo;
	
	arquivo.open("agenda.txt");
	if(arquivo.is_open()==false){
		cerr << " ERRO na abertura do arquivo! \n";
		return;
	}
	
	n = 0;
    while ((arquivo >> lista[n].nome) && (n<MAX_AGENDA)) {
    	arquivo >> lista[n].telefone;
    	n++;
	}
	
	arquivo.close();
}



void adicionaContato(Contato lista[], int& n){
   if (n==MAX_AGENDA) {
   	cerr << "erro: limite atingido!\n";
   	return;
   }
   cout << "digite o nome: ";
   cin >> lista[n].nome;
   cout << "digite o telefone: ";
   cin >> lista[n].telefone;
   n++;
   
}

void salvar(Contato lista[], int n) {
	ofstream arquivo;
	
	arquivo.open("agenda.txt", ios::trunc);
	if(arquivo.is_open()==false){
		cerr << " ERRO na abertura do arquivo! \n";
		return;
	}
	for (int i=0; i<n; i++){
		arquivo << lista[i].nome << "\n";
		arquivo << lista[i].telefone << "\n";
	}
	
	arquivo.close();
	
}

int main(){

	int n, tel;
	string buscar;
	char operacao;
	Contato agenda[MAX_AGENDA];
	//Contato *Agenda

    leiaContatos(agenda, n);
    //Agenda = new contato[n]

	cout << "Digite P para pesquisar, A para adicionar ou S para sair: ";
	cin >> operacao; //leitura do nome a ser procurado na agenda
	while(operacao!= 'S'){
		if (operacao == 'P'){
			cout << "digite o nome a pesquisar: ";
			cin >> buscar;
         tel = buscaNumero(agenda, n, buscar);
         if (tel == -1)
            cout << "contato nao encontrado \n";
         else 
		    cout << "telefone: " << tel << endl;
		}
		else if (operacao == 'A'){
			adicionaContato(agenda, n);
		}
		else {
			cout << "operacao invalida! \n";
		}
		cout << "Digite P para pesquisar, A para adicionar ou S para sair: ";
		cin >> operacao; 	   
	}
	
	salvar(agenda, n);
	//delete[agenda];
	return 0;
}
