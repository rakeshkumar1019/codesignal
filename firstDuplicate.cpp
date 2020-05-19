int firstDuplicate(std::vector<int> a) {
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
