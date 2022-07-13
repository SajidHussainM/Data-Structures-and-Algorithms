//works on the method of select the smallest element of the array and placing it at the first

int main(){
    vector<int> a={3,2,4,5,1,6,9,7,8};
    int n=a.size();
  
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[j]<a[i]){
                int temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
        
    }
    

    for(auto ele:a){
        cout<<ele<<" ";
    }
    return 0;
}