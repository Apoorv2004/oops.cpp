#include<iostream>
using namespace std;
class Car{// Student is a new data type
    public :
        string name;
        int price;
        int seat;
        string type;
    };
    void print(Car c){
        cout<< c.name<<" "<<c.price<<" "<<c.seat<<" "<<c.type<<endl;
    }
    void change(Car c){
        c.name="Audi A8";
    }
int main(){
        Car c1;
        c1.name = "Honda City";
        c1.price= 1500000;
        c1.seat= 5;
        c1.type="Sedan";

        print (c1);
        change(c1); // Pass by Value
        print(c1);
        // Car c2;
        // c2.name = "Thar";
        // c2.price= 1200000;
        // c2.seat= 5;
        // c2.type="Hatback";

        // Car c3;
        // c3.name = "Fortuner";
        // c3.price= 3500000;
        // c3.seat= 7;
        // c3.type="SUV"; 
        // print(c1);
        // print(c2);
        // print(c3);

}