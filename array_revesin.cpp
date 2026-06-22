# include<iostream>
using namespace std;
int main(){
    int arr[5]={76,87,98,54,6};
    for(int i=1;i<=5;i++){
        cout<<arr[i-1]<<"   "<<endl;
    }
    for(int k=4;k>=0;k--){
        cout<<arr[k]<<"   ";
    }
    int key=98;
    for(int j=0;j<5;j++){
        if(arr[j]==98){
            cout<<"key index is :"<<j<<endl;
        }
    }
    int sumeven=0;
    int oddsum=0;
    for(int a=0;a<5;a++){
        if(arr[a]%2==0){
            sumeven=sumeven+arr[a];
        }
    }
       cout<<"sum of even no present in array:"<<sumeven<<endl;
        
    
    for(int b=0;b<5;b++){
        if(arr[b]%2!=0){
            oddsum=oddsum+arr[b];
        }
    }
    
        cout<<"sum of odd elements present in array:"<<oddsum<<endl;
    
    cout<<"size of array:"<<sizeof(arr)<<endl;
    cout<<"sum of all the elements present in the array:"<<sumeven+oddsum<<endl;
    return 0;
}