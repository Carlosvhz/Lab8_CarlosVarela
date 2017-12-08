#include "chainchomp.h"


/*Nombre, batallas, exp, capacidad de intimidar,color,hp,defensa,velocidad,fuerza*/
chainchomp::chainchomp(string nombre,int batallas,int exp,int capacidad,string pcolor,int php,int pdefensa,int pvelocidad,int pfuerza):melee(nombre,batallas,exp,capacidad){
  color = pcolor;
  hp = php;
  defensa = pdefensa;
  velocidad = pvelocidad;
  fuerza = pfuerza;
}

chainchomp::chainchomp(){}

string chainchomp::getColor(){
  return color;
}
int chainchomp::gethp(){
  return hp;
}

int chainchomp::getDefensa(){
  return defensa;
}

int chainchomp::getVelocidad(){
  return velocidad;
}

int chainchomp::getFuerza(){
  return fuerza;
}

chainchomp::~chainchomp(){}
