#include<bits/stdc++.h>
using namespace std;
unsigned bitCount(unsigned int n)
{
   return (int)log2(n)+1;
}
int toggle(int n, int b)
{
   return (n^(1<<(b-1)));
}
int toggle2(int n, int b1, int b2)
{
   return ((n^(1<<(b1-1)))^(1<<(b2-1)));
}

int main()
{ int t; 
  cin>>t;

  while(t--)
 {  unsigned int n; 
    cin>>n;
    int c=bitCount(n);

    if(c%2!=0) // Odd number of digits in your binary number, toggle the mid bit at c/2+1 position.
    cout<<toggle(n, c/2+1);
    else // Even number of digits, toggle the two middle bits at c/2
    cout<<toggle2(n, c/2+1, c/2);

    cout<<"\n"; // Use \n instead of endl since it invokes an unnecessary call to std::flush()
 }
   return 0;
}