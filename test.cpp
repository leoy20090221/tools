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
    int *wei = closeimize(a, 5);
    for (int i = 0; i < 5; i++)
        cout << wei[i] << " ";
    cout << endl;
    cout << array_temp_middle(a, 5) << endl;
    cout << array_temp_left(a, 5) << endl;
    cout << array_temp_right(a, 5) << endl;
    return 0;
}
