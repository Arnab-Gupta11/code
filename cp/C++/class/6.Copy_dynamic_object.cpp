#include<bits/stdc++.h>
using namespace std;
class Cricketer{
    public:
    string name;
    int age;

    Cricketer(string name, int age){
        this->name=name;
        this->age= age;
    }

};

Cricketer* dynObject(string name, int age){
    Cricketer* p= new Cricketer(name,age);
    return p;
}


int main(){
    Cricketer* obj1=dynObject("Dhoni",40);
    Cricketer* obj2=dynObject("Kohli",40);
    *obj2 = *obj1;
    delete obj1;
    // cout<<(*obj1).name<< " " << (*obj1).age << " " <<endl;
    cout<<(*obj2).name<< " " << (*obj2).age << " " <<endl;
    return 0;
}