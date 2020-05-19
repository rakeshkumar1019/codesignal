#include<bits/stdc++.h>
#include<map>
#include<iostream>
using namespace std;
int firstDuplicate(vector<int> a){
  map<int,int> m;
 int n=a.size();
 for(int i=0;i<n;i++){
   if(m[a[i]]==1){
     return a[i];
   }
     m[a[i]]=1;
 }
 return -1;
}
int main(){
  int n;
  cin>>n;
  vector<int> a;
  for(int i=0;i<n;i++){
    int temp;
    cin>>temp;
    a.push_back(temp);
  }
  cout<<firstDuplicate(a)<<endl;
  


}
