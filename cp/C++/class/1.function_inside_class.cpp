#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
    string name;
    int math;
    int english;

    Student(string name, int math, int english){
        this->name=name;
        this->math=math;
        this->english=english;

    }

    void total(){
        cout<< "Total Marks of "<<name<<" "<< math+english <<endl;
    }
};

int main(){
    Student std1("Rahim", 70, 80);
    Student std2("Karim", 90, 80);

    std1.total();
    std2.total();


}
