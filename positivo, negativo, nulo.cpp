#include <iostream>
using namespace std;
main(){
	int num;
	cout<<"Proporcione un numero: ";
	cin>>num;
	if (num > 0)
	cout<<"El numero: "<<num<<" Es positivo.";
	else if (num < 0)
	cout<<"El numero: "<<num<<" Es negativo.";
else
	cout<<"El numero: "<<num<<" Es nulo.";

}
