#include "paratroopa.h"


/*Nombre, batallas, exp,color,hp,defensa,velocidad,fuerza*/
paratroopa::paratroopa(string nombre,int batallas,int exp,string pcolor,int php,int pdefensa,int pvelocidad,int pfuerza):flying(nombre,batallas,exp){
  color_Caparazon = pcolor;
  hp = php;
  defensa = pdefensa;
  velocidad = pvelocidad;
  fuerza = pfuerza;
}

paratroopa::paratroopa(){}

string paratroopa::getColorcaparazon(){
  return color_Caparazon;
}
int paratroopa::gethp(){
  return hp;
}

int paratroopa::getDefensa(){
  return defensa;
}

int paratroopa::getVelocidad(){
  return velocidad;
}

int paratroopa::getFuerza(){
  return fuerza;
}

paratroopa::~paratroopa(){}

int paratroopa::ataque(){
  return 0;
}
