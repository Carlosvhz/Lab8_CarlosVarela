#ifndef RANGE_H
#define RANGE_H

#include "minion.h"

class range:public minion{
  private:
    int rango_ataque;

  public:
    int getRango();
    //Constructor y destructor
    range(string,int,int,int,int,int,int,int);
    /*Nombre,batallas,hp,def,vel,fuer,poder,rango*/
    range();
    virtual ~range();
    virtual void ataque(minion*);
};

#endif
