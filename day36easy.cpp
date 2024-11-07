#include<iostream>
using namespace std;

int dracula(int n) {
    int count = 0;
    for (int day = 2; day <= n; day += 7) {
      count++;
    }

    return count;
}

int main() {
  int t;
  cin>>t;
  while(t--){
      int n;
      cin>>n;
      cout<<dracula(n)<<endl;
  }
    return 0;
}
