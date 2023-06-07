#include <bits/stdc++.h>
using namespace std;

class mai
{
public:
    int a;
    int b;
    int c;
};

int getdeterminant(int a11,int a12,int a21,int a22)
{
    int temp=(a11*a22)-(a12*a21);
    return temp;
}
int getx(int a11,int a12,int a21,int a22)
{
    int temp=(a11*a22)-(a12*a21);
    return temp;
}
int gety(int a11,int a12,int a21,int a22)
{
    int temp=-(a12*a21)+(a11*a22);
    return temp;
}

int main()
{
    int n;
    cin >> n;
    mai a[n];
    
    for (int i = 0; i < n; i++)
    {
        cin>>a[i].a;
        cin>>a[i].b;
        cin>>a[i].c;
    }
    int d=getdeterminant(a[0].a,a[0].b,a[1].a,a[1].b);
    int x=getx(a[0].c,a[0].b,a[1].c,a[1].b)/d;
    int y=gety(a[0].a,a[0].c,a[1].a,a[1].c)/d;
    cout<<"Value of X: "<<x<<" and"<<" Value of Y: "<<y<<endl;
    return 0;
}