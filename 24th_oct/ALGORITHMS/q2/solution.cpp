#include<iostream>
using namespace std;


bool prime_num(int x){
    for (int i = 2; i<=x/2 ;i++ ){
        if (x%i == 0){    // 15%2, 3, 4, 5 
            return false;
        }
    }
    return true;
}
int main(){
    bool result;
    result = prime_num(10);
    cout << result << endl;
    //std::cout << "Hello world" << std::endl;
    return 0;
}