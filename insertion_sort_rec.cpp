#include <iostream>
using namespace std;
void insertion_sort(int* a, int len);
void insertion_sort_rec(int* a, int len);
int main(){
    int a[5]={80,5,2,3,6};
    for (int x=0; x<5; x++){
        cout<<a[x]<<" " ;
    }
    insertion_sort_rec(a, 5);
    cout<<endl;
    for (int x=0; x<5; x++){
        cout<<a[x]<<" " ;
    }
}
void insertion_sort(int* a, int len){
    for (int j=1; j<len;j++){
        int key=a[j];
        int i=j-1;
        while (i>=0 && a[i]>key){
            a[i+1]=a[i];
            i=i-1;
        }
        a[i+1]=key;
    }
}
void insertion_sort_rec(int* a, int len){
    if (len==0 || len==1){
        return;
    }

    insertion_sort_rec(a, len-1);
    int key=a[len-1];
    int i=len-2;
    while (i>=0 && a[i]>key){
        a[i+1]=a[i];
        i=i-1;
    }
    a[i+1]=key;

}

