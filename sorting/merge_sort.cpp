#include<iostream>
using namespace std;
void merge_sort(int arr[],int l,int r);
void merge(int arr[],int l,int r,int m);

void merge(int arr[],int l,int m,int r){

int j=m+1,i=l,ind=l;
int A[r+1];

while(i<=m && j<=r){
    if(arr[i]<arr[j]){
        
        A[ind++] = arr[i++];
    }
    else
    {
        A[ind++] = arr[j++];
    }
 

for(;j<=r;j++){
    A[ind++] = arr[j];
}

for(;i<=m;i++){
    A[ind++] = arr[i];
}

for(int i=l;i<=r;i++){
    arr[i] = A[i]; 
    }
}
}

void merge_sort(int arr[],int l,int r){

if(r>l){

int m = (l+r)/2;
merge_sort(arr,l,m);
merge_sort(arr,m+1,r);
merge(arr,l,m,r);
}

}

int main(){
    int n=5;
    cout<<"Enter array size"<<endl;
    cin>>n;
    int arr[n] = {2,4,6,7,1};

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    merge_sort(arr,0,5);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}