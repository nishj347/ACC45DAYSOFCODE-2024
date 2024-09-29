#include <iostream>
using namespace std;

void scores(int d_dsa, int d_toc, int d_dm, int s_dsa, int s_toc, int s_dm) {
    int total_d = d_dsa + d_toc + d_dm; 
    int total_s = s_dsa + s_toc + s_dm; 


    if (total_s > total_d) {
        cout << "SLOTH" << endl;
    } 
    else if (total_s < total_d) {
        cout << "DRAGON" << endl;
    } 
    else { 
        
        if (s_dsa > d_dsa) {
            cout << "SLOTH" << endl;
        } 
        else if (s_dsa < d_dsa) {
            cout << "DRAGON" << endl;
        } 
        else { 
          
            if (s_toc > d_toc) {
                cout << "SLOTH" << endl;
            } 
            else if (s_toc < d_toc) {
                cout << "DRAGON" << endl;
            } 
            else {
                
                cout << "TIE" << endl;
            }
        }
    }
}

int main() {
    int test_cases;
    cin >> test_cases; 

    while (test_cases--) {
        int d_dsa, d_toc, d_dm; 
        int s_dsa, s_toc, s_dm; 

  
        cin >> d_dsa >> d_toc >> d_dm;
        cin >> s_dsa >> s_toc >> s_dm;

       
        scores(d_dsa, d_toc, d_dm, s_dsa, s_toc, s_dm);
    }

    return 0;
}



