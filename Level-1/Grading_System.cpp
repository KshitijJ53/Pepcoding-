#include<iostream>
using namespace std;
int main(int argc, char**argv){
    int marks;
    cin>>marks;
    if(marks>90) {
        cout<<"Excellent"<<endl;
    }
    else if(marks>80) {
        cout<<"Good"<<endl;
    }
    else if(marks>70) {
        cout<<"Fair"<<endl;
    }
    else if(marks>60) {
        cout<<"Meets expectations"<<endl;
    }
    else {
        cout<<"Below Par"<<endl;
    }
   
}
