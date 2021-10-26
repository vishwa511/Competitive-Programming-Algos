#include <bits/stdc++.h>
using namespace std;

int main(){
int t;
 cin >> t;
for (int j = 0; j < t; j++)
{
   long long int n;
    cin >> n;
    vector< pair <long long int,long long int > > vect(n);
    //long long int vect[n];
    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        int f;
        cin >>f ;
        vect[i] = make_pair(f,i);
        
    }
    sort(vect.begin(), vect.end());

    for (int k = 0; k < n; k++)
        {
            for (int i = k+1; i < n; i++)
            {
               if(vect[k].first*vect[i].first == vect[k].second+vect[i].second+2)
               {
                   flag++;
               }
               if(vect[k].first*vect[i].first > 2*n)
               {
                   break;
               }
            }
            
            
        }
    cout << flag <<endl;
    


}
return 0;
}