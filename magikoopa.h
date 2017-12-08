#ifndef MAGIKOOPA_H
#define MAGIKOOPA_H

#include "range.h"
#include <string>

using namespace std;

class magikoopa:public range{

  private:
    string color_traje;
    int hp;
    int defensa;
    int velocidad;
    int fuerza;

  public:
    string getColortraje();
    int gethp();
    int getDefensa();
    int getVelocidad();
    int getFuerza();
    //Constructores
    magikoopa(string,int,int,int,string,int,int,int,int);
    /*Nombre, batallas,exp,color,hp,defensa,velocidad,fuerza*/
    magikoopa();
    virtual ~magikoopa();

};
#endif
