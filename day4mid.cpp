#include <bits/stdc++.h>
using namespace std;


int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        
        int arr[n];
        for (int i=0;i<n;i++){
            cin>>arr[i];
        }
        
        sort(arr,arr+n);
        int maxfrequency=1;
        int currentfrequency=1;
        
        for(int i=1;i<n;i++){
            if(arr[i]==arr[i-1]){
                currentfrequency++;
            }
            else{
                maxfrequency=max(maxfrequency,currentfrequency);
                currentfrequency=1;
            }
        }
        
        maxfrequency=max(maxfrequency,currentfrequency); 
        int no_offrequency=n-maxfrequency;

cout<<no_offrequency<<endl;
        
    }
    return 0;

}