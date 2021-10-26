#include <bits/stdc++.h>
using namespace std;

int main(){

int x;
cin >> x;
 
 for(int i =0; i<x;i++)
 {
     int a,b,n;
     cin >> n>>a>>b;
     string result="No";
     if( a == 1)
     {
         if((n-1)%b == 0){
           result = "Yes";
           cout << result << endl;
            }
            else{
              cout << result << endl;  
            }
     }
    //  else if(n%a == 0)
    //  2^27 > 10^8
    // {
    //      result = "Yes";
    //      cout << result << endl;
    //  }
     else if((n-1)%b == 0){
           result = "Yes";
           cout << result << endl;
     }
     else{
         int j=0;
         while (pow(a,j) <= n)
         {
             long long unsigned int w=pow(a,j);
             if((n-w)%b == 0 || w==n)
             {
                 result = "Yes";
                 break;
             }
             j++;
         }
         cout << result << endl;
     }
 }
return 0;
}