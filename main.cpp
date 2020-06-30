/* Section 9
 * If Statements */

#include <iostream>
using namespace std;

int main(){
    int num {};
    int const min {10};
    int const max {100};

    cout << "Enter a number between " << min << " and " << max << ": ";
    cin >> num;

    if(num >= min) {
        cout << "\n================= if statements 1 =================" << endl;
        cout << num << " is grater than " << min << endl;

        int diff{num - min};
        cout << num << " is " << diff << " greater than " << min << endl;
    }

    if(num <= max) {
        cout << "\n================= if statements 2 =================" << endl;
        cout << num << " is less than or equal to " << max << endl;

        int diff{max - num};
        cout << num << " is " << diff << " less than " << max << endl;
    }

    cout << endl;
    return 0;
}