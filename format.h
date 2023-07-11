#ifndef FORMAT_H
#define FORMAT_H

#include<iostream>
#include<cstdlib>
#include<string>
#include"banner.h"

using namespace std;

void enter()
{
    cout << "Press Enter to continue :";
    std::cin.ignore();
}

//first layer

void options()
{
    cout << "  [*] Menu :-" << endl;
    cout << "      1. NMAP" << endl;
    cout << "      2. ARP-SCAN" << endl;
    //cout << "      3." << endl;
    //cout << "      4." << endl;
    //cout << "      5." << endl;
    cout << "      6. IFconfig" << endl;
    cout << "      7. Update your system" << endl;
}

//second layer :-

int nmap(int a)
{
    if( a==1){
        system("clear");
        banner();
        cout << "[*] Menu :- " << endl;
        cout << "    1. Simple scan" << endl;
        cout << "    2. Scan a Range of IP Address" << endl;
        cout << "    3. Port Scanning" << endl;
        cout << "    4. Ping Scan Using Nmap(list device running on that subnet)" << endl;
        cout << "    5. Saving the Nmap Scan Output to a File" << endl;
        cout << "    6. Most Popular Ports Scanning" << endl;
        cout << "    7. Exclude Host/IP Addresses for the Scan" << endl;
        cout << "    8. Service Version Detection" << endl;
        cout << endl;
    }else{
        exit(0);
    }
    return 0;
}

int arp(int a)
{
    if(a==2)
    {
        banner();
        cout << "[*] Menu :- " << endl;
        cout << endl;
        cout << "1. Local Scan " << endl;
        cout << "2. MSC Scan" << endl;
        cout << "3. Subnet scan" << endl;
        cout << "4. All In One Scan" << endl;
        cout << endl;
    }
    else
    {
        banner();
        cout << "Invalid Input :" << endl;
        exit(0);
    }
    return 0;
}

int ifconf(int a){
    if ( a == 6)
    {
        banner();
        system("ifconfig");
        exit(0);
    }
    else
    {
        cout << "Invalid Input :- " << endl;
        exit(0);
    }
    return 0;
}

int upgrade(int a, string distro){
    if(a==7){
        banner();
        cout << "Enter your distro name(arch/debian) : ";
        cin >> distro;
        if(distro == "arch"){
            system("sudo pacman -Syu");
            exit(0);
        }else if(distro == "debian"){
            system("sudo apt-get update -y");
            system("sudo apt-get dist-upgrade -y");
            exit(0);
        }else{
            banner();
            cout << "Invalid input :" << endl;
        }
        return 0;
    }
    return 0;
}

//third layer 

int nop1(int a, int b, string ip, string command) 
{
    if (a == 1 && b == 1) 
    {
        banner();
        std::cout << "[*] Simple scan :" << std::endl;
        cout << "Enter an IP address : ";
        cin >> ip;
        banner();

        std::string command = "nmap " + ip;
        cout << "command : " << command << endl;
        cout << endl;
        int result = system(command.c_str());
        exit(0);
    }
    else 
    {
        banner();
        cout << "Invalid option" << endl;
    }
    return 0;
}

int nop2(int a, int b, string ip, string range, string command) 
{
    if (a == 1 && b == 2) 
    {
        banner();
        cout << "[*] Scan a Range of IP Address :" << std::endl;
        cout << "Aim: To scan the entire IP range..." << endl;
        cout << "Enter an IP address : ";
        cin >> ip;
        cout << "Enter range : ";
        cin >> range;
        banner();

        string command = "nmap " + ip + "/" + range;
        cout << "command : " << command << endl;
        cout << endl;
        int result = system(command.c_str());
        exit(0);
    }
    else 
    {
        banner();
        cout << "Invalid option" << endl;
    }
    return 0;
}

int nop3(int a, int b, int port, string ip, string command) 
{
    if (a == 1 && b == 3) 
    {
        banner();
        cout << "[*]Port Scanner :-" << endl;
        cout << "Aim: To scan a specific port or entire port range..." << endl;
        cout << "Enter an IP address : ";
        cin >> ip;
        cout << "Enter port number : ";
        cin >> port;
        banner();

        std::string command = "nmap -p " + std::to_string(port) + " " + ip;
        cout << "command : " << command << endl;
        cout << endl;
        int result = system(command.c_str());
        exit(0);
    }
    else 
    {
        banner();
        cout << "Invalid option" << endl;
    }
    return 0;
}

int nop4(int a, int b, string ip, string command) 
{
    if (a == 1 && b == 4) 
    {
        banner();
        cout << "[*] Ping Scan Using Nmap:-" << endl;
        cout << "Aim: Host detection..." << endl;
        cout << "Enter an IP address (192.168.2.1/24): ";
        cin >> ip;
        banner();

        std::string command = "nmap -sP " + ip;
        cout << "command : " << command << endl;
        cout << endl;
        int result = system(command.c_str());
        exit(0);
    }
    else 
    {
        banner();
        cout << "Invalid option" << endl;
    }
    return 0;
}

int nop5(int a, int b, int c, string output, string domain, string command) 
{
    if (a == 1 && b == 5) 
    {
        banner();
        cout << "Aim: To save the result of the Nmap scan to a file or XML." << endl;
        cout << "[*]Saving the Nmap Scan Output to a File" << endl;
        cout << endl;

        cout << "1. text file" << endl;
        cout << "2. XML file" << endl;
        cout << "Choose youe option :";
        cin >> c;

        if(c==1)
        {
            banner();
            cout << "Enter text file name : ";
            cin >> output;
            cout << "Enter ip/domain/url (eg- example.com): ";
            cin >> domain;
            banner();

            string command = "nmap -oN " + output + ".txt " + domain;
            cout << "command : " << command << endl;
            cout << endl;
            int result = system(command.c_str());
            exit(0);
        }
        else if(c==2)
        {
            banner();
            cout << "Enter Output file name : ";
            cin >> output;
            cout << "Enter ip/domain/url (eg- example.com): ";
            cin >> domain;
            banner();

            string command = "nmap -oX " + output + ".xml " + domain;
            cout << "command : " << command << endl;
            cout << endl;
            int result = system(command.c_str());
            exit(0);
        }
        else
        {
            cout << "Invalid Input :-" << endl;
            exit(0);
        }
    }
    else 
    {
        banner();
        cout << "Invalid option" << endl;
    }
    return 0;
}

int nop6(int a, int b, int numeric_value, string ip, string command) 
{
    if (a == 1 && b == 6) 
    {
        banner();
        cout << "[*] Most Popular Ports Scanning:-" << endl;
        cout << "Aim: To scan the fixed number of most popular ports..." << endl;
        cout << "Enter a number to scan the top ports : ";
        cin >> numeric_value;
        cout << "Enter (ip/domain) : ";
        cin >> ip;
        banner();

        std::string command = "nmap -top-ports " + std::to_string(numeric_value) + " " + ip;
        cout << "command : " << command << endl;
        cout << endl;
        int result = system(command.c_str());
        exit(0);
    }
    else 
    {
        banner();
        cout << "Invalid option" << endl;
    }
    return 0;
}

int nop7(int a, int b, string ip, string ip_r, string command) 
{
    if (a == 1 && b == 7) 
    {
        banner();
        cout << "[*] Exclude Host/IP Addresses for the Scan" << endl;
        cout << "Aim: To exclude the host/IP addresses for the scan." << endl;
        cout << "Enter ip address with range (eg-192.168.1.1/24): ";
        cin >> ip_r;
        cout << "Enter your ip (eg-192.168.1.101) :";
        cin >> ip;
        banner();

        std::string command = "nmap " + ip_r + " --exclude " + ip;
        cout << "command : " << command << endl;
        cout << endl;
        int result = system(command.c_str());
        exit(0);
    }
    else 
    {
        banner();
        cout << "Invalid option" << endl;
    }
    return 0;
}

int nop8(int a, int b, string ip, string command) 
{
    if (a == 1 && b == 8) 
    {
        banner();
        cout << "[*] Service Version Detection" << endl;
        cout << "Aim: Detection of services." << endl;
        cout << "Enter your ip :";
        cin >> ip;
        banner();

        std::string command = "nmap -sV " + ip;
        cout << "command : " << command << endl;
        cout << endl;
        int result = system(command.c_str());
        exit(0);
    }
    else 
    {
        banner();
        cout << "Invalid option" << endl;
    }
    return 0;
}

//ARP_SCAN

int arp1(int a, int b)
{
    if(a == 2 && b == 1 )
    {
        banner();
        system("sudo arp-scan -l");
        exit(0);
    }
    else
    {
        banner();
        cout << "Invalid Input :- " << endl;
    }
    return 0;
}

int arp2(int a, int b)
{
    if(a == 2 && b == 2)
    {
        banner();
        system("sudo arp-scan -a");
        exit(0);
    }
    else
    {
        banner();
        cout << "Invalid Input :- " << endl;
        exit(0);
    }
    return 0;
}

int arp3(int a, int b, string ip, string command )
{
    if(a == 2 && b == 3)
    {
        banner();
        cout << "Enter your ip with port (eg:-192.168.1.1/24) : ";
        cin >> ip;
        string command = "sudo arp-scan " + ip;
        banner();
        system(command.c_str());
        exit(0);
    }
    else
    {
        banner();
        cout << "Invalid Input :- " << endl;
        exit(0);
    }
    return 0;
}

int arp4(int a, int b, string interface, string mac, string ip, string command) 
{
    if (a == 2 && b == 4) 
    {
        banner();
        cout << "Enter your Interface: ";
        cin >> interface;
        cout << "Enter MAC address: ";
        cin >> mac;
        cout << "Enter your IP (e.g., 192.168.0.1/24): ";
        cin >> ip;
        banner();
        string command = "sudo arp-scan -I " + interface + " --srcaddr=" + mac + " " + ip;
        system(command.c_str());
        exit(0);
    }
    else 
    {
        banner();
        cout << "Invalid Input" << endl;
        exit(0);
    }
    return 0;
}

//



#endif