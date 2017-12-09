#ifndef BOO_H
#define BOO_H

#include "flying.h"
#include <string>
#include "minion.h"

class boo:public flying{

  private:
    string color;

  public:
    string getColor();
    //Constructores
    boo(string,int,int,int,int,int,int,string);
   /*Nombre,batallas,hp,def,vel,fuer,poder,color*/
    boo();
    virtual ~boo();
    void ataque(minion*);
};


#endif
