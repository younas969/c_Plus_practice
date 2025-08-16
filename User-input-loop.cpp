#include <iostream>
#include <string>
using namespace std;

int main() {
    string text;
    int n;

    cout << "Kuch likhen: ";
    cin >> text; // user ka input (sirf ek word)

    cout << "Kitni baar print karna chahte hain: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << text << endl;
    }

    return 0;
}


// git clone https://github.com/hafizkashifdev/c-practice.git