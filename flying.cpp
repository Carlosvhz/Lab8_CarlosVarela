#include "flying.h"

/*Nombre,batallas,hp,def,vel,fuer,poder*/
flying::flying(string nombre,int batallas, int hp, int def, int vel, int fuer, int poder)
        :minion(nombre,batallas,hp,def,vel,fuer,poder){
}

flying::flying(){}

flying::~flying(){}

void flying::ataque(minion* m){  
}
