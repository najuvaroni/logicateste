#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	int nHerois = 10, repita;
	bool mentiroso = false;
	float p, h;
	
	
	for (int i = 0; i < nHerois; i++){
		cout << "Digite a pontuação de habilidades de combate do herói:" << i +1;
	    cin >> p;
		cout << "Digite a pontuação de poderes especiais do herói:" << i +1;
		cin >> h;
		
		cout << "Você quer adicionar um novo heroi?" <<endl;
		cout << "1-sim"<< endl;
		cout << "2-não";
		cin >> repita;
		
		if(repita == 2){
			break;
		}	
			}
			
	
	}
	
	
		
	

