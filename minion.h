#ifndef MINION_H
#define MINION_H

#include <string>

using namespace std;

class minion{

  protected:
    bool desocupado;
    string nombre;
    int batallas_ganadas,exp,hp,def,vel,fuerza,poderEspecial;

  public:
    //Getters
    int getHP();
    int getDefensa();
    int getVelocidad();
    int getFuerza();
    int getPoder();
    string getNombre();
    bool getEstado();

    //Setters
    void setHP(int);
    void setEstado(bool);

    //Constructores y destructores
    minion(string,int,int,int,int,int,int);
    minion();
    virtual ~minion();
    /*Nombre,batallas,hp,def,vel,fuer,poder*/
};

#endif
