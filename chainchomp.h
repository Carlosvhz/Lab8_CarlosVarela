#ifndef CHAINCHOMP_H
#define CHAINCHOMP_H

#include <string>
#include "melee.h"

using namespace std;

class chainchomp:public melee{

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
    chainchomp(string,int,int,int,string,int,int,int,int);//
    /*Nombre, batallas, exp, capacidad de intimidar,color,hp,defensa,velocidad,fuerza*/
    chainchomp();
    virtual ~chainchomp();

};


#endif
