#include<bits/stdc++.h>
using namespace std;

class Cricketer
{
    public:
    string country;
    int jersey;
    Cricketer(string country, int jersey){
        this->country=country;
        this->jersey= jersey;
    }
};

int main(){
    Cricketer* dhoni= new Cricketer("dhoni",7);
    Cricketer* kohli= new Cricketer("kohli",18);

    //Copy dynamic object.
    *kohli = *dhoni;
    cout << kohli->country << " " << kohli->jersey;
    return 0;
}
