#include<iostream>
#include<cstdlib>
#include<string>
#include "format1.h"
using namespace std;
int main () {
    int a,b;
    string ip,command,text,domain,output,format;
    banner();
    nito();
    cout << "Choose your option : ";
    cin >> a;
    if(a==1){
        n1(a,b,domain,command);
    }else if (a == 2) {
        n2(a,ip,command);
    }else if (a == 3) {
        n3(a,text,command);
    }else if (a == 4) {
        n4(a,domain,output,format,command);
    }else{
        banner();
        cout << "Invalid input :" << endl;
    }
return 0;
}