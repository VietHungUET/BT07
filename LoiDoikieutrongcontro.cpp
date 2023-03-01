#include<bits/stdc++.h>
using namespace std;
int main(int argc, const char*argv[])
{
 char a='a';
 char *p1=&a;
 int*p2=(int*)p1;
 *p2='b';
 cout<<*p1;

}
