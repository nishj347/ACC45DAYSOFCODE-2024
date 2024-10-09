#include <iostream>
using namespace std;

int main() {
    int t; 
    cin>>t;
    
    while (t--) {
        int x,Y;
        cin >>x>>Y;
        int i= 0;
        while (true) {
            if (x+2*i>= y+1*i && x<=Y-1) { 
                cout <<i<<endl;
                break;
            } 
            else if (x-2*i<=y-1*i && x>y) { 
                cout<<i<<endl;
                break;
            } 
            else {
                i++; 
            }
        }
    }
    
    return 0;
}


