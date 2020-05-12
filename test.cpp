#include <iostream>
#include "tools.h"

using namespace std;

int main(int argc, const char *argv[]) {
    int a[5];
    cout << is_even(6) << endl;
    ccin(a, 5);
    for (int i = 0; i < 5; i++)
        cout << a[i] << " ";
    cout << endl;
    cout << times2(9) << endl;
    cout << big(a, 5) << endl;
    cout << small(a, 5) << endl;
    cout << min_array(a, 5) << endl;
    return 0;
}
