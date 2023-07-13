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

int t1(int a) {
    banner();
    cout << "[*] List of interfaces : " << endl;
    system("sudo tcpdump -D");
    exit(0);
    return 0;
}
int t2(int a, string interface, std::string cmd) {
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
int t3(int a, string limit, string interface, std::string cmd) {
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
int t4(int a, string limit, string host, string interface, std::string cmd) {
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
int t5(int a, string limit, string port, string interface, std::string cmd) {
    banner();
    cout << "[*] Filtering packets by Port" << endl;
    cout << "Enter Interface name : ";
    cin >> interface;
    cout << "Enter your limit(5-10-20...): ";
    cin >> limit;
    cout << "Enter your port : ";
    cin >> port;
    banner();
    cmd = "sudo tcpdump -i " + interface + " -c" + limit + " -nn port " + port;
    system(cmd.c_str());
    exit(0);
}
int t6(int a, string limit, string protocol, string interface, std::string cmd) {
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
int t7(int a, string limit, string hostname, string interface, std::string cmd) {
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
