#ifndef GOOMBA_H
#define GOOMBA_H

#include "melee.h"
#include "minion.h"
class goomba:public melee{

  private:
    int tamanio;

  public:
    //Constructores
    goomba(string,int,int,int,int,int,int,int,int);//
    /*Nombre,batallas,hp,def,vel,fuer,poder, capacidad, tamaño*/
    goomba();
    virtual ~goomba();
    void ataque(minion*);
};


#endif
