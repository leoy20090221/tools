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
    cout << max_array(a, 5) << endl;
    cout << temp_array(a, 5) << endl;
    cout << minimize(1943L) << endl;
    cout << maximize(1943L) << endl;
    int a[9] = {3, 4, 5, 6, 7, 8, 9, 10, 11};
    int *wei = closeimize(a, 9);
    for (int i = 0; i < 9; i++)
        cout << wei[i] << " ";
    cout << endl;
    return 0;
}
