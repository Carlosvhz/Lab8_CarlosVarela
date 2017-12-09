#ifndef PARATROOPA_H
#define PARATROOPA_H

#include "flying.h"
#include <string>
#include "minion.h"

class paratroopa:public flying{

  private:
    string color_Caparazon;

  public:
    string getColorcaparazon();
    //Constructores
    paratroopa(string,int,int,int,int,int,int,string);
    /*Nombre,batallas,hp,def,vel,fuer,poder,color*/
    paratroopa();
    virtual ~paratroopa();
    void ataque(minion*);
};


#endif
