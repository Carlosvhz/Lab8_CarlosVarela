#include "range.h"

/*Nombre, batallas, exp, rango*/
range::range(string nombre,int batallas ,int exp,int prango_ataque):minion(nombre,batallas,exp){
  rango_ataque = prango_ataque;
}

range::range(){}

int range::getRango(){
  return rango_ataque;
}

range::~range(){}
