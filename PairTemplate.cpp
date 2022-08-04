#include <iostream>
using namespace std;

template<typename T ,typename U>

class Pair{
T x;
U y;

public:

void setDatax(T x){
   this->x =x; 
}

void setDatay(U y){
    this->y =y; 
}

T getDatax(){
    return this->x;
}

U getDatay(){
    return this->y;
}

};

int main(){
    Pair <double,double> p1;

    Pair <Pair <double,double>,int> p2;
  p1.setDatax(10.1);
  p1.setDatay(10.2);

  p2.setDatax(p1);
  p2.setDatay(15);

  cout<<p2.getDatax().getDatax()<<" "<<p1.getDatay()<<" "<<p2.getDatay()<<endl;
    

    return 0;
}