#include <iostream>

using namespace std;

int main(){
    int A, B, X;
    cin>>X;
    for(int i = 0; i<X; i++){
        cin>> A>> B;
        cout<<"Case #"<<i+1<<": " << A <<" + "<< B<<" = "<< A+B<<"\n";
    }
    
    
    
    return 0;
}