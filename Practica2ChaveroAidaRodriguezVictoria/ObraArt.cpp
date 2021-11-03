#include "ObraArt.h"

ObraArt::ObraArt(Codi *codi, int tipus, int alcada, int amplada, int fondaria)
{
    //ctor
    if(IsNull(codi) || tipus != 22 || tipus != 222 || alcada <= 0 || amplada <= 0 || fondaria <=0){
        throw "Dades incorrectes";
    } else {
        this->codi = codi;
        this->tipus = tipus;
        this->alcada = alcada;
        this->amplada = amplada;
        this->fondaria = fondaria;
    }
}

ObraArt::ObraArt(int numerica, string alfanumerica, int tipus, int alcada, int amplada, int fondaria)
{
    //ctor
    Codi *codi = new Codi(numerica, alfanumerica);
    if(IsNull(codi)){
        throw "Dades incorrectes";
    } else {
        ObraArt(codi, tipus, alcada, amplada, fondaria);
    }
}

ObraArt::~ObraArt()
{
    //dtor
}

    Codi getCodi(){
        return this->codi;
    }

    int getTipus(){
        return this->tipus;
    }

    int getAlcada(){
        return this->alcada;
    }

    int getAmplada(){
        return this->amplada;
    }

    int getFondaria(){
        return this->fondaria;
    }

    virtual string getType() = 0;

    void visualitza(){
        cout << "Codi de l'obra: " << codi->visualitza << " de tipus " << this->tipus;
    }

    bool operator==(ObraArt *obraArt){
        return this->codi==obraArt->codi;
    }

    double volumEmpaquetatge(){
        return alcada * amplada * fondaria;
    }
