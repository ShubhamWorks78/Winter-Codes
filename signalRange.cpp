#include <iostream>
#include<algorithm>
#include<stack>
#include <stdio.h>
#include <math.h>
#include <fstream>
using namespace std;
int main()
{
	int arr[1000000];
       int n;
       cin>>n;
       while(n!=0)
       {

           int l;

           cin>>l;
           int i;
                 for(i=0;i<l;i++)
           {  
               cin>>arr[i];     
           }
           int *sp=new int[l];  
           stack<int> st;   
           sp[0]=1;                
           st.push(0);
           for(i=1;i<l;i++)
           {
               while(!st.empty() && ar[st.top()]<=ar[i])
               {
                   st.pop();              
				}
               if(st.empty())
                   sp[i]=i+1;          
               else
                   sp[i]=i-st.top();   
               st.push(i);
           }

       for(int i=0;i<l;i++)
       {

           cout<<sp[i]<<" "; 
       }
           cout<<"\n";
           n--;
       }

}
