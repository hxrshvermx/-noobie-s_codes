#include<iostream>
using namespace std;

// TC: O(1)
// SC: O(1)
int comparing(int a, int b, int c){
    if (a>=b && a>=c){
        return a;
    } else if (b>=a && b>=c){
        return b;
    } else if (c>=a && c>=b){
        return c;
    }
}
    
int main(){
    int x,y,z,result;
    /* 
    4,5,6 -> 6
    6 5 4 -> 6
    5 5 4 -> 5
    5 5 5 -> 5
    4 4 5 -> 5
    */
    cout << "Enter first number";
    cin >> x;
    cout << "Enter second number";
    cin >> y;
    cout << "Enter third number";
    cin >> z;

    result = comparing(x,y,z);
    cout << result;

    return 0;
}
