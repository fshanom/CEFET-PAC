#include <iostream>
using namespace std;

/* Escreva um programa que leia 3 notas de um aluno e a média das notas dos exercícios
realizados por ele. Calcular a média de aproveitamento, usando a fórmula:
MA = (N1 + N2*2 + N3*3 + ME)/7. A partir da média, informar o conceito de acordo com a tabela: 
				A - maior ou igual a 9
				B - maior ou igual a 7.5 e menor que 9
				C - maior ou igual a 6 e menor que 7.5
				D - maior ou igual a 4 e menor que 6
				E - menor que 4
*/

void calcula_ma(float n1,float n2,float n3,float me)
{
	// ma = media de aproveitamento
	float ma;
	ma=(n1+n2*2+n3*3+me)/7;
	cout << "media de aproveitamento do aluno:" << ma << endl;
	if(ma>=9)
		cout << "aluno conceito A" << endl;
		else
			if(ma>=7.5 && ma<9)
			cout << "aluno conceito B" << endl;
				else
					if(ma>=6 && ma<7.5)
					cout << "aluno conceito C" << endl;
						else
							if(ma>=4 && ma<6)
							cout << "aluno conceito D" << endl;
								else
									if(ma<4)
									cout << "aluno conceito E" << endl;			
	}

int main ()
{
	float n1,n2,n3,me;
	cout << "insira 3 notas e media das notas dos exercicios:" << endl;
	cin >> n1 >> n2 >> n3 >> me;
	calcula_ma(n1,n2,n3,me);
	return 0;
}
