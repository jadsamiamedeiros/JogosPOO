#include <iostream> 
#include <string>
#include <ctime>
using namespace std;

void imprimir_espacos(int total);// void(vazio) vai imprimi espações vazios de acordo com o que for informado 
int main(int argc, char* args[])
{
	bool sair = false;   	//variavel considerada de tipo booleana
	string carro1;
	string carro2;		// Ta declarando as variaveis de acordo com seu tipo
	int rodada1 = 0;	//algumas recebem um tipo de valor
	int rodada2 = 0;
	int total_espacos = 70;
	
	
	cout << "Digite o nome do piloto 1:" << endl; //imprimi a frase na tela
	getline(cin, carro1);			     //pede pra digitar, com espaço de uma linha inteira e salva o que foi digitado na variavel 
	cout << "Digite o nome do piloto 2:" << endl;
	getline(cin, carro2);

	
	while (sair == false) //laço enquanto, que se encontra a variavel booleano que ao ser falso finaliza o laço de repetição
	{
		//JOGADOR 1
		srand((int)time(0)); // vai gerar um numero aleatorio com ajuda do tempo(hora)
		total_espacos = rand() % 3 + 1; //a variavel total_espacos vai receber o resto da soma do numero aleatorio entre 1 e 6
		rodada1 = rodada1 + total_espacos; //o total de espaços gerado vai somar com a quantidade de rodada

		cout << "[INICIO]                                                                 [FIM]" << endl; //vai imprimir na tela e dá uma quebla de linha
		cout << carro1 << endl;			//vai imprimir o nome do jogador 1 na tela e dá uma quebra de linha
		imprimir_espacos(rodada1);		//vai imprimir o carro de acordo com cada rodada
		cout << "   _  " << endl;;		//parte de cima do carro
		imprimir_espacos(rodada1);	
		cout << " -Lo=o> " << endl;		//parte de baixo do carro
		cout << "------------------------                                                   ---" << endl; //vai imprimir na tela e dá uma quebla de linha

		//JOGADOR2
		//mesma coisa referente ao jogador 1
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


		if (rodada1 >= 70 || rodada2 >= 70) // //comando se, que informa se o numero de rodadas foi maior ou iguala 70
		{
			sair = true; // continuação da variavel booleana, que se o numero de rodada for ultrapassada finaliza o jogo
		}

		else system("cls"); //limpa a tela
	}
	if (rodada1 >= 70) //se a rodada for maior ou igual a 70
		cout << carro1 << " VOCE GANHOU :D" << endl; //imprimir a frase que venceu a corrida
	else if (rodada2 >= 70)
		cout << carro2 << " VOCE GANHOU :D" << endl;
	else
		cout << " VOCES EMPATARAM :|" << endl;	// caso os dois cheguem junto ao final da rodada, que é maior ou igual a 70
	
	return 0; //finaliza o codigo/programa
}

void imprimir_espacos(int total) // Função que determina os espaços vazios
{
	for (int qntd_atual = 0; qntd_atual < total; qntd_atual++) //Laço que vai imprimir a quantidade de espaços vazios no jogos
	{ 
		cout << " "; //vai imprimir na tela
	}
}
