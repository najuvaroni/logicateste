#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	int nHerois = 10, repita;
	bool mentiroso = false;
	float p, h;
	
	
	for (int i = 0; i < nHerois; i++){
		cout << "Digite a pontua��o de habilidades de combate do her�i:" << i +1;
	    cin >> p;
		cout << "Digite a pontua��o de poderes especiais do her�i:" << i +1;
		cin >> h;
		
		cout << "Voc� quer adicionar um novo heroi?" <<endl;
		cout << "1-sim"<< endl;
		cout << "2-n�o";
		cin >> repita;
		
		if(repita == 2){
			break;
		}	
			}
			
	
	}
	
	
		
	

