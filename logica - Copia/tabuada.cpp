#include <iostream>

using namespace std;

main(){
	setlocale (LC_ALL, "Portuguese");
	
	int  num, nmaximo, ;
	
	cout << "Informe o n�mero desejado:";
	cin >> num;
	cout << "Informe o n�mero m�ximo:";
	cin >> nmaximo;
		
	 for( int i=1; i<=nmaximo ; i++)
            cout<<num<<" * "<<i<<" = " << num*i<<endl;
        cout<<endl;

}
	
