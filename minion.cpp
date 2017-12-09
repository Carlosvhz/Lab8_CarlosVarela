#include "minion.h"
#include <iostream>
using namespace std;
/*Nombre,batallas,hp,def,vel,fuer,poder*/
minion::minion(string pnombre, int pbatallas_ganadas,int php, int pdef, int pvel, int pfuer, int poder){
  nombre = pnombre;
  batallas_ganadas = pbatallas_ganadas;
  exp = 0;
  hp = php;
  def = pdef;
  vel = pvel;
  fuerza = pfuer;
  poderEspecial = poder;
  desocupado = true;
}

//Getters
int getHP(){

}
int minion::getDefensa(){
  return def;
}

int minion::getVelocidad(){
  return vel;
}

int minion::getFuerza(){
  return fuerza;
}

int minion::getPoder(){
  return poderEspecial;
}

string minion::getNombre(){
  return nombre;
}

bool minion::getEstado(){
  return desocupado;
}

//Setters
void minion::setHP(int php){
  hp = php;
}

void minion::setEstado(bool es){
  desocupado = es;
}


minion::minion(){}

minion::~minion(){}
