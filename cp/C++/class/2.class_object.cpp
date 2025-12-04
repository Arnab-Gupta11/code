#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
    char name[100];
    int roll;
};

int main (){
    Student std1,std2;
    cin.getline(std1.name,100);
    cin >> std1.roll;
    cin.ignore();
    cin.getline(std2.name,100);
    cin >> std2.roll;

    cout << std1.name <<endl << std1.roll<<endl;
    cout << std2.name <<endl << std2.roll;
}