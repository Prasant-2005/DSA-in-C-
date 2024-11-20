// #include<iostream>
// #include<math.h>
// using namespace std;


// int main() {

//     int n;
//     cin >> n;


//     int ans  = 0;
//     int i = 0;
//     while(n != 0 ) {

//         int bit  = n & 1;

//         ans = (bit * pow(10, i) ) + ans;

//         n = n >> 1;
//         i++;

//     }

//     cout<<" Answer is " << ans << endl;
//     return 0;
// }
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int ans = 0;
    int placeValue = 1; // Keeps track of the place value (1, 10, 100, ...)

    while (n != 0) {
        int bit = n & 1;           // Extract the last binary bit
        ans = (bit * placeValue) + ans; // Append the bit in the correct place
        n = n >> 1;                // Shift right to process the next bit
        placeValue *= 10;          // Move to the next decimal place
    }

    cout << "Answer is " << ans << endl;
    return 0;
}
