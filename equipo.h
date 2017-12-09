#ifndef EQUIPO_H
#define EQUIPO_H

#include <vector>
#include "minion.h"

using namespace std;

class equipo{

  private:
    vector<minion*>* lista;

  public:
    //Constructor
    equipo(vector<minion*>*);
    equipo();
    vector<minion*>* getEquipo();

};

#endif
