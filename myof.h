#ifndef __MYOF_H__//Agregado el ifndef MaizoDiego
#define __MYOF_H__//Agregado el define MaizoDiego

using namespace std; // Se agrego el using name MaizoDiego

//cerrar template Diego Panta
template <typename T>
class MyOF
{
  int m_variable_interna;
  //int *ptr;
public:

    void operator()(T &v)
    { v += 5;  }

    template <typename Extra>
    void operator()(T &v, Extra &os)
    { os << v++ << endl;  }

    /* intentando hacer el move constructor
    explicit MyOF(int kevin)
      : ptr(new int (kevin)),
      m_variable_interna(kevin)
      {}
    MyOF(MyOF&& otro)
      : ptr(otro.ptr),
      m_variable_interna(*otro.ptr)
      {
        otro.ptr=0;
        otro.m_variable_interna=0;
      }
    ~MyOF()
    {
      delete ptr;
    }*/

    /*MyOF(T&& variable_interna)
      : m_variable_interna((T&&)variable_interna)
      {}
    

    MyOF(MyOF&& other) noexcept
    {
      cout<<"copiado"<<endl;
      m_variable_interna=other.m_variable_interna;
      other.m_variable_interna=0;
    }*/

    /*MyOF(MyOF && other) noexcept:
      m_variable_interna( std::exchange(other.m_variable_interna, 0))
    {
      
    }*/

  /*
  MyClass(MyClass&& other) noexcept:
   mpiSize(std::exchange(other.mpiSize, nullptr)),
   miSize2(std::exchange(other.miSize2, 0))
{}


  */
};

#endif //Agregado el endif MaizoDiego 
