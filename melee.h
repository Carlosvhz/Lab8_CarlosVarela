#ifndef MELEE_H
#define MELEE_H

#include "minion.h"

class melee:public minion{
  private:
    int capacidad_intimidar;

  public:
    int getCapacidadIntimidar();
    //Constructor y destructor
    melee(string,int,int,int,int,int,int,int);
    /*Nombre,batallas,hp,def,vel,fuer,poder, capacidad*/
    melee();
    virtual ~melee();
    virtual void ataque(minion*);
};

#endif
