#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin>> s;
    int a;
    cin >> a;
    string str [a];
    
    int b[a];
    
    for (int i = 0; i < a; i++)
    {
        cin >> str[i];
        cin >> b[i];
    }
    int pro=1;
    int sum=0;
    for (int i = 0; i < a; i=i+2)
    {
        pro=b[i]*b[i+1];
        sum=sum+pro;
    }
    int w=sum % 1000000007 ;
    cout << w << endl;
    

return 0;
}