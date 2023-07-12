#include<iostream>
#include<cstdlib>
#include<string>

#include"format.h"
#include"banner.h"
#include"colortext.h"

using namespace std;

int main() {
    int a,b,c,port,numeric_value,z;
    string ip,command,range,output,domain,ip_r,interface,mac,distro,url,text,format;

    banner();
    options();

    cout << "  Choose your option : ";
    cin >> a;

    if(a==1)
    {
        nmap(a);

        cout << "Choose your option :";
        cin >> b;

        switch (b){
            case 1:
                nop1(a,b,ip,command);
            break;

            case 2:
                nop2(a,b,ip,range,command);
            break;

            case 3:
                nop3(a,b,port,ip,command);
            break;

            case 4:
                nop4(a,b,ip,command);
            break;

            case 5:
                nop5(a,b,c,output,domain,command);
            break;

            case 6:
                nop6(a,b,numeric_value,ip,command);
            break;

            case 7:
                nop7(a,b,ip_r,ip,command);
            break;

            case 8:
                nop8(a,b,ip,command);
            break;

            default:
                banner();
                cout << "Invalid ARP option" << endl;
                exit(0);
        }

    }
    else if(a==2)
    {
        arp(a);

        cout << "Choose your option :";
        cin >> b;

        switch (b)
        {
            case 1:
                arp1(a,b);
            break;

            case 2:
                arp2(a,b);
            break;

            case 3:
                arp3(a,b,ip,command);
            break;

            case 4:
                arp4(a,b,interface,mac,ip,command);
            break;

            default:
                banner();
                cout << "Invalid Input :-" << endl;
                exit(0);
        }
    }else if (a == 3){
        trace(a,url,command);
        exit(0);
    }
    else if ( a == 4){
        nito(a);
        cout << "Choose your option :";
        cin >> b;
        switch (b){
            case 1:
                n1(a,b,c,domain,command);
            break;
            case 2:
                n2(a,b,ip,command);
            break;
            case 3:
                n3(a,b,text,command);
            break;
            case 4:
                n4(a,b,domain,output,format,command);
            break;
            default:
                banner();
                cout << "Invalid Input : " << endl;
                exit(0);
        }
        exit(0);
    }
    else if ( a == 6 )
    {
        ifconf(a);
        enter();
    }
    else if ( a == 7 ){
        upgrade(a,distro);
    }
    else
    {
        banner();
        cout << "Invalid Input :-" << endl;
        exit(0);
    }
    return 0;
}