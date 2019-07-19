#include <iostream>
using namespace std;

/*2. Faça um programa que leia três números inteiros que serão fornecidos pelo usuário, calcule e exiba a
soma e a média dos números. Este programa deverá utilizar as seguintes funções:
a) calcula_soma: recebe como parâmetros os 3 números inteiros, calcula, exibe e retorna a soma.
b) calcula_media: recebe como parâmetro a soma dos números, calcula e exibe a média.
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
