#pragma once
#include <string>
#include <iostream>

// file .h è file di intestazione.
using std::string;

class StdMenu{

private:
static const std::string CORNICE;
static const std::string VOCE_USCITA;
static const std::string RICHIESTA_INSERIMENTO;
std::string titolo;
std::string voci;

public:
void stampaMenu(); //dichiaro una funzione
int scegli();
int leggiIntero(string RICHIESTA_INSERIMENTO);

};