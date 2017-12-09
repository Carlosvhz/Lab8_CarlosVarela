#include "boo.h"


/*Nombre, batallas, exp,color,hp,defensa,velocidad,fuerza*/
boo::boo(string nombre,int batallas,int exp,string pcolor,int php,int pdefensa,int pvelocidad,int pfuerza):flying(nombre,batallas,exp){
  color = pcolor;
  hp = php;
  defensa = pdefensa;
  velocidad = pvelocidad;
  fuerza = pfuerza;
}

boo::boo(){}

string boo::getColor(){
  return color;
}
int boo::gethp(){
  return hp;
}

int boo::getDefensa(){
  return defensa;
}

int boo::getVelocidad(){
  return velocidad;
}

int boo::getFuerza(){
  return fuerza;
}

boo::~boo(){}

int boo::ataque(){

  return 0;
}
