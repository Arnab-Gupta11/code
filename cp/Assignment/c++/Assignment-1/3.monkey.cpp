#include <bits/stdc++.h>
using namespace std;

int main() {
    char line[100001];

    while (cin.getline(line, 100001)) {

        char letters[100001];
        int idx = 0;

        for (int i = 0; line[i] != '\0'; i++) {
            if (line[i] >= 'a' && line[i] <= 'z') {
                letters[idx++] = line[i];
            }
        }

        sort(letters, letters + idx);

        for (int i = 0; i < idx; i++) {
            cout << letters[i];
        }
        cout << "\n";
    }

    return 0;
}
