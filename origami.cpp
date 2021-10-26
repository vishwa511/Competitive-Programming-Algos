#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
    long long unsigned int n;
    string s,s2;
    cin >> s;
    s2=s;
     stringstream geek(s); 
    geek >> n;
    if( s2.length() == 1)
    {
        cout << n << endl;
    }
      else{

    long long unsigned int sum=0,m=0,j=1;
    sum=9*(s2.length()-1);
    while(m<=n && j<10)
    {
        char c;
        string str="";
        str.insert(0, s2.length(), j+'0');
        stringstream geeks(str); 
    geeks >> m;
    sum=sum+1;
    //cout<< sum << " "<< j<<endl;
        j++;
    }
    if( m == n)
    sum++;
    cout << sum-1 << endl;
    }


    }
    

return 0;
}