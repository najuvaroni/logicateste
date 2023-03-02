#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	
	 int adc, exb, excl, sair;
	 bool mentiroso = false, ganhou = false;
	 int op;
	 
	 do{
		 cout << "1- Adicionar item\n";
		 cout << "2- exibir item\n";
		 cout << "3- excluir item\n";
		 cout << "4- sair\n";
		 cout << "R: ";
		 cin >> op;
		 
			switch (op){	 
			    case 1: cout << "Adicionar item";
				break;
				case 2: cout << "exibir item";
				break;
				case 3: cout << "excluir item";
				break;
				case 4: cout << "sair";
				break;
				
				default : cout << "item inexistente"; 
			}
	 
	}while(op != 4);
}
	
