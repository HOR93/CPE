#include <iostream>
#include <fstream>
#include <string>

//EAA 9

using namespace std;

// função para analise
void analise (int& chr, int& tokens, int& frases, fstream& analisador){ // passando as variaveis e fstream com referencias
   char s;
   chr = 0, tokens = 0, frases = 0;

   while (analisador.get(s)) {                                   
    if (s == '.' || s=='!' || s=='?' )
  	    frases++;                                                
  	else
	chr++;                                                      
	if (s == ' ' || s == '.' || s == ',' || s=='!' || s=='?' )
	tokens++;                                                   
   }

}

int main(int argc, char** argv){
	int c, t, f;
	ofstream analise_texto;

   if (argc < 2) { 
    cout << "Uso: " << argv[0] << " <analisador> depois <nomedoarquivo.txt>\n";
    return 1;
  }

   fstream analisador(argv[1]);

   if (!analisador.is_open()) { 
  cerr << "ERRO ao tentar abrir: " << argv[1]; 
    return 2; 
  }

   analise(c, t, f, analisador);   
   
   
   cout << "#Caracteres = " << c; // -56           
   cout << "\n#Tokens = " << t;
   cout << "\n#Frases = " << f;
   
   analise_texto.open("analise_nome_do_arquivo.txt", ios::trunc); 

    analise_texto << "#Caracteres = " << c; // -56     
	analise_texto << "\n#Tokens = " << t; 
	analise_texto << "\n#Frases = " << f; 
    
	analise_texto.close();                       
	
	return 0;
}
