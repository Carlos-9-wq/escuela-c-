#include <iostream>
#include <stdio.h>
using namespace std;
int main (){
	float res,n1,n2;
	int i=1,op;
	while (i==1)
	{
		cout<<"*******OPERACIONES ARITMATICAS*******"<<endl;
		cout<<"1.Suma"<<endl;
		cout<<"2.Resta"<<endl;
		cout<<"3.Multiplicacion"<<endl;
		cout<<"4.Division"<<endl;
		cout<<"5.Salir"<<endl;
		cout<<"OPCION:"<<endl;
		cin>>op;
		switch (op)
		{
		case 1:
			{
cout<<"Proporcione el Primer numero:"<<endl;
cin>>n1;
cout<<"Proporcione el Segundo numero:"<<endl;
cin>>n2;
res=n1 + n2;
cout<<"El resultado es:"<<res<<endl;
			}
			break;
			case 2:{
cout<<"Proporcione el Primer numero:"<<endl;
cin>>n1;
cout<<"Proporcione el Segundo numero:"<<endl;
cin>>n2;
res=n1 - n2;
cout<<"El resultado es:"<<res<<endl;
break;
			}
			case 3:{
cout<<"Proporcione el Primer numero:"<<endl;
cin>>n1;
cout<<"Proporcione el Segundo numero:"<<endl;
cin>>n2;
res=n1 * n2;
cout<<"El resultado es:"<<res<<endl;
				break;
			}
			case 4:{
cout<<"Proporcione el Primer numero:"<<endl;
cin>>n1;
cout<<"Proporcione el Segundo numero:"<<endl;
cin>>n2;
res=n1 / n2;
cout<<"El resultado es:"<<res<<endl;
				break;
			}
			case 5:{
				i=0;
				break;
			}
		}
		}
	}

