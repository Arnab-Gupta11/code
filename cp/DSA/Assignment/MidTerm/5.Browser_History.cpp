#include<bits/stdc++.h>
using namespace std;

int main() {

    list<string> addresses;
    string addr;

    while (cin >> addr && addr != "end") {
        addresses.push_back(addr);
    }

    int q;
    cin >> q;

    auto it = addresses.begin();

    while (q--) {
        string command;
        cin >> command;

        if (command == "visit") {
            string target;
            cin >> target;
            
            auto found = find(addresses.begin(), addresses.end(), target);
            
            if (found != addresses.end()) {
                it = found;
                cout << *it << endl;
            } else {
                cout << "Not Available" << endl;
            }
        } 
        else if (command == "next") {
            if (it != addresses.end() && next(it) != addresses.end()) {
                it++;
                cout << *it << endl;
            } else {
                cout << "Not Available" << endl;
            }
        } 
        else if (command == "prev") {
            if (it != addresses.begin()) {
                it--;
                cout << *it << endl;
            } else {
                cout << "Not Available" << endl;
            }
        }
    }
    return 0;
}