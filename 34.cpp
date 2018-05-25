#include <iostream>
#include <string>
using namespace std;

int main()
{
string s;
int n,i;
cin>>s;
n=s.length();
if(n>=1&&n<=10000)
{
for(i=0;i<=n;i=i+3)
{
    cout<<s[i];
}
}
else
{
    cout<<"invalid value";
}
    return 0;
}
