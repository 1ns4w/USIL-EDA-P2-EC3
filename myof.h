#ifndef __MYOF_H__//Agregado el ifndef MaizoDiego
#define __MYOF_H__//Agregado el define MaizoDiego

#include "type.h"
using namespace std; // Se agrego el using name MaizoDiego

//cerrar template Diego Panta
template <typename T>
class MyOF
{
private:
  //T1 *punt_variable; para el move constructor
  T1 m_variable_interna;
public:
    void operator()(T &v)
    {v += 5;  }

    template <typename Extra>
    void operator()(T &v, Extra &os)
    { os << v++ << endl;  }

    /*
    Se comprobo que el move constructor en este caso no funciona
    explicit MyOF(int diego)
      : punt_variable(new int (diego)),
      m_variable_interna(diego)
      {}
    MyOF(MyOF&& otro)
      : ptr(otro.punt_variable),
      m_variable_interna(*otro.punt_variable)
      {
        otro.punt_variable=0;
        otro.m_variable_interna=0;
      }
    ~MyOF()
    {
      delete punt_variable;
    }
    */
};

#endif //Agregad
