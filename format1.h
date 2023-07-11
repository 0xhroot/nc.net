#ifndef FORMAT_H
#define FORMAT_H
#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;
void banner(){
    system("clear");
    cout << "███╗   ██╗ ██████╗   ███████╗██╗  ██╗███████╗\n";
    cout << "████╗  ██║██╔════╝   ██╔════╝╚██╗██╔╝██╔════╝\n";
    cout << "██╔██╗ ██║██║        █████╗   ╚███╔╝ █████╗  \n";
    cout << "██║╚██╗██║██║        ██╔══╝   ██╔██╗ ██╔══╝  \n";
    cout << "██║ ╚████║╚██████╗██╗███████╗██╔╝ ██╗███████╗\n";
    cout << "╚═╝  ╚═══╝ ╚═════╝╚═╝╚══════╝╚═╝  ╚═╝╚══════╝\n";
    cout << endl;                                   
}
void nito(){
    banner();
    cout << "[*] MENU :- " << endl;
    cout << "1. Scan a Domain " << endl;
    cout << "2. Scan a IP Adress" << endl;
    cout << "3. Scan Multiple IP Addresses From a Text File" << endl;
    cout << "4. Export Scan Results" << endl;
    cout << endl;
}
int n1(int a, int b, string domain, string command){
    if(a==1){
        banner();
        cout << "Enter your Domain(eg:scanme.nmap.org) : ";   
        cin >> domain;
        banner();
        cout << "1. Simple Scan " << endl;
        cout << "2. Scan a Domain with SSL Enabled" << endl;
        cout << "Choose your option : ";
        cin >> b;
        if(b==1){
            banner();
            string command = "nikto -h " + domain;
            system(command.c_str());
            exit(0);
        }else if (b==2){
            banner();
            string command = "nikto -h " + domain + " --ssl";
            system(command.c_str());
            exit(0);
        }else{
        banner();
        cout << "Invalid Input :" << endl;
        exit(0);
        }
    }
    return 0;
}
int n2(int a, string ip, string command){
    if(a==2){
        banner();
        cout << "Enter your ip(45.33.32.156) : ";
        cin >> ip;
        banner();
        string command = "nikto -h " + ip;
        system(command.c_str());
        exit(0);
    }else{
        banner();
        cout << "Invalid Input :" << endl;
        exit(0);
    }
    return 0;
}
int n3(int a, string text, string command){
    if(a==3){
        banner();
        cout << "[*] Scan Multiple IP Addresses From a Text File" << endl;
        cout << "Enter your text file location : ";
        cin >> text;
        banner();
        string command = "nikto -h " + text;
        system(command.c_str());
        exit(0);
    }else{
        banner();
        cout << "Invalid Input :" << endl;
        exit(0);
    }
    return 0;
}
int n4(int a, string domain, string output, string format, string command){
    if(a==4){
        banner();
        cout << "[*] Export Scan Results" << endl;
        cout << "Enter your domain : ";
        cin >> domain;
        cout << "Enter your output file name : ";
        cin >> output;
        cout << "Enter your file extension(html,csv,sql,txt,xml) : ";
        cin >> format;
        banner();
        string command = "nikto -h " + domain + " -o " + output + " -Format " + format ;
        system(command.c_str());
        exit(0);
    }else{
        banner();
        cout << "Invalid Input :" << endl;
        exit(0);
    }
    return 0;
}
#endif