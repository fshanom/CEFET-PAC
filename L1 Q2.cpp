#include <iostream>
using namespace std;

/*2. Fa�a um programa que leia tr�s n�meros inteiros que ser�o fornecidos pelo usu�rio, calcule e exiba a
soma e a m�dia dos n�meros. Este programa dever� utilizar as seguintes fun��es:
a) calcula_soma: recebe como par�metros os 3 n�meros inteiros, calcula, exibe e retorna a soma.
b) calcula_media: recebe como par�metro a soma dos n�meros, calcula e exibe a m�dia.
*/

int calcula_soma(int numero1,int numero2,int numero3)
{
	int somanum;
	somanum=numero1+numero2+numero3;
	cout<<"soma:"<<somanum<<endl;
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
	cout<<"digite 3 numeros"<<endl;
	cin>>numero1>>numero2>>numero3;
	soma=calcula_soma(numero1,numero2,numero3);
	calcula_media(numero1,numero2,numero3);
	return 0;
}
