#include "hammerbro.h"


/*Nombre, batallas, exp, capacidad de intimidar,tamaño,hp,defensa,velocidad,fuerza*/
hammerbro::hammerbro(string nombre,int batallas,int exp,int rango,int tamanio,int php,int pdefensa,int pvelocidad,int pfuerza):range(nombre,batallas,exp,rango){
  tamanio_martillos = tamanio;
  hp = php;
  defensa = pdefensa;
  velocidad = pvelocidad;
  fuerza = pfuerza;
}

hammerbro::hammerbro(){}

int hammerbro::getMartillo(){
  return tamanio_martillos;
}
int hammerbro::gethp(){
  return hp;
}

int hammerbro::getDefensa(){
  return defensa;
}

int hammerbro::getVelocidad(){
  return velocidad;
}

int hammerbro::getFuerza(){
  return fuerza;
}

hammerbro::~hammerbro(){}

int hammerbro::ataque(){

  return 0;
}
