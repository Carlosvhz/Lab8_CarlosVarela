#ifndef MINION_H
#define MINION_H

#include <string>

using namespace std;

class minion{

  private:
    bool desocupado;
    string nombre;
    int batallas_ganadas;
    int exp;

  public:
    string getNombre();
    bool getEstado();
    void setEstado(bool);
    minion(string,int,int);
    minion();
    virtual ~minion();
    virtual int ataque();
};

#endif
