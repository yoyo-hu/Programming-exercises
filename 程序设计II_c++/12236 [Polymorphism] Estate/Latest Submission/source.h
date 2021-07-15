#include <cmath>
using namespace std;
class Land {
  public:
    Land() : price_(0) {}
    explicit Land(int price);
    // calculate how much Feng Gor can earn from the land
    virtual double CalMoney() = 0;
  protected:
    // price of unit area
    int price_;
};

class Square : public Land {
  public:
    Square(double len, int price);
    double CalMoney();
  private:
    //length of side of a square
    double len_;
};

class Circle : public Land {
  public:
    Circle(double radius, int price);
    double CalMoney();
  private:
    //length of radius of a circle
    double radius_;
};

class Accountant {
  public:
    Accountant() : money_(0) {}
    // develop a land, earn the value of the land
    void DevelopEstate(Land* land);
    // return the value of money_
    double CheckMoney();
  private:
    double money_;
};

void Accountant::DevelopEstate(Land* land) {
  money_ += land->CalMoney();
}

double Accountant::CheckMoney() {
  return money_;
}
Land::Land(int price) : price_(price) {}

Square::Square(double len, int price) : len_(len), Land(price) {}

double Square::CalMoney() {
  return price_ * len_ * len_;
}

Circle::Circle(double radius, int price) : radius_(radius), Land(price) {}
double Circle::CalMoney() {
  static double pai = acos(-1);
  return price_ * pai * radius_ * radius_;
}