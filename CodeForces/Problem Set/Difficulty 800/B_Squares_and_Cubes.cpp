#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define MOD 1000000007
#define vt vector

  /* 
 __________________________________________
 |                                        |
 |  If this code helps you ;)             |
 |                                        |
 |  Please give a STAR                    |
 |  & FOLLOW_ME on Github                 |
 |                                        |
 |  ID - @akhilsharmaa                    |
 |                                        |
 |  C++ CODE BY AKHILESH                  |
 |________________________________________|
 */

int main(){

    int testCase;
    cin >> testCase;
   
    while(testCase--){
      

       ll n ;
       cin >> n;

        int count = 0;
        set<ll> s;
       for (int i = 1; i * i <= n; i++){
           s.insert(i* i);
       }
       for (int i = 1; i * i * i <= n; i++){
           s.insert(i* i * i);
       }
       
      cout << s.size() <<"\n";
   }

   return 0;
}