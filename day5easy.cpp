#include <bits/stdc++.h>
using namespace std;
void water(int arr[]){
    int count=0;
    for(int i=0;i<3;i++){
        if(arr[i]==1){
            count++;
        }
        
    }
    if(count<2){
        cout<<"Water filling time"<<endl;
    }
    else{
        cout<<"Not now"<<endl;
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
        
    water(arr);
    }
    return 0;
	

}