#ifndef FORMAT_H
#define FORMAT_H
#include <chrono>
#include <cstdlib>
#include <iostream>
#include <string>
#include <thread>

using namespace std;

void timer() {
  std::chrono::milliseconds sleepDuration(
      200); // 0.01 seconds = 10 milliseconds
  std::this_thread::sleep_for(sleepDuration);
}

class opt {
public:
  opt();
  opt(opt &&) = default;
  opt(const opt &) = default;
  opt &operator=(opt &&) = default;
  opt &operator=(const opt &) = default;
  ~opt();
  void banner();
  void o1();
};
opt::opt() {}
opt::~opt() {}
void opt::banner() {
  system("clear");
  cout << endl;
  cout << "  ███╗  ██╗ █████╗    ███╗  ██╗███████╗████████╗\n";
  timer();
  cout << "  ████╗ ██║██╔══██╗   ████╗ ██║██╔════╝╚══██╔══╝\n";
  timer();
  cout << "  ██╔██╗██║██║  ╚═╝   ██╔██╗██║█████╗     ██║   \n";
  timer();
  cout << "  ██║╚████║██║  ██╗   ██║╚████║██╔══╝     ██║   \n";
  timer();
  cout << "  ██║ ╚███║╚█████╔╝██╗██║ ╚███║███████╗   ██║   \n";
  timer();
  cout << "  ╚═╝  ╚══╝ ╚════╝ ╚═╝╚═╝  ╚══╝╚══════╝   ╚═╝   \n";
  timer();
  cout << endl;
}
void opt::o1() {
  cout << "  [*] Menu :-" << endl;
  cout << "      1. NMAP" << endl;
  cout << "      2. ARP-SCAN" << endl;
  cout << "      3. Traceroute" << endl;
  cout << "      4. Nikto" << endl;
  cout << "      5. TcpDump" << endl;
  cout << "      6. IFconfig(Cheak your local ip)" << endl;
  cout << "      7. Update your system" << endl;
}
class func2 : public opt {
public:
  func2();
  func2(func2 &&) = default;
  func2(const func2 &) = default;
  func2 &operator=(func2 &&) = default;
  func2 &operator=(const func2 &) = default;
  ~func2();
  void nmap();
  void arp();
  int trace(int a, string url, string command);
  void nikto();
  void tcp();
};
func2::func2() {}
func2::~func2() {}
void func2::nmap() {
  cout << "[*] Menu :- " << endl;
  cout << "    1. Simple scan" << endl;
  cout << "    2. Scan a Range of IP Address" << endl;
  cout << "    3. Port Scanning" << endl;
  cout << "    4. Ping Scan Using Nmap(list device running on that subnet)"
       << endl;
  cout << "    5. Saving the Nmap Scan Output to a File" << endl;
  cout << "    6. Most Popular Ports Scanning" << endl;
  cout << "    7. Exclude Host/IP Addresses for the Scan" << endl;
  cout << "    8. Service Version Detection" << endl;
  cout << endl;
}
void func2::arp() {
  cout << "[*] Menu :- " << endl;
  cout << endl;
  cout << "1. Local Scan " << endl;
  cout << "2. MSC Scan" << endl;
  cout << "3. Subnet scan" << endl;
  cout << "4. All In One Scan" << endl;
  cout << endl;
}
void func2::nikto() {
  cout << "[*] MENU :- " << endl;
  cout << endl;
  cout << "1. Scan a Domain " << endl;
  cout << "2. Scan a IP Adress" << endl;
  cout << "3. Scan Multiple IP Addresses From a Text File" << endl;
  cout << "4. Export Scan Results" << endl;
  cout << endl;
}
void func2::tcp() {
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
#endif
