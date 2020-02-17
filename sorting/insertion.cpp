#include<iostream>
using namespace std;

int main(){

int n;
cout<<"Enter number of elements"<<endl;

cin>>n;

int arr[n];

cout<<"Enter array elements"<<endl;
for(int i=0;i<n;i++){
    cin>>arr[i];
}

for(int i=1;i<n;i++){

int key = arr[i];

int j=i-1;

while(j>=0 && key<arr[j]){
    arr[j+1] = arr[j];
    j= j-1;
}
arr[j+1] = key;
}

cout<<"elements of array are "<<endl;

for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}

}