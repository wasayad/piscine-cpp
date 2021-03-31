#include <time.h>
#include <iostream>

class Base 
{
    public:
        virtual ~Base(){}
};

class A : public Base
{
};

class B : public Base
{
};

class C : public Base
{
};

Base    *generate(void)
{
    int     randomizer = rand() % 3;
    if (randomizer == 0)
    {
        return (new A);
    }
    else if (randomizer == 1)
    {
        return (new B);
    }
    else if (randomizer == 2)
    {
        return (new C);
    }
    return (NULL);
}

void identify_from_pointer(Base * p)
{
    if (dynamic_cast<A*>(p))
    {
        std::cout << "Type : A\n";
    }
    else if (dynamic_cast<B*>(p))
    {
        std::cout << "Type : B\n";
    }
    else if (dynamic_cast<C*>(p))
    {
        std::cout << "Type : C\n";
    }
}

void identify_from_reference(Base &p)
{
  try 
  {    
      A &a = dynamic_cast<A&>(p);
      (void)a;
      std::cout << "Type : A\n";
  }
  catch (std::bad_cast &e)
  {

  }
  try 
  {    
      B &b = dynamic_cast<B&>(p);
      (void)b;
      std::cout << "Type : B\n";
  }
  catch (std::bad_cast &e)
  {

  }
  try 
  {    
      C &c = dynamic_cast<C&>(p);
      (void)c;
      std::cout << "Type : C\n";
  }
  catch (std::bad_cast &e)
  {

  }
}

int main(void)
{
    srand (time(NULL));
    Base *a = generate();
    identify_from_pointer(a);
    identify_from_reference(*a);
    delete (a);
}

