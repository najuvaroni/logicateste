#include <iostream>

using namespace std;
 
 float soma( float a, float b){
 	return a + b;
}
 float sub( float a, float b){
 	return a - b;
 }
 float mult(float a, float b){
 	return a * b;
 }
 float div( float a, float b){
 	return a / b;
 }
 
 main(){
 	setlocale(LC_ALL, "Portuguese");
 	int numero, numero2, op;
 	
		
 	do{
 		cout << "Informe a fun��o" << endl;
	 	cout << "1-Soma-adi��o" << endl;
	 	cout << " 2-sub-subtra��o"<< endl;
	 	cout << "3-mult-multiplica��o"<< endl;
	 	cout << "4-div-divis�o"<< endl;
	 	cout << "5-Sair" << endl;
	 	cin >> op;
	 	
	 	cout << "Informe o primeiro valor:"<<endl;
	 	cin >> numero;
	 	
	 	cout <<"Segundo valor"<<endl;
	 	cin >> numero2;
	 	
	 	switch(op){
			case 1: cout << soma (numero, numero2)<< endl;
			break;
			case 2: cout << sub (numero,numero2) << endl;
			break;
			case 3: cout << mult (numero,numero2)<< endl;
			break;
			case 4: cout << div (numero, numero2)<< endl;
			break;
			case 5: cout << "Sair"<< endl;
			break;
			default : cout << "valor inexistente"; 
		}
	}while(op != 5);
 	
 }
 
