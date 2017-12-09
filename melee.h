#ifndef MELEE_H
#define MELEE_H

#include "minion.h"

class melee:public minion{
  private:
    int capacidad_intimidar;

  public:
    int getCapacidadIntimidar();
    //Constructor y destructor
    melee(string,int,int,int);
      /*Nombre, batallas, exp, capacidad de intimidar*/
    melee();
    virtual ~melee();
    virtual int ataque();
};

#endif
