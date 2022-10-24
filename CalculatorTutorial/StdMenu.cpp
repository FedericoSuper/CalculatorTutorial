#include "StdMenu.h"
#include <iostream>
#include <string>

using namespace std;

void StdMenu::stampaMenu ()
{
	string CORNICE = "--------------------------------";
	string titolo = "Benvenuti nella mia calcolatrice!";
	string VOCE_USCITA = "0 \t Esci";
	string voci[] = { "Apri la Calcolatrice" };

	printf("%s\n",CORNICE);
	printf("%s\n",titolo);
	std::cout << CORNICE << "\n";
    for (int i=0; i<sizeof(voci)/sizeof(string); i++)
	 {
      cout<< i+1 + "\t" + voci[i] << endl;
	 }
     cout<<endl<<VOCE_USCITA<<endl;
  }

  int StdMenu::scegli (void)
{
	stampaMenu();
	return leggiIntero();
}

int StdMenu::leggiIntero(){

	string RICHIESTA_INSERIMENTO = "Digita il numero dell'opzione desiderata > ";
	string ERRORE_FORMATO = "Attenzione: in dato inserito non è nel formato corretto";

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
