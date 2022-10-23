#include "StdMenu.h"
#include <iostream>

using namespace std;


const std::string CORNICE = "--------------------------------";
const std::string VOCE_USCITA = "0 \t Esci";
const std::string RICHIESTA_INSERIMENTO = "Digita il numero dell'opzione desiderata > ";
std::string titolo ="Benvenuti nella mia calcolatrice!";
std::string voci[]={"Apri la Calcolatrice"};


void StdMenu::stampaMenu ()
{
	printf("%s\n",CORNICE);
	printf("%s\n",titolo);
	std::cout << CORNICE << "\n";
    for (int i=0; i<voci.length(); i++)
	 {
	  //printf( (i+1) + "\t" + voci[i] + "\n");
      cout<< i+1 + "\t" + voci[i] << endl;
	 }
     cout<<endl<<VOCE_USCITA<<endl;
    //System.out.println();
	//System.out.println(VOCE_USCITA);
    //System.out.println();
  }

  int StdMenu::scegli ()
{
	stampaMenu();
    cout<< RICHIESTA_INSERIMENTO;
	return ;	 
}

  int StdMenu::leggiIntero(string RICHIESTA_INSERIMENTO)
  {
	  return 0;
  }

int StdMenu::leggiIntero(string RICHIESTA_INSERIMENTO){
    string line;
    int d = 0;

    while (std::getline(cin, line))
        try {
            d = std::stod(line);

            if (std::fmod(d, 1) != 0)
             throw 0;

            break;
        } catch (...) {
             cout << "Enter an integer, try again: ";
    }

    return d;
}
/*
 int leggiIntero (String messaggio)
	  {
	   boolean finito = false;
	   int valoreLetto = 0;
	   do
	    {
	     System.out.print(messaggio);
	     try
	      {
	       valoreLetto = lettore.nextInt();
	       finito = true;
	      }
	     catch (InputMismatchException e)
	      {
	       System.out.println(ERRORE_FORMATO);
	       String daButtare = lettore.next();
	      }
	    } while (!finito);
	   return valoreLetto;
	  }
*/