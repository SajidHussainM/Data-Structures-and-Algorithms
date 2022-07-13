/*insertion sort works on the priciple of selecting a key and then comparing it with elements left of it if a element is found to be less than
greater than the key then it is shifted right by 1 position this happens for all the elements that are found to be greater than the key */

int main(){
      vector<int> a={3,2,4,5,1,6,9,7,8};
    int n=a.size();
    //selecting each element starting from 1st element and comparing with previous elements
   for(int i=1;i<n;i++){
       int key=a[i];
       int j=i-1;
       //comapring each element with the key and shifting if it is greater than the key
       while(a[j]>key && j>-1){
           a[j+1]=a[j];
           j--;
       }
       //the while loop exits at the element less than the key so the pointer is at element previous to empty position so j+1;
       a[j+1]=key;
   }


    for(auto ele:a){
        cout<<ele<<" ";
    }
   return 0;
}