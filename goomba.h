#ifndef GOOMBA_H
#define GOOMBA_H

#include "melee.h"

class goomba:public melee{

  private:
    int tamanio;
    int hp;
    int defensa;
    int velocidad;
    int fuerza;

  public:
    int getSize();
    int gethp();
    int getDefensa();
    int getVelocidad();
    int getFuerza();
    //Constructores
    goomba(string,int,int,int,int,int,int,int,int);//
    /*Nombre, batallas, exp, capacidad de intimidar,tamaño,hp,defensa,velocidad,fuerza*/
    goomba();
    virtual ~goomba();

};


#endif
