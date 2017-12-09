#ifndef FLYING_H
#define FLYING_H

#include "minion.h"

class flying:public minion{

  public:
    //Constructor y destructor
    /*Nombre,batallas,hp,def,vel,fuer,poder*/
    flying(string,int,int,int,int,int,int);
    flying();
    virtual ~flying();
    virtual void ataque(minion*);
};

#endif
