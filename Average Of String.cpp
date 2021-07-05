#include<bits/stdc++.h>
using namespace std;
int averageValue(string s)
{
	int sum_char = 0;

	// loop to sum the ascii
	// value of chars
	for (int i = 0; i < s.length(); i++)
	{
		sum_char += (int)s[i];
	}

	// Returning average of chars
	return sum_char / s.length();
}
int main()
 {
     int a;
     cin>>a;
     while(a--){
         string s;
         cin>>s;
         cout<<averageValue(s)<<endl;
     }
	//code
	return 0;
}