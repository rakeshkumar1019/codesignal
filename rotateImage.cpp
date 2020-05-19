#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>  rotateImage( vector<vector<int>>  a){
       vector<vector<int>> b;
       for(int i=0;i<a.size();i++){
         vector<int> temp;
           for(int j=0;j<a[i].size();j++){
               temp.push_back(a[j][i]); 
             
           }
           b.push_back(temp);
        }  
        for(int i=0;i<b.size();i++){
         reverse(b[i].begin(),b[i].end());
       }
      return b;
}
int main(){
  int row,col;
  cout<<"enter row col"<<endl;
  cin>>row>>col;
  cout<<"row"<<row<<":"<<"col"<<col<<endl;
  vector<vector<int>> a;
    
  for(int i=0;i<row;i++){
      vector<int> temp;
    for(int j=0;j<col;j++){
         int tempVal;
         cin>>tempVal;
         temp.push_back(tempVal);

    }
    a.push_back(temp);
  }
   a=rotateImage(a);


   for(int i=0;i<a.size();i++){
    for(int j=0;j<a[i].size();j++){
      cout<<a[i][j]<<" ";
    }
    cout<<endl;
  }
   
 
}
