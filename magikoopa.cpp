#include "magikoopa.h"


/*Nombre, batallas, exp, capacidad de intimidar,tamaño,hp,defensa,velocidad,fuerza*/
magikoopa::magikoopa(string nombre,int batallas,int exp,int rango,string color,int php,int pdefensa,int pvelocidad,int pfuerza):range(nombre,batallas,exp,rango){
  color_traje = color;
  hp = php;
  defensa = pdefensa;
  velocidad = pvelocidad;
  fuerza = pfuerza;
}

magikoopa::magikoopa(){}

string magikoopa::getColortraje(){
  return color_traje;
}
int magikoopa::gethp(){
  return hp;
}

int magikoopa::getDefensa(){
  return defensa;
}

int magikoopa::getVelocidad(){
  return velocidad;
}

int magikoopa::getFuerza(){
  return fuerza;
}

magikoopa::~magikoopa(){}
