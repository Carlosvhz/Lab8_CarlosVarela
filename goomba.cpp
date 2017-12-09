#include "goomba.h"


/*Nombre, batallas, exp, capacidad de intimidar,tamaño,hp,defensa,velocidad,fuerza*/
goomba::goomba(string nombre,int batallas,int exp,int capacidad,int ptamanio,int php,int pdefensa,int pvelocidad,int pfuerza):melee(nombre,batallas,exp,capacidad){
  tamanio = ptamanio;
  hp = php;
  defensa = pdefensa;
  velocidad = pvelocidad;
  fuerza = pfuerza;
}

goomba::goomba(){}

int goomba::getSize(){
  return tamanio;
}
int goomba::gethp(){
  return hp;
}

int goomba::getDefensa(){
  return defensa;
}

int goomba::getVelocidad(){
  return velocidad;
}

int goomba::getFuerza(){
  return fuerza;
}

goomba::~goomba(){}

int goomba::ataque(){

  return 0;
}
