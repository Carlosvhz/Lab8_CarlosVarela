#ifndef MAGIKOOPA_H
#define MAGIKOOPA_H

#include "range.h"
#include <string>
#include "minion.h"

using namespace std;

class magikoopa:public range{

  private:
    string color_traje;

  public:
    string getColortraje();
    //Constructores
    magikoopa(string,int,int,int,int,int,int,int,string);
   /*Nombre,batallas,hp,def,vel,fuer,poder,rango,Color*/
    magikoopa();
    virtual ~magikoopa();
    void ataque(minion*);
};
#endif
