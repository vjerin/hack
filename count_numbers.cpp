#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,x,j;
    string str;
    cin>>n;
    for(i=0;i<n;i++)
    {
        int count=0;
        cin>>x;
        cin>>str;
        for(j=0;j<x;j++)
        {
            if(str[j]>=48 && str[j]<=57)
            {
                count++;
                while(j<x)
                {
                    j++;
                    if(str[j]<48 || str[j]>57)
                        {j--;
                        break;}
                }
            }
        }
        cout<<count<<endl;
    }
}
