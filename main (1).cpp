#include <iostream>
#include <array>
#include <cstdlib>
using namespace std;

int main() {
    int myArray[100];
    int x,y;
    float z;
    for (int i=0;i<100 ;i++) {
        myArray[i]=0;
    }
    for (int j=1;j<=6000000 ;j++) {
        x=rand()%100;
        z=float(x)/100;
        y=z*100;
        myArray[y]++ ;
    }
    float u=1;
    while (u>=1 || u<0) {
        cout<<"Please enter a number in range(0.00,0.99)"<<endl;
        cin>>u;
    }
    int q=u*100;
    cout<<"It's : "<<myArray[q]<<"--"<<u<<endl;
    return 0;
}