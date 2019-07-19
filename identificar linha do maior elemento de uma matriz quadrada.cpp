#include <iostream>
using namespace std;
#define NUM 3

/*1. Crie um programa capaz de ler os dados de uma matriz quadrada de inteiros.
Ao final da leitura o programa deverá imprimir o número da linha que contém o menor 
dentre todos os números lidos.
*/

void preenche_matriz(int m[NUM][NUM])
{
	int i,k;
	for(i=0;i<NUM;i++)
	{
		for(k=0;k<NUM;k++)
		{
			cout<<"insira numero"<<endl;
			cin>>m[i][k];
		}
	}
}

int main ()
{
	int m[NUM][NUM],i,k,maiornum,linhamaior;
	preenche_matriz(m);
	maiornum=m[0][0];
	for(i=0;i<NUM;i++)
	{
		for (k=0;k<NUM;k++)
		{
			if(m[i][k]>maiornum)
			{
				maiornum=m[i][k];
				linhamaior=i;
			}
		}
	}
	cout<<"linha do maior:"<<linhamaior+1<<endl;
	return 0;
}
