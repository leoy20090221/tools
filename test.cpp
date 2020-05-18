#include <iostream>
#include "tools.h"

using namespace std;

int main(int argc, const char *argv[]) {
    int a[5];
    int n;
    cin >> n;
    ccin(a, 5);
    for (int i = 0; i < 5; i++)
        cout << a[i] << " ";
    cout << endl;
    cout << is_even(n) << endl;
    cout << times2(n) << endl;
    cout << big(a, 5) << endl;
    cout << small(a, 5) << endl;
    cout << min_array(a, 5) << endl;
    cout << max_array(a, 5) << endl;
    cout << temp_array(a, 5) << endl;
    cout << minimize(n) << endl;
    cout << maximize(n) << endl;
    int *wei = closeimize(a, 5);
    for (int i = 0; i < 5; i++)
        cout << wei[i] << " ";
    cout << endl;
    cout << array_temp_middle(a, 5) << endl;
    cout << array_temp_left(a, 5) << endl;
    cout << array_temp_right(a, 5) << endl;
    return 0;
}
