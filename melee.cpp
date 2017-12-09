#include "melee.h"

/*Nombre,batallas,hp,def,vel,fuer,poder, capacidad*/
melee::melee(string nombre,int batallas, int hp, int def, int vel, int fuer, int poder, int pcapacidad_intimidar)
      :minion(nombre,batallas,hp,def,vel,fuer,poder){
  capacidad_intimidar = pcapacidad_intimidar;
}

melee::melee(){}

int melee::getCapacidadIntimidar(){
  return capacidad_intimidar;
}

melee::~melee(){}

void melee::ataque(minion*){
}
