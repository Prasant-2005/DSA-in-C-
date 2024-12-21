#include <iostream>
using namespace std;
int fibo(int n){
    // base case
    if(n == 0){
        return 0;
    }
    if(n == 1){
        return 1;
    }
    int ans =  fibo(n-1) + fibo(n-2); 
    return ans;
}
int main() {
    int n;
    cout << "Enter a number" << endl;
    cin>> n;
    int ans = fibo(n);
    cout << ans << endl;

}