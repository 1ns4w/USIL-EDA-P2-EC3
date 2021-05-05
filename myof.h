#ifndef __MYOF_H__//Agregado el ifndef MaizoDiego
#define __MYOF_H__//Agregado el define MaizoDiego

using namespace std; // Se agrego el using name MaizoDiego

//cerrar template Diego Panta
template <typename T>
class MyOF
{
  int m_variable_interna;
public:
    void operator()(T &v)
    { v += 5;  }

    template <typename Extra>
    void operator()(T &v, Extra &os)
    { os << v++ << endl;  }

    MyOF(MyOF && other) noexcept:
      m_variable_interna( std::exchange(other.m_variable_interna, 0))
    {
      
    }

  /*
  MyClass(MyClass&& other) noexcept:
   mpiSize(std::exchange(other.mpiSize, nullptr)),
   miSize2(std::exchange(other.miSize2, 0))
{}


  */
};

#endif //Agregado el endif MaizoDiego 