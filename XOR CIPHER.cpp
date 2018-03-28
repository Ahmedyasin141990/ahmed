#include <iostream>
#include <string>
#include <bitset>
#include <istream>
#include<sstream>


using namespace std;
int main ()
{


    cout<<"Welcome to cipher or decipher programme"<<endl;





    string myString;
    cout<<"enter msg"<<endl;
    getline(cin,myString);
    string key;
    cout<<"enter key:"<<endl;
    cin>>key;
    for(int i = 0; i < myString.size(); ++i){
        int k=myString[i];

       for(int j = 0; j < key.size(); ++j){
                int w=key[j];

                int m=k^w;
                char t = m+64;

                cout<<t;






        }
     }






}



