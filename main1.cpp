#include<iostream>
#include<cstdlib>
#include<string>
#include "format1.h"
using namespace std;
int main () {
    int a;
    string interface,cmd,host,protocol,limit,hostname,port;
    banner();
    tcp();
    cout << "Choose your option : ";
    cin >> a;
    switch(a){
        case 1:
            t1(a);
        break;
        case 2:
            t2(a,interface,cmd);
        break;
        case 3:
            t3(a,limit,interface,cmd);
        break;
        case 4:
            t4(a,limit,host,interface,cmd);
        break;
        case 5:
            t5(a,limit,port,interface,cmd);
        break;
        case 6:
            t6(a,limit,protocol,interface,cmd);
        break;
        case 7:
            t7(a,limit,hostname,interface,cmd);
        break;
        default:
            banner();
            cout << "Invalid Input !" << endl;
            exit(0);
        break;
    }
return 0;
}