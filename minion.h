#ifndef MINION_H
#define MINION_H

#include <string>

using namespace std;

class minion{

  private:
    string nombre;
    int batallas_ganadas;
    int exp;

  public:
    minion(string,int,int);
    minion();
    virtual ~minion();
};

#endif
