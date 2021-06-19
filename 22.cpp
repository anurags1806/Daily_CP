#include <bits/stdc++.h>
using namespace std;
   vector <int> commonElements (int A[], int B[],int C[], int n1, int n2,int n3)
        {
            vector<int> v;
            int i=0,j=0,k=0;
            vector<int>::iterator it;
    
            while(i<n1&&j<n2&&k<n3){
                if(A[i]==B[j]&&B[j]==C[k]){
                    v.push_back(A[i]);
                    i++;
                    j++;
                    k++;
                    
                }
                else if(A[i]<B[j])
                    i++;
                else if(B[j]<C[k])
                    j++;
                    else
                    k++;
            }
            it=unique(v.begin(),v.end());
             v.resize(distance(v.begin(), it));
             
          return v;  
            
        }

int main()
{
    int n,m,o;
    cin>>n>>m>>o;
    int a[n];
    int b[m];
    int c[o];
    for (int i = 0; i < n; ++i)
         {
            cin>>a[i];
         }     
         for (int i = 0; i < m; ++i)
         {
            cin>>b[i];
         }    
          for (int i = 0; i < o; ++i)
         {
            cin>>c[i];
         }     
    vector<int> ans;
    ans=commonElements(a,b,c,n,m,o);
    for (int i = 0; i<ans.size(); ++i)
    {
    cout <<ans[i]<<" ";
        
    }
    
    return 0;
}
