#include<bits/stdc++.h>
using namespace std;
int* weird_sum(int a,int b)
{
int c;
c=a+b;
return &c;

}
int main(int argc, const char* argv[])
{
int a,b;
cin>>a>>b;
cout<<weird_sum(a,b);

}
