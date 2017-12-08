#ifndef RANGE_H
#define RANGE_H

#include "minion.h"

class range:public minion{
  private:
    int rango_ataque;

  public:
    int getRango();
    //Constructor y destructor
    range(string,int,int,int);
      /*Nombre, batallas, exp, capacidad de intimidar*/
    range();
    virtual ~range();
};

#endif
