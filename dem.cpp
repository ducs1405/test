#include<iostream>

using namespace std;
int doitat() {
    int dem = 0;
    array a = [10 20 20 10 10 30 50 10 20];
    for(int i = 1, i < a.lenght, i++) {
        if(a[i]==" " && a[i-1]!=" " && a[i+1]!=" ") {
            dem++;
        }
    }
    return dem;
}
int main() {
    cout<<"So luong chu so cua so nguyen la: "<<doitat()+1<<endl;
}