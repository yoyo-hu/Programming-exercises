using namespace std;
class TypeA
{
public:
  class SubType
  {
  public:
    string toString() {return "subType in TypeA";};
  };
};

class TypeB
{
public:
  class SubType
  {
  public:
    string toString() {return "subType in TypeB";};
  };
};
template <class T>
class MyClass
{
public:
    typename T::SubType subtypeobj;
//add your public member here
};