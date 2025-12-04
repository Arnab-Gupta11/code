#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
    string name;
    int roll;
    int age;
};

int main(){
    int n;
    cin>>n;
    Student a[n];

    for(int i=0;i<n;i++){
        cin.ignore();
        getline(cin, a[i].name);
        cin >> a[i].age >> a[i].roll;
    }

    //Max age person
    Student max,min;
    max.age=INT_MIN;
    min.age=INT_MAX;
    for(int i=0;i<n;i++){
        if(a[i].age > max.age){
            max= a[i];
        }
        if(a[i].age < min.age){
            min= a[i];
        }
    }
    cout << max.name << " "<< max.age << " "<< max.roll<< endl;
    cout << min.name << " "<< min.age << " "<< min.roll<< endl;


    return 0;
}