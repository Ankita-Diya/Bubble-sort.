#include <iostream>
using namespace std;
int Bubble_sort(int arr[],int n){
    for(int i=n-1;i>=0;i--){
        for(int j=0;j<=i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }
}
int main() {
  int n;
  cin>>n;
  int arr[n];

  for(int i=0;i<n;i++)
    cin>>arr[i];
  cout<<"array element before sort:"<<endl;
  for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
  Bubble_sort(arr,n);
  cout<<"Array element after sort:";
  cout<<endl;
  for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
  return 0;
}
