#include <bits/stdc++.h>
using namespace std;
void vote(int arr[]){
    
        if(arr[0]>50){
            cout<<"A"<<endl;
        }
        else if(arr[1]>50){
            cout<<"B"<<endl;
        }
        else if(arr[2]>50){
            cout<<"C"<<endl;
        }
        else{
            cout<<"NOTA"<<endl;
        }
    
    
}

int main() {
    int t;
    cin>>t;
    while(t--){
        int arr[3];
        for(int i=0;i<3;i++){
            cin>>arr[i];
        }
        vote(arr);
    }
    return 0;

}
