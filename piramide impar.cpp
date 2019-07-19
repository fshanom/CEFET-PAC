#include <iostream>
using namespace std;

/* Faça o programa que apresenta a seguinte saída, perguntando ao usuário o número máximo (no exemplo, 9).
Este número deve ser sempre ímpar.

 1 2 3 4 5 6 7 8 9
   2 3 4 5 6 7 8
     3 4 5 6 7
       4 5 6
         5   
*/

void exibe_piramide(int nmax)
{
	int i,j;
	for(i = 0;i <= (nmax/2)+1; i++)
    {
        for (j = i+1; j <= nmax-i; j++)
			cout << " " << j;
	    cout << endl;
	    for (j = 0;j < (i + 1)*2; j++)
    		cout << " ";
    }
}

int main ()
{
	int nmax,i,j;
	cout << "numero maximo: " << endl;
	cin >> nmax;
		if(nmax%2 == 0)
		{
			cout << "insira numero impar: " << endl;
			cin >> nmax;
			exibe_piramide(nmax);
		}
		
		else
			exibe_piramide(nmax);
	
	return 0;
}
