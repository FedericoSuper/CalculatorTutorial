#pragma once
#include <string>
#include <iostream>

// file .h è file di intestazione.
using std::string;

class StdMenu{

public:
string titolo;
string voci;
string CORNICE;
string VOCE_USCITA;
string RICHIESTA_INSERIMENTO;
string ERRORE_FORMATO;

void stampaMenu(); //dichiaro una funzione
int scegli();
int leggiIntero();

};