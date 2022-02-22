#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define MOD 1000000007
#define vt vector
#define pYes cout << "YES" << endl; 
#define pNo cout << "NO" << endl; 


void solve(){
    
   // Taking INPUT Array
    ll w;
   int n; cin >> n >> w;
   vector<int> arr(n);
   for (int i = 0; i < n; i++)
   cin >> arr[i]; // input-values
   
   sort(arr.begin(), arr.end(), greater<int>());
    
    ll sum = 0;
    ll j = 0;
    for (auto && i : arr){
        if(sum >= w){
            break;
        }
        sum+= i;
        j++;
    }
    
    cout << (n - j) << endl;
    
}


int main(){

 // For Faster Output
   ios_base:: sync_with_stdio(false);
   cin.tie(NULL);

   int tCase;
   cin >> tCase;
   
   while(tCase--){
       solve();
   }

   return 0;
}

/* 
   Author - @akhilsharmaa
   C++ code by Akhilesh Sharma
*/

