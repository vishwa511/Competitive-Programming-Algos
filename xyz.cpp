#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {

       long long int n,odd=0,even=0,sumodd=0,sumeven=0;
        cin >> n;
        long long int arr[n];

        for (int j = 0; j < n; j++)
        {
           cin >> arr[j];
           if(arr[j] % 2 == 0)
           {
               even++;
               sumeven=sumeven+arr[j];
           }
           else{
               odd++;
               sumodd=sumodd+arr[j];
           }
        }
        sort(arr,arr+n,greater<long long int>());
        // for  (int j = 0; j < n; j++)
        // {
        //    cout << arr[j] << endl;

        // }
        
       long long int sum =0 ; // 7 5 3 2
        for  (int j = 0; j < n; j++)
        {
            if (j % 2 == 0) 
     {
      if (arr[j] % 2 == 0) {
        sum += arr[j];
      }

    }
            else {
      if (arr[j] % 2 == 1) {
        sum -= arr[j];
      }
    }
            
        }
        if( sum == 0)
        {
            cout << "Tie" << endl;
        }
        else if(sum > 0)
        {
            cout << "Alice" << endl;

        }
        else{
            cout << "Bob" << endl;
        }
        
        
    }
    

return 0;
}

// 5 2 7 3 -> 7 5 3 2
//   for (int i = 0; i < 3; i++) {

//     if (i % 2 == 0) 
//      {
//       if (v[i] % 2 == 0) {
//         ans += v[i];
//       }

//     } 
//       else {
//       if (v[i] % 2 == 1) {
//         ans -= v[i];
//       }
//     }
//   }