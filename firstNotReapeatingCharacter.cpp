#include<iostream>
#include<bits/stdc++.h>
using namespace std; 

char firstNotRepeatingCharacter(string s){
  int n=s.length();
  map<char,int> m;
  map<char,int> mm;
  for(int i=0;i<n;i++){
    if(mm[s[i]]>=1){
         mm[s[i]]+=1;
    }else{
      mm[s[i]]=1;
    }
  }
   


  for(int i=0;i<n;i++){
       if(m[s[i]]>0){
        continue;
       }
       m[s[i]]=i+1;
  }
int min=INT_MAX;
char res='_';
  for (auto x : mm) {
          if(x.second==1){
           int curr_min=m[x.first];
           if(curr_min<min){
             min=curr_min;
             res=x.first;
           }
          }
  }
  return res;
   
}

int main(){
  string s;
  cin>>s;
   cout<<firstNotRepeatingCharacter(s)<<endl;
}
