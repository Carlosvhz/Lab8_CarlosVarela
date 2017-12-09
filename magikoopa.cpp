#include "magikoopa.h"


/*Nombre, batallas, exp, capacidad de intimidar,tamaño,hp,defensa,velocidad,fuerza*/
magikoopa::magikoopa(string nombre,int batallas, int hp, int def, int vel, int fuer, int poder, int prango_ataque, string color)
          :range(nombre,batallas,hp,def,vel,fuer,poder,prango_ataque){
  color_traje = color;
}

magikoopa::magikoopa(){}

string magikoopa::getColortraje(){
  return color_traje;
}

magikoopa::~magikoopa(){}

void magikoopa::ataque(minion* mi){

}
