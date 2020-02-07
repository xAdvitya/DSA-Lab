#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"enter the elements of the array"<<endl;
    cin>>n;
    int arr[n];

    cout<<"enter array elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   cout<<"enter array elements"<<endl; 
   int pos=0;
   
for(int i=0;i<n-1;i++){
     int min = arr[i];
    for(int j=i+1;j<n;j++){
        if(min > arr[j]){
            min = arr[j];
            pos = j; 
        }
        int temp = arr[i];
        arr[i] = min;
        arr[pos] = temp;
    }
}

for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}

}