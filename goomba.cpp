#include "goomba.h"
#include "range.h"

/*Nombre,batallas,hp,def,vel,fuer,poder, capacidad, tamaño*/
goomba::goomba(string nombre,int batallas,int hp,int def,int vel,int fuer,int poder,int capacidad,int ptamanio)
        :melee(nombre,batallas,hp,def,vel,fuer,poder,capacidad){
  tamanio = ptamanio;
}

goomba::goomba(){}

goomba::~goomba(){}

void goomba::ataque(minion* mi){
  if(dynamic_cast<range*>(mi)){
  }

}
