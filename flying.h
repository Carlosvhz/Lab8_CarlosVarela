#ifndef FLYING_H
#define FLYING_H

#include "minion.h"

class flying:public minion{

  public:
    //Constructor y destructor
    flying(string,int,int);
      /*Nombre, batallas, exp*/
    flying();
    virtual ~flying();
};

#endif
