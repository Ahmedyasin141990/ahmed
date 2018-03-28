#include <iostream>
#include<cmath>

using namespace std;

int main()
{



    int i;
    int x;
    cout<<"enter the power"<<endl;
    cin >>x;
    cout<<endl;
    cout<<"e^"<<x<<":"<<exp(x)<<endl;
    double h;
    double c=1;

    double m=1;

    for(i=1;i<=100;i++){
        for( h=i;h>1;h--){
            m*=h;
            break;




        }
        c+=(pow(x,i))/m;
        cout<<c<<"/"<<" ";







    }


    return 0;
}
