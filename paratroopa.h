#ifndef PARATROOPA_H
#define PARATROOPA_H

#include "flying.h"
#include <string>

class paratroopa:public flying{

  private:
    string color_Caparazon;
    int hp;
    int defensa;
    int velocidad;
    int fuerza;

  public:
    string getColorcaparazon();
    int gethp();
    int getDefensa();
    int getVelocidad();
    int getFuerza();
    //Constructores
    paratroopa(string,int,int,string,int,int,int,int);
    /*Nombre, batallas, exp,color,hp,defensa,velocidad,fuerza*/
    paratroopa();
    virtual ~paratroopa();

};


#endif
