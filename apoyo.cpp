#include <iostream>
#include <stdio.h>
using namespace std;
int main(){
 int nt, nh, op, dc;
cout<<"Cuantos trabajadores son?"<<endl;
cin>>nt; 

for (int i=1; i<=nt; i++)
 {
 	cout<<"Cuantos hijos tiene?"<<endl;
 	cout<<"1- Solo 1."<<endl;
 	cout<<"2- De 2-3."<<endl;
 	cout<<"3- Mas de 3."<<endl;
 	cout<<"4- Ninguno."<<endl;
 	cin>>op;
 	switch (op)
 	{
 		case 1:
 		{
		cout<<"Estudia Profesional?"<<endl;
		cout<<"1- Si      2- No"<<endl;	
		cin>>dc;
		if (dc==1)
		cout<<"Le toca una beca de $1500 pesos en total."<<endl;
		else
		cout<<"Le toca una apoyo de $500 pesos."<<endl; 
		}
		break;
 		case 2:{
 		cout<<"Estudian Profesional?"<<endl;
		cout<<"1- Si      2- No"<<endl;	
		cin>>dc;
		if (dc==1)
		cout<<"Le toca una beca de $2200 pesos en total."<<endl;
		else
		cout<<"Le toca una apoyo de $1200 pesos."<<endl;
 		}
 		break;
 		case 3:
 		{
 		cout<<"Estudian Profesional?"<<endl;
		cout<<"1- Si      2- No"<<endl;	
		cin>>dc;
		if (dc==1)
		cout<<"Le toca una beca de $3000 pesos en total."<<endl;
		else
		cout<<"Le toca una apoyo de $2000 pesos."<<endl;
 		}
 		break;
 		case 4:	
		cout<<"Usted no recibira ningun apoyo extra."<<endl;
 	}
 	
 }
	
}
