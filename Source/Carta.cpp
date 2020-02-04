#include "Carta.hpp"

Carta::Carta(int valor, int palo){
    this->valor = valor;
    this->palo = palo;
}

Carta::~Carta(){
}

int Carta::puntos(){
    return this->valor;
}