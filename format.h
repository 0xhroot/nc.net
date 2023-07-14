#ifndef FORMAT_H
#define FORMAT_H

#include<iostream>
#include<cstdlib>
#include<string>
#include<chrono>
#include<thread>
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
    banner();
    cout << "  [*] Menu :-" << endl;
    cout << "      1. NMAP" << endl;
    cout << "      2. ARP-SCAN" << endl;
    cout << "      3. Traceroute" << endl;
    cout << "      4. Nikto" << endl;
    cout << "      5. TcpDump" << endl;
    cout << "      6. IFconfig(Cheak your local ip)" << endl;
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

//Traceroute information gathering tool
int trace(int a, string url, string command)
{
    if (a == 3)
    {
        banner();
        cout << "[*] Traceroute :- " << endl;
        cout << "Enter your url : ";
        cin >> url;
        banner();
        string command = "traceroute " + url;
        system(command.c_str());
        exit(0);
    }

    return 0;
}

int nito(int a)
{
    if ( a == 4)
    { 
        banner();
        cout << "[*] MENU :- " << endl;
        cout << endl;
        cout << "1. Scan a Domain " << endl;
        cout << "2. Scan a IP Adress" << endl;
        cout << "3. Scan Multiple IP Addresses From a Text File" << endl;
        cout << "4. Export Scan Results" << endl;
        cout << endl;
    }

    return 0;
}

void tcp (){
    banner();
    cout << "[*] Menu : " << endl;
    cout << endl;
    cout << "1. List Interface" << endl;
    cout << "2. Capturing packets" << endl; 
    cout << "3. Capturing packets with limit" << endl;
    cout << "4. Filtering packets by Host" << endl;
    cout << "5. Filtering packets by port " << endl;
    cout << "6. Filtering packets by Protocol" << endl;
    cout << "7. Filtering packets by Source IP/hostname" << endl;
    cout << endl;
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

//Nikto configs :- 
int n1(int a,int b, int c, string domain, string command)
{
    if(a == 4 && b == 1)
    {
        banner();
        cout << "Enter your Domain(eg:scanme.nmap.org) : ";   
        cin >> domain;

        banner();
        cout << "1. Simple Scan " << endl;
        cout << "2. Scan a Domain with SSL Enabled" << endl;
        cout << "Choose your option : ";
        cin >> c;

        if(c == 1)
        {
            banner();
            string command = "nikto -h " + domain;
            system(command.c_str());
            exit(0);
        }
        else if (c == 2)
        {
            banner();
            string command = "nikto -h " + domain + " --ssl";
            system(command.c_str());
            exit(0);
        }
        else
        {
        banner();
        cout << "Invalid Input :" << endl;
        exit(0);
        }
    }

    return 0;
}

int n2(int a, int b, string ip, string command)
{
    if( a == 4 && b == 2 )
    {
        banner();
        cout << "Enter your ip(45.33.32.156) : ";
        cin >> ip;
        
        banner();
        string command = "nikto -h " + ip;
        system(command.c_str());
        exit(0);
    }
    else
    {
        banner();
        cout << "Invalid Input :" << endl;
        exit(0);
    }

    return 0;
}

int n3(int a, int b, string text, string command)
{
    if( a == 4 && b == 3)
    {
        banner();
        cout << "[*] Scan Multiple IP Addresses From a Text File" << endl;
        cout << "Enter your text file location : ";
        cin >> text;
        
        banner();
        string command = "nikto -h " + text;
        system(command.c_str());
        exit(0);
    }
    else
    {
        banner();
        cout << "Invalid Input :" << endl;
        exit(0);
    }
    return 0;
}

int n4(int a, int b, string domain, string output, string format, string command)
{
    if( a == 4 && b == 4)
    {
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
    }
    else
    {
        banner();
        cout << "Invalid Input :" << endl;
        exit(0);
    }
    return 0;
}

int arp101(int a)
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

//Traceroute information gathering tool
int trace101(int a, string url, string command)
{
    if (a == 3)
    {
        banner();
        cout << "[*] Traceroute :- " << endl;
        cout << "Enter your url : ";
        cin >> url;
        banner();
        string command = "traceroute " + url;
        system(command.c_str());
        exit(0);
    }

    return 0;
}

int nito101(int a)
{
    if ( a == 4)
    { 
        banner();
        cout << "[*] MENU :- " << endl;
        cout << endl;
        cout << "1. Scan a Domain " << endl;
        cout << "2. Scan a IP Adress" << endl;
        cout << "3. Scan Multiple IP Addresses From a Text File" << endl;
        cout << "4. Export Scan Results" << endl;
        cout << endl;
    }

    return 0;
}

void tcp101(){
    banner();
    cout << "[*] Menu : " << endl;
    cout << endl;
    cout << "1. List Interface" << endl;
    cout << "2. Capturing packets" << endl; 
    cout << "3. Capturing packets with limit" << endl;
    cout << "4. Filtering packets by Host" << endl;
    cout << "5. Filtering packets by port " << endl;
    cout << "6. Filtering packets by Protocol" << endl;
    cout << "7. Filtering packets by Source IP/hostname" << endl;
    cout << endl;
}

int t1(int a, int b) 
{
    banner();
    cout << "[*] List of interfaces : " << endl;
    system("sudo tcpdump -D");
    exit(0);
    return 0;
}

int t2(int a, int b, string interface, std::string cmd) 
{
    banner();
    cout << "[*] Capturing Packets" << endl;
    cout << "Enter Interface name : ";
    cin >> interface;

    banner();
    cmd = "sudo tcpdump -i " + interface;
    system(cmd.c_str());
    exit(0);
    return 0;
}

int t3(int a, int b, string limit, string interface, std::string cmd) 
{
    banner();
    cout << "[*] Capturing Packets with limit" << endl;
    cout << "Enter Interface name : ";
    cin >> interface;
    cout << "Enter your limit : ";
    cin >> limit;

    banner();
    cmd = "sudo tcpdump -i " + interface + " -c" + limit;
    system(cmd.c_str());
    exit(0);
    return 0;
}

int t4(int a, int b, string limit, string host, string interface, std::string cmd) 
{
    banner();
    cout << "[*] Filtering packets by Host" << endl;
    cout << "Enter Interface name : ";
    cin >> interface;
    cout << "Enter your limit(5-10-20...): ";
    cin >> limit;
    cout << "Enter your host ip(54.204.39.132) : ";
    cin >> host;

    banner();
    cmd = "sudo tcpdump -i " + interface + " -c" + limit + " -nn host " + host;
    system(cmd.c_str());
    exit(0);
    return 0;
}

int t5(int a, int b, string limit, string por, string interface, std::string cmd) 
{
    banner();
    cout << "[*] Filtering packets by Port" << endl;
    cout << "Enter Interface name : ";
    cin >> interface;
    cout << "Enter your limit(5-10-20...): ";
    cin >> limit;
    cout << "Enter your port : ";
    cin >> por;

    banner();
    cmd = "sudo tcpdump -i " + interface + " -c" + limit + " -nn port " + por;
    system(cmd.c_str());
    exit(0);
}

int t6(int a, int b, string limit, string protocol, string interface, std::string cmd) 
{
    banner();
    cout << "[*] Filtering packets by Protocol" << endl;
    cout << "Enter Interface name : ";
    cin >> interface;
    cout << "Enter your limit(5-10-20...): ";
    cin >> limit;
    cout << "Enter your protocol : ";
    cin >> protocol;

    banner();
    cmd = "sudo tcpdump -i " + interface + " -c" + limit + " icmp";
    system(cmd.c_str());
    exit(0);
    return 0;
}

int t7(int a, int b, string limit, string hostname, string interface, std::string cmd)
{
    banner();
    cout << "[*] Filtering packets by Protocol" << endl;
    cout << "Enter Interface name : ";
    cin >> interface;
    cout << "Enter your limit(5-10-20...): ";
    cin >> limit;
    cout << "Enter your (hostname/source ip) : ";
    cin >> hostname;
    banner();
    
    cmd = "sudo tcpdump -i " + interface + " -c" + limit + " -nn src " + hostname;
    system(cmd.c_str());
    exit(0);
    return 0;
}

#endif