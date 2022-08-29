#include <iostream>
using namespace std;
int main(int argc, char **argv){
    int t;
    cin >> t;

    //write your code here
    
    bool isPrime = 1;
    for(int i = 2; i < t; i++) {
        if(t % i == 0){
            isPrime = 0;
            break;
        }
    }
    
    if (isPrime == 0) {
        cout<<"not prime"<<endl;
    }
    else{
        cout<<"prime"<<endl;
    }
    
    return 0;
}
