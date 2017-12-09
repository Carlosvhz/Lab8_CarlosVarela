#include "melee.h"

/*Nombre, batallas, exp, capacidad de intimidar*/
melee::melee(string nombre,int batallas ,int exp,int pcapacidad_intimidar):minion(nombre,batallas,exp){
  capacidad_intimidar = pcapacidad_intimidar;
}

melee::melee(){}

int melee::getCapacidadIntimidar(){
  return capacidad_intimidar;
}

melee::~melee(){}

int melee::ataque(){
  return 0;
}
