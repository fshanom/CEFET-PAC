#include <iostream>
using namespace std;

int calcula_soma(int numero1,int numero2,int numero3)
{
	int somanum;
	somanum=numero1+numero2+numero3;
	return somanum;
}

void calcula_media(int numero1,int numero2,int numero3)
{
	int somanum;
	float medianum;
	somanum=calcula_soma(numero1,numero2,numero3);
	medianum=(float)somanum/3;
	cout<<"media dos 3 numeros: "<<medianum<<endl;
}

int main ()
{
	int numero1,numero2,numero3,soma;
	cout<<"digite 3 n�meros"<<endl;
	cin>>numero1>>numero2>>numero3;
	soma=calcula_soma(numero1,numero2,numero3);
	cout<<"soma: "<<soma<<endl;
	calcula_media(numero1,numero2,numero3);
	return 0;
}