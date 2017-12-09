#include "hammerbro.h"


/*Nombre,batallas,hp,def,vel,fuer,poder,rango,tamaño*/
hammerbro::hammerbro(string nombre,int batallas, int hp, int def, int vel, int fuer, int poder, int prango_ataque, int tamanio)
          :range(nombre,batallas,hp,def,vel,fuer,poder,prango_ataque){
  tamanio_martillos = tamanio;
}

hammerbro::hammerbro(){}

int hammerbro::getMartillo(){
  return tamanio_martillos;
}

hammerbro::~hammerbro(){}

void hammerbro::ataque(minion* mi){

}
