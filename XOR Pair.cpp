#include<bits/stdc++.h>
using namespace std;
void xorP(int arr[], int n, int x)
{
	int result = 0; 

	unordered_set<int> s;

	for (int i=0; i<n ; i++)
	{
		
		if (s.find(x^arr[i]) != s.end())
			result++;

		
		s.insert(arr[i]);
	}

	if(result>0){
	    cout<<"Yes"<<endl;
	}
	else
	{
	    cout<<"No"<<endl;
	}
}
int main()
 {
	//code
	int a;
	cin>>a;
	while(a--){
	    int n,c;
	    cin>>n>>c;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    xorP(arr,n,c);
	}
	return 0;
}