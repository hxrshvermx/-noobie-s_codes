#include<iostream>
using namespace std;

enum Divisibility {
    EVEN,
    ODD
};
// 0 = even
// 1 = odd

Divisibility check_divisibility(int n){
    if (n%2 == 0){
        return Divisibility::EVEN;
    }
    else{
        return Divisibility::ODD;
    }

}

int main(){
    int x = 69934;
    Divisibility result = check_divisibility(x);
    if (result == Divisibility::EVEN){
        cout<< "even \n";
    } else{
        cout<< "odd \n";
    }
    
    //cout<< result<< "\n";
    return 0;
}
