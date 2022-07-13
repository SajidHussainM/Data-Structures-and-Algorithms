#include <iostream>
using namespace std;

int main(){
    vector<int> arr={2,9,1,6,5,3,8,4,7,0};
    int n=arr.size();
    // n-1 is used because suppose an array has 5 elements the loop runs 4 times the array is sorted at 3 only for 4th time it runs for checking
    for(int i=0;i<n-1;i++){
        //n-i-1 is used because after each execution of first for loop the biggest element is placed at the end and -1 is for the comparison of i       //i and i+1
        for(int j=0;j<n-i-1;j++){
            int temp;
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

    for(auto ele:arr){
        cout<<ele<<" ";
    }
    return 0;
}