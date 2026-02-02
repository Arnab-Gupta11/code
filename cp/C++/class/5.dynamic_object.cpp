#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
    string name;
    int roll;
    int age;

    Student(string name, int roll, int age){
        this->name=name;
        this->age=age;
        this->roll=roll;
    }
};

Student* fun(){
    Student* p=new Student("Rahim Monjur",25,10);
    return p;
}

int main(){
    Student* obj=fun();
    cout<< obj->name << " " << obj->age <<" " <<obj->roll<<endl;
    return 0;
}