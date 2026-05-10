#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int biggest;

    if (a >= b && a >= c && a >= d)
        biggest = a;
    else if (b >= a && b >= c && b >= d)
        biggest = b;
    else if (c >= a && c >= b && c >= d)
        biggest = c;
    else
        biggest = d;

    cout << "Biggest = " << biggest;

    return 0;
}
