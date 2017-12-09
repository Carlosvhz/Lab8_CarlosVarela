#ifndef HAMMERBRO_H
#define HAMMERBRO_H

#include "range.h"
#include "minion.h"

class hammerbro:public range{

  private:
    int tamanio_martillos;
    
  public:
    int getMartillo();
    //Constructores
    hammerbro(string,int,int,int,int,int,int,int,int);
    /*Nombre,batallas,hp,def,vel,fuer,poder,rango,tamaño*/
    hammerbro();
    virtual ~hammerbro();
    void ataque(minion*);
};
#endif
