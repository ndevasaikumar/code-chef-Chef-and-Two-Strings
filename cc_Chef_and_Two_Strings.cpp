#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        string s1,s2;
        cin >> s1 >> s2;
        int max = 0, min = 0;
        for(int i = 0; i < s1.length(); i++){
            if(s1[i] == '?' || s2[i] == '?')
                max++;
            else
                if(s1[i] != s2[i]){
                    max++;
                    min++;
                }
        }
        cout << min << " " << max << endl;
    }
}
