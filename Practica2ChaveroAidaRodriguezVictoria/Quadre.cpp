#include "Quadre.h"

Quadre::Quadre(Codi codi, int tipus, int alçada, int amplada, int fondaria)
{
    //ctor
    if(tipus!=OLI || tipus!=AQUARELA || tipus!=ACRILICA){ throw "Error en les dades";}else{ this.tipus=tipus;}
}

int Quadre::getTipus()
{
    return this.tipus;
}

void Quadre::visualitza()
{
    cout this->visualitza<< " que és de tipus " << this->tipus;
}

Quadre::~Quadre()
{
    //dtor
}
