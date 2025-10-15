#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	long int t;
	cin >> t;
	while(t--)
	{
	    long int n,m;
	    cin >> n >> m;
	    long int a[n];
	    long long total=0;
	    long int b[m]={0};
	    
	    for(int i=0;i<n;i++)
	    {
	        cin >> a[i];
	    }
	    
	    for(int i=0;i<n;i++)
	    {
	        total+=a[i];
	    }
	    
	    for(int i=0;i<n;i++)
	    {
	        int con=(m-a[i]) % m;
	        b[con]++;
	    }
	    
	   // for(int i=0;i<m;i++)
	   // cout << b[i] << " " ;
	   // cout <<endl;
	   
	   
	   long long temp=total;
	   
	   for(int i=1;i<m;i++)
	   {
	       temp = temp + n;
	       temp = temp - ((b[i])*m);
	       total=min(total,temp);
	       
	   }
	   
	   cout << total << endl;
	   
	   
	    
	}

}
