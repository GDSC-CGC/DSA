#include<bits/stdc++.h>

using namespace std;

int main()
{
  int arr1[1000], arr2[1000], conArr[2000];
  
	int n1, n2;
  
  int i, x;
  
  cout<<"Enter the Size for First Array : ";
  
  cin>>n1;
  
  cout<<endl;
  
  cout<<"Enter elements for First Array : ";
  
  for(i=0; i<n1; i++)
  {
    cin>>arr1[i];
     
    conArr[i] = arr1[i];
  }
  
   x = i;
  
  cout<<endl;
  
   cout<<"Enter the Size for Second Array : ";
  
   cin>>n2;

   cout<<endl;
  
   cout<<"Enter elements for Second Array : ";
  
   for(i=0; i<n2; i++)
   {
      cin>>arr2[i];
      
      conArr[x] = arr2[i];
      
      x++;
   }
  
  cout<<endl;
  
   cout<<"Array after concatenation : ";
  
   for(i=0; i<x; i++)
   {
      cout<<conArr[i]<<" ";
   }
  
   return 0;
  
}
