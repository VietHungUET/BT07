#include<bits/stdc++.h>
using namespace std;
int main(int argc, const char* argv[])
{
  int a=20,b=25,c=30;
  const int*pa=&a;// con trỏ tới hằng vì vậy không thể thay đổi giá trị của a vì lúc này a là hằng
  int*const pb=&b;// hằng con trỏ nên ko thể thay đổi giá trị của pb bới lúc này pb là hằng
  const int* const pc=&c; // hằng con trỏ tới int không thể thay đổi cả giá trị của pc cũng nhưu giá trị của c


}
