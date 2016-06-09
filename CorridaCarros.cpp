#include <iostream> 
#include <string>
#include <ctime>
using namespace std;

void imprimir_espacos(int total);
int main(int argc, char* args[])
{
	bool sair = false;
	string carro1;
	string carro2;
	int rodada1 = 0;
	int rodada2 = 0;
	int total_espacos = 70;
	
	
	cout << "Digite o nome do piloto 1:" << endl;
	getline(cin, carro1);
	cout << "Digite o nome do piloto 2:" << endl;
	getline(cin, carro2);

	
	while (sair == false)
	{

		srand((int)time(0));
		total_espacos = rand() % 3 + 1;
		rodada1 = rodada1 + total_espacos;

		cout << "[INICIO]                                                                 [FIM]" << endl;
		cout << carro1 << endl;
		imprimir_espacos(rodada1);
		cout << "   _  " << endl;;
		imprimir_espacos(rodada1);
		cout << " -Lo=o> " << endl;
		cout << "------------------------                                                   ---" << endl;

		srand((int)time(0));
		total_espacos = rand() % 3 + 1;
		rodada2 = rodada2 + total_espacos;

		cout << "[INICIO]                                                                 [FIM]" << endl;
		cout << carro2 << endl;
		imprimir_espacos(rodada2);
		cout << "   _  " << endl;
		imprimir_espacos(rodada2);
		cout << " -Lo=o> " << endl;
		cout << "------------------------                                                   ---" << endl;


		if (rodada1 >= 70 || rodada2 >= 70)
		{
			sair = true;
		}

		else system("cls");
	}
	if (rodada1 >= 70)
		cout << carro1 << " VOCE GANHOU :D" << endl;
	else if (rodada2 >= 70)
		cout << carro2 << " VOCE GANHOU :D" << endl;
	else
		cout << " VOCES EMPATARAM :|" << endl;	
	
	return 0;
}

void imprimir_espacos(int total)
{
	for (int qntd_atual = 0; qntd_atual < total; qntd_atual++)
	{ 
		cout << " ";
	}
}