// CalculatorTutorial.cpp : Questo file contiene la funzione 'main', in cui inizia e termina l'esecuzione del programma.
//

#include <iostream>
#include "Calculator.h"

using namespace std; // Senza questa riga, ogni parola chiave proveniente dalla libreria dovr� essere preceduta da std::

int main()
{
    double x = 0.0; //primo membro
    double y = 0.0;
    double result = 0.0;
    char oper = '+';

    cout << "Calculator Console Application\n\n"; // << indica al compilatore di inviare tutto ci� che si trova alla sua destra all'output standard
    cout << "Please enter the operation to perform. Format: a+b | a-b | a*b | a/b" << endl; // endl e \n hanno la stessa funzione

    Calculator c;
    while (true)
    {
        cin >> x >> oper >> y; // La parola chiave cin viene usata per accettare l'input da parte dell'utente. � in grado di elaborare una riga di testo immessa nella finestra della console 
                               //di inserirla all'interno di ogni variabile specificata, in ordine, presupponendo che l'input dell'utente corrisponda alla specifica richiesta
        if (oper == '/' && y == 0)
        {
            cout << "Division by 0 exception" << endl;
            continue;
        }
        else 
        {
            result = c.Calculate(x, oper, y); //calcolo.
        }
       
        cout << "Result is: " << result << endl;
    }

    return 0;
}

// Per eseguire il programma: CTRL+F5 oppure Debug > Avvia senza eseguire debug
// Per eseguire il debug del programma: F5 oppure Debug > Avvia debug

// Suggerimenti per iniziare: 
//   1. Usare la finestra Esplora soluzioni per aggiungere/gestire i file
//   2. Usare la finestra Team Explorer per connettersi al controllo del codice sorgente
//   3. Usare la finestra di output per visualizzare l'output di compilazione e altri messaggi
//   4. Usare la finestra Elenco errori per visualizzare gli errori
//   5. Passare a Progetto > Aggiungi nuovo elemento per creare nuovi file di codice oppure a Progetto > Aggiungi elemento esistente per aggiungere file di codice esistenti al progetto
//   6. Per aprire di nuovo questo progetto in futuro, passare a File > Apri > Progetto e selezionare il file con estensione sln
