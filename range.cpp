#include "range.h"

/*Nombre, batallas, exp, rango*/
range::range(string nombre,int batallas, int hp, int def, int vel, int fuer, int poder, int prango_ataque)
      :minion(nombre,batallas,hp,def,vel,fuer,poder){
  rango_ataque = prango_ataque;
}

range::range(){}

int range::getRango(){
  return rango_ataque;
}

range::~range(){}

void range::ataque(minion* m){
}
