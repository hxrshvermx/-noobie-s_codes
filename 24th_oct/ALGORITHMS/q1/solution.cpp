#include<iostream>
using namespace std;

/*
3 
3*2*1
5
5*4*3*2*1

stop at 1, then return
until the next condition: n(n-1)
*/

long long int factorial(int x){
    long long int result;
    result = 1;
    for (int i = x; i>=1; i--){
        result = result*i;
        cout << "Debug" << i << " " << result << endl;
    }
    return result;

} 

// TC: O(n)
int fact_recursive(int x){
    // base case: x = 1 
    if (x==1){
        return 1;
    }
    // operation step: x*fact_recursive(x-1)
    return x*fact_recursive(x-1);

} 

int main(){
    long long int result;
    result = fact_recursive(5);
    cout << result << endl;
    return 0;
}