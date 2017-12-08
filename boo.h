#ifndef BOO_H
#define BOO_H

#include "flying.h"
#include <string>

class boo:public flying{

  private:
    string color;
    int hp;
    int defensa;
    int velocidad;
    int fuerza;

  public:
    string getColor();
    int gethp();
    int getDefensa();
    int getVelocidad();
    int getFuerza();
    //Constructores
    boo(string,int,int,string,int,int,int,int);
    /*Nombre, batallas, exp,color,hp,defensa,velocidad,fuerza*/
    boo();
    virtual ~boo();

};


#endif
