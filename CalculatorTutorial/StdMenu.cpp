#include "StdMenu.h"
#include <iostream>

using namespace std;


const std::string CORNICE = "--------------------------------";
const std::string VOCE_USCITA = "0 \t Esci";
const std::string RICHIESTA_INSERIMENTO = "Digita il numero dell'opzione desiderata > ";
const std::string ERRORE_FORMATO = "Attenzione: in dato inserito non è nel formato corretto";

std::string titolo ="Benvenuti nella mia calcolatrice!";
std::string voci[]={"Apri la Calcolatrice"};


void StdMenu::stampaMenu ()
{
	printf("%s\n",CORNICE);
	printf("%s\n",titolo);
	std::cout << CORNICE << "\n";
    for (int i=0; i<voci.length(); i++)
	 {
      cout<< i+1 + "\t" + voci[i] << endl;
	 }
     cout<<endl<<VOCE_USCITA<<endl;
  }

  int StdMenu::scegli ()
{
	stampaMenu();
	return leggiIntero();
}

int StdMenu::leggiIntero(){
    string line;
	int valoreLetto = 0;
	do {
		cout << RICHIESTA_INSERIMENTO;
		try
		{
			valoreLetto = std::stoi(line);
			break;
		}
		catch (...)
		{
			cout << ERRORE_FORMATO;
		}
	} while (std::getline(cin, line));
  return valoreLetto;
}
