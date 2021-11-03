#include "Codi.h"
#include <string>

Codi::Codi(int numerica, string alfanumerica)
{
    //ctor
    if(numerica < 100 || numerica > 999 || alfanumerica.empty()){
        throw "Dades incorrectes";
    } else {
        this->numerica = numerica;
        this->alfanumerica = alfanumerica;
    }
}

Codi::~Codi()
{
    //dtor
}

bool Codi::operator==(Codi codi){
    if(this->numerica==codi->numerica){
        return this->alfanumerica==codi->alfanumerica;
    }
    return this->numerica==codi->numerica;
}

void visualitza(){
    std::string s = std:to_string(numerica);
    s = s + "-" + alfanumerica
    cout << s;
}
