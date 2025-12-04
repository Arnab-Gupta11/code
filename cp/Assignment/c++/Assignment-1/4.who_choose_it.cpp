#include <bits/stdc++.h>
using namespace std;

class Student {
public:
    int id;
    char name[105];
    char section;
    int marks;

    void input() {
        cin >> id >> name >> section >> marks;
    }
};

int main() {
    int t;
    cin >> t;

    while (t--) {
        Student best;
        best.marks = -1; 

        for (int i = 0; i < 3; i++) {
            Student s;
            s.input();

            if (s.marks > best.marks)
                best = s;
            else if (s.marks == best.marks && s.id < best.id)
                best = s;
        }

        cout << best.id << " " << best.name << " "<< best.section << " " << best.marks << "\n";
    }

    return 0;
}
