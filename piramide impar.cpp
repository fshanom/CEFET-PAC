#include <iostream>
using namespace std;

/* Fa�a o programa que apresenta a seguinte sa�da, perguntando ao usu�rio o n�mero m�ximo (no exemplo, 9).
Este n�mero deve ser sempre �mpar.

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
