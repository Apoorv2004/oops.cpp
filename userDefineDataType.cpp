#include<iostream>
using namespace std;
class Student{// Student is a new data type
public :
    string name;
    int rno;
    float gpa;
};
class Car{// Student is a new data type
    public :
        string name;
        int price;
        int seat;
        string type;
    };
int main(){
    Student s1;
    s1.name = "Apoorv Chauhan";
    //s1.rno = 47;
    s1.gpa = 8.1;
    cin>>s1.rno;

    Student s2;
    s2.name = "Shivam Singh";
    s2.rno = 92;
    s2.gpa = 6.2;

    cout<<s1.name<<" "<< s1.rno<<" "<< s1.gpa<<endl;
    cout<<s2.name<<" "<< s2.rno<<" "<< s2.gpa<<endl;
}   