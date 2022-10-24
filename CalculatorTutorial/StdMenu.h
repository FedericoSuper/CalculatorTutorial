#pragma once
#include <string>
#include <iostream>

// file .h è file di intestazione.
using std::string;

class StdMenu{

private:
std::string titolo;
std::string voci;

public:
static const string CORNICE;
static const string VOCE_USCITA;
static const string RICHIESTA_INSERIMENTO;
static const string ERRORE_FORMATO;

void stampaMenu(); //dichiaro una funzione
int scegli();
int leggiIntero();

};