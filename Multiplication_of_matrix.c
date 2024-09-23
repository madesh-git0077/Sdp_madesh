#include <iostream>
using namespace std;
int main() {
    // Write C code here
    int a[5][5],b[5][5],c[5][5],r1,c1,r2,c2,i,j,k;
    cout<<"Enter the rows and cols of matrix A: ";
    cin>>r1>>c1;
    cout<<"Enter the rows and cols of matrix B: ";
    cin>>r2>>c2;
    if(r2==c1) {
        cout<<"Enter the A matrix value: \n";
        for(i=0;i<r1;i++) {
            for(j=0;j<c1;j++) {
                cin>>a[i][j];
            }
        }
        cout<<"Enter the B matrix value: \n";
        for(i=0;i<r2;i++) {
            for(j=0;j<c2;j++) {
                cin>>b[i][j];
            }
        }
        for(i=0;i<r1;i++) {
            for(j=0;j<c2;j++) {
                c[i][j]=0;
                for(k=0;k<c1;k++) {
                    c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
                }
            }
        }
        cout<<"Multiplied matrix: \n";
        for(i=0;i<r1;i++) {
            for(j=0;j<c2;j++) {
                cout<<c[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    else 
    cout<<"Multiplication is not possible, try again!\n";
    return 0;
}
