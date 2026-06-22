# include<iostream>
using namespace std;
int main(){
    int arr[5]={65,76,98,9,76};
    for(int i=0;i<=4;i++){
     cout<<"arr. element is:"<<arr[i]<<"   "<<endl;

    }
    for(int j=4;j>=0;j--){
        cout<<"reverse array element is:"<<arr[j]<<endl;
    }
    int key=76;
    for(int k=0;k<=4;k++){
        if (arr[k]==key){
            cout<<"key value index is:"<<k<<endl;
        }
    }
    cout<<"size of arr is:"<<sizeof(arr);
    return 0;
}
