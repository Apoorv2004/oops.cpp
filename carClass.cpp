#include<iostream>
using namespace std;
class Car{// Student is a new data type
    public :
        string name;
        int price;
        int seat;
        string type;
    };
int main(){
        Car c1;
        c1.name = "Honda City";
        c1.price= 1500000;
        c1.seat= 5;
        c1.type="Sedan";

        Car c2;
        c2.name = "Thar";
        c2.price= 1200000;
        c2.seat= 5;
        c2.type="Hatback";

        Car c3;
        c3.name = "Fortuner";
        c3.price= 3500000;
        c3.seat= 7;
        c3.type="SUV"; 

        cout<< c1.name<<" "<<c1.price<<" "<<c1.seat<<" "<<c1.type<<endl;
        cout<< c2.name<<" "<<c2.price<<" "<<c2.seat<<" "<<c2.type<<endl;
        cout<< c3.name<<" "<<c3.price<<" "<<c3.seat<<" "<<c3.type<<endl;

}