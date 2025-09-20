#include <iostream>
 
using namespace std;
 
int main() {
    int a, b, k;
    cin >> a >> b >> k;
 
    int count = 0;
    for (int i = a; i <= b; ++i) {
        if (i % k == 0) {
            bool isDivisibleByOthers = false;
            for (int j = 2; j < k; ++j) {
                if (i % j == 0) {
                    isDivisibleByOthers = true;
                    break;
                }
            }
            if (!isDivisibleByOthers) {
                ++count;
            }
        }
    }
 
    cout << count << endl;
 
    return 0;
}