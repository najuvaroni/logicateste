#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	string nome;
	int andar;
	
	cout << "Informe seu nome";
	cin>> nome;
	
	cout <<"Qual andar deseja acessar?";
	cin>> andar;
	
	if(andar == 2 || andar == 4 || andar == 6 || andar == 8 || andar == 10){
		if(nome == "Marcelo"){
			cout << "Voc� n�o tem acesso ao andar " << andar << endl;
		}
		
		else if(nome == "Maria"){
			cout << "Voc� n�o tem acesso ao andar " << andar << endl;
		}
		
		else if(nome == "Carlos"){
			cout << "Voc� n�o tem acesso ao andar " << andar << endl; 
		}
		
		else if(nome == "Igor"){
			cout << "Voc� tem acesso ao andar " << andar << endl;
		}
		
		else if(nome == "Ana"){
			cout << "Voc� tem acesso ao andar " << andar << endl;
		}
		else if(nome == "Pedro"){
			cout << "Voc� tem acesso ao andar " << andar << endl;
		}
	}
	else{
		cout << "Voc� " << nome << "Tem acesso ao andar " << andar << endl; 
	}
}
