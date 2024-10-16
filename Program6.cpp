//Program 6 for CS 2130
#include <iostream>
using namespace std;

bool NOT(bool x) {
    return !x;
}

bool OR(bool x, bool y) {
    return x || y;
}

bool AND(bool x, bool y) {
    return x && y;
}

int main() {

    cout << "a b c d e  |  (( c V ~d ) A b ) A ~( d V a A e )" << endl;
    cout << "-------------------------------------------------" << endl;
    for (int i = 0; i < 32; ++i) {
        bool a = (i & 16) != 0;
        bool b = (i & 8) != 0;
        bool c = (i & 4) != 0;
        bool d = (i & 2) != 0;
        bool e = (i & 1) != 0;

        bool part1 = OR(c, NOT(d));
        bool part2 = AND(part1, b);
        bool part3 = AND(a, e);
        bool part4 = OR(d, part3);
        bool part5 = NOT(part4);
        bool result = AND(part2, part5);

        cout << a << " " << b << " " << c << " " << d << " " << e << " |                 " << result << endl;
    }
    cout << "Thank you!";
    return 0;

}
