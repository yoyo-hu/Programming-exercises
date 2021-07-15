class Wheel{
  public:
  Wheel(){
    std::cout << "Construct a wheel"<<std::endl;
  }
};
class Car{
  public:
    Car()
    {
      std::cout << "Construct a car" << std::endl;
  }
};
class RedCar:public Car{
  public:
  Wheel w1, w2, w3, w4;
  RedCar(){
    std::cout << "Construct a red car"<<std::endl;
  }
};