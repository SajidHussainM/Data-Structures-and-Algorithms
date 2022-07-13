#include <iostream>
#include <vector>

int main(){
   int n;
    cin>>n;
    bool b=true;

    vector<int> a={2,3,4,5,6,7,8};

    for(int i=0;i<a.size();i++){
        if(a[i]==n){
            cout<<"Element "<<n<<" is present and it is at position "<<i+1;
            b=false;
        }
    }

    if(b){
        cout<<"Element not Present";
    }
        
    
    return 0;
}