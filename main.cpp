#include <bits/stdc++.h>
#include<memory>
using namespace std;

class Vehicle 
{
  int gear;
  public:
  void  GetGear()
  {
    cout<<"Value of Gear: "<<gear<<endl;
  }
  void SetGear(int g)
  {
    gear = g;
  }
};

int main() 
{
  unique_ptr<Vehicle> v(new Vehicle());
  v->SetGear(5);
  v->GetGear();
}