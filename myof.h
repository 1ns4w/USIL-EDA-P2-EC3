#ifndef __MYOF_H__
#define __MYOF_H__

//jose terrones
using namespace std; 

template <typename T>
class MyOF
{
private:
//crear variables
  T m_variable_internal;
  T *vx;

public:
  void operator()(T &v)
  { v++;  }

  template <typename Extra>
  void operator()(T &v, Extra &os)
  { os << v++ << endl;  }

//crear copia 
  MyOF(MyOF && other) noexcept
    : vx(std::exchange(other.vx, nullptr)),
    m_variable_internal(std::exchange(other.m_variable_internal, 0))
    {}
};
#endif
