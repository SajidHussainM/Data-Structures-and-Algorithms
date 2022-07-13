#include <iostream>

int main(){
    vector<int> a={1,2,3,4,5,6,7,8,9,10};
    int ele;
    cin>>ele;
    int low=0,high=a.size()-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(a[mid]==ele){
            cout<<"Element found out at "<<mid+1;
            break;
        }
        else if(a[mid]<ele){
            low=mid+1;
        }
        else if(a[mid]>ele){
            high=mid-1;
        }
    }
    return 0;
}