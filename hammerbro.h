#ifndef HAMMERBRO_H
#define HAMMERBRO_H

#include "range.h"

class hammerbro:public range{

  private:
    int tamanio_martillos;
    int hp;
    int defensa;
    int velocidad;
    int fuerza;

  public:
    int getMartillo();
    int gethp();
    int getDefensa();
    int getVelocidad();
    int getFuerza();
    //Constructores
    hammerbro(string,int,int,int,int,int,int,int,int);
    /*Nombre, batallas,exp,rango,tamaño,hp,defensa,velocidad,fuerza*/
    hammerbro();
    virtual ~hammerbro();
    virtual int ataque();
};
#endif
