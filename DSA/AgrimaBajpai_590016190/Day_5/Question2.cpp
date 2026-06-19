#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    int n;
    cout << "Enter size of arrays: ";
    cin >> n;

    int a[n], b[n];

    cout << "Enter elements of first array: ";
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << "Enter elements of second array: ";
    for(int i = 0; i < n; i++) {
        cin >> b[i];
    }

    sort(a, a + n);
    sort(b, b + n);

    bool equal = true;

    for(int i = 0; i < n; i++) {
        if(a[i] != b[i]) {
            equal = false;
            break;
        }
    }

    if(equal)
        cout << "true";
    else
        cout << "false";

    return 0;
}