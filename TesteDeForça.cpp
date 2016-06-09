#include <iostream>
#include <string>
#include <ctime>
using namespace std;

int main(int argc, char* args[])
{
	bool sair = false;		
	string jog1;	
	string jog2;			// Ta declarando as variaveis de acordo com seu tipo
	int vida1 = 20;			//algumas recebem um tipo de valor
	int vida2 = 20;
	int dado6;
	int dano;
	int Ataque1 = 4, Ataque2 = 4;
	int Defesa1 = 2, Defesa2 = 2;

	cout << "Digite o nome do jogador 1: " << endl; //imprimi a frase na tela
	cin >> jog1;					// pede pra digitar e salva o que foi digitado na variavel 
	cout << "Digite o nome do jogador 2: " << endl; 
	cin >> jog2;

	while (sair == false) //laço enquanto, que se encontra a variavel booleano que ao ser falso finaliza o laço de repetição 
	{
		cout << " o                  o" << endl; // desenhos que vão ser imprimidos na tela e ao mesmo tempo dá uma quebra de linha
		cout << ".T./              \\.T." << endl;
		cout << " ^                  ^" << endl;
		cout << jog1 << "             " << jog2 << endl; //vai imprimir os nomes dos personagem na tela
		cout << "Ataque: " << Ataque1 << "          " << "Ataque: " << Ataque2 << endl; //imprimi a palavra ataque junto com o valor aderido/recibo na variavel
		cout << "Defesa: " << Defesa1 << "          " << "Defesa: " << Defesa2 << endl; //imprimi a palavra defesa junto com o valor aderido/recibo na variavel
		cout << "Vida:" << vida1 << "            " << "Vida:" << vida2 << endl; //imprimi a palavra vida junto com o valor aderido/recibo na variavel
		
		system("pause"); //vai pausar o codigo acima e espera apertar enter 

		//Adiciona uma "semente" ao gerador de números
		srand((int)time(0)); // vai gerar um numero aleatorio com ajuda do tempo(hora)
	
		// Dano ao Jogador 2 
		dado6 = rand() % 6 + 1; //a variavel dano vai receber o resto da soma do numero aleatorio entre 1 e 6

		if (dado6 > 4) //comando se, que vai indicar se o dado gerado cair acima de 4 vai executar o codigo abaixo
		  {
			dano = Ataque1 - Defesa2; //vai determinar o valor do dano ao jogador adversario 
			vida2 = vida2 - dano; // o dano causado vai retirar determinado valor da vida do adversario
			cout << jog1 << " Acertou    |" << " \t " ; //  imprimi na tela se o jogador acertou 
			cin.get(); // proxima linha
		   }
		else if (dado6 <= 4) // caso o dado gerado seja abaixo ou igual a 4 o jogador nao tem direito ao ataque
		     {
			cout << jog1 << " Errou    |" << " \t"; //imprimi na tela
			cin.get(); // proxima linha
		     }

		// Dano ao Jogador 1 
		//Mesma explicação feita ao jogador acima
		dado6 = rand() % 6 + 1;
		
		if (dado6 > 4)
			{
			dano = Ataque2 - Defesa1;
			vida1 = vida1 - dano;
			cout << jog2 << " Acertou     |";
			cin.get();
			}
		else if (dado6 <= 4)
			{	
			cout << jog2 << " Errou     |";
			cin.get();
			}
		
		system("cls"); //vai limpar a tela

		//Verificação para ver quem perdeu
		if (vida1 <= 0 || vida2 <= 0) //comando se, que informa que se a vida um dos jogadores menor ou igual a 0
		{
			sair = true; //continuação da variavel booleano, que se a vida do jogador for menor ou igual a 0, fecha o programa
		}
	}
	//Classificação de acordo com a pontuação 
		if (vida1 > 0) // se a vida do jogador 1 no finaol do jogo for maio que 0
			cout << jog1 << " Venceu!" << endl; // imprimi que ele venceu a rodada
		else if (vida2 > 0)
			cout << jog2 << " Venceu!" << endl; 
		else
			cout << " Os dois perderam" << endl; // caso nenhum vença e cheguema vida igual ou menor a 0, os dois perdem
		cout <<  "---- * ACABOU O JOGO, BYE BYE * ----"; // imprime que o jogo acabou
	return 0; // finaliza o codigo/programa
}
