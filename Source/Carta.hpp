#ifndef CARTA_HPP
#define CARTA_HPP

class Carta
{
private:
    int valor;
    int palo;
public:
    Carta(int valor, int palo);
    ~Carta();

    int puntos();
};


#endif /* CARTA_HPP */