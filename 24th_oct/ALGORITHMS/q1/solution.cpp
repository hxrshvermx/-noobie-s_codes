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

int main(){
    long long int result;
    result = factorial(20);
    cout << result << endl;
    return 0;
}