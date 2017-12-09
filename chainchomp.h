#ifndef CHAINCHOMP_H
#define CHAINCHOMP_H

#include <string>
#include "melee.h"
#include "minion.h"

using namespace std;

class chainchomp:public melee{

  private:
    string color;
  public:
    //Getters
    string getColor();
    //Constructores
    chainchomp(string,int,int,int,int,int,int,int,string);//
    /*Nombre,batallas,hp,def,vel,fuer,poder, capacidad, color*/
    chainchomp();
    virtual ~chainchomp();
    void ataque(minion*);
};


#endif
