#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  scanf("%d",&t);
  while(t--)
  {
      int i,n,k,tmp;
      scanf("%d %d",&n,&k);
      list<int> li;
      list<int>::iterator it;
      for(i=0;i<n;i++)
      {
      	int val;
          scanf("%d",&val);
          li.push_back(val);
      }
      for(it=li.begin();it!=li.end();)
      {
          int var=*(li.begin());
          if(k==0)
              break;
          int val=*it;
          it++;
          int vam=*it;
          if(val>=vam)
              continue;
          else
          {
              it -= 1;
              li.erase(it);
              int vaa=*it;
              if(var!=vaa)
                  it -= 1;
              else
                  it=li.begin();
              k--;
          }
      }
      if(k!=0)
      {
          for(int i=0;i<k;++i)
              li.pop_back();
      }
      for(it=li.begin();it!=li.end();++it)
          printf("%d ",*(it));
      printf("\n");
  }
  return 0;
}
