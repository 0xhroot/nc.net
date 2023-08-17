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
  cout << "      7. Install Requirements " << endl;
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
class func : public opt {
public:
  func();
  func(func &&) = default;
  func(const func &) = default;
  func &operator=(func &&) = default;
  func &operator=(const func &) = default;
  void options();
  void o1();
  void o2();
  void o3();
  void o4();
  void o5();
  ~func();
};
func::func() {}
func::~func() {
  // Destructor implementation (if needed) should be added here.
}
void func::options() {
  std::cout << " Main Menu :- " << std::endl;
  std::cout << "  1.Install all required packages(arch).." << std::endl;
  std::cout << "  2.Install all required packages(debian)" << std::endl;
  std::cout << "  3.Update your system..(arch)" << std::endl;
  std::cout << "  4.Update your system(debian).." << std::endl;
  std::cout << "  5.Exit" << std::endl;
}
void func::o1() {
  std::cout << "Installing Required packages for arch based linux..."
            << std::endl;
  system("sudo pacman -S nmap traceroute nikto tcpdump arp-scan");
  std::cout << "All packages are installed if any error occure pls install "
               "manually...\n GOODBYE!"
            << std::endl;
  exit(0);
}
void func::o2() {
  std::cout << "Installing Required packages for debian based linux"
            << std::endl;
  system("sudo apt-get install nmap arp-scan traceroute nikto tcpdump");
  std::cout << "All packages are Installed if any error occure pls install it "
               "manually...\n GOODBYE!"
            << std::endl;
  exit(0);
}
void func::o3() {
  system("sudo pacman -Syu");
  system("sudo pacman -Scc");
  system("rm -rf ~/cache");
  exit(0);
}
void func::o4() {
  system("sudo apt-get update");
  system("sudo apt-get upgrade");
  system("rm -rf ~/.cache");
  exit(0);
}
void func::o5() {
  std::cout << "  GOODBYE~" << std::endl;
  exit(0);
}

class nmap : public opt {
public:
  nmap();
  nmap(nmap &&) = default;
  nmap(const nmap &) = default;
  nmap &operator=(nmap &&) = default;
  nmap &operator=(const nmap &) = default;
  void nop1(string ip, string connamd, int result);
  void nop2(string ip, string range, string command);
  void nop3(string ip, int port, string command);
  void nop4(string ip, string command);
  void nop5(int c, string output, string domain, string command);
  void nop6(int numeric_value, string ip, string command);
  void nop7(string ip, string ip_r, string command);
  void nop8(string ip, string command);
  ~nmap();
};

nmap::nmap() {}
void nmap::nop1(string ip, string command, int result) {
  std::cout << "[*] Simple scan :" << std::endl;
  cout << "Enter an IP address : ";
  cin >> ip;
  opt::banner();
  command = "nmap " + ip;
  cout << "command : " << command << endl;
  cout << endl;
  result = system(command.c_str());
  exit(0);
}
void nmap::nop2(string ip, string range, string command) {
  cout << "[*] Scan a Range of IP Address :" << std::endl;
  cout << "Aim: To scan the entire IP range..." << endl;
  cout << "Enter an IP address : ";
  cin >> ip;
  cout << "Enter range : ";
  cin >> range;
  command = "nmap " + ip + "/" + range;
  cout << "command : " << command << endl;
  cout << endl;
  int result = system(command.c_str());
  exit(0);
}
void nmap::nop3(string ip, int port, string command) {
  cout << "[*]Port Scanner :-" << endl;
  cout << "Aim: To scan a specific port or entire port range..." << endl;
  cout << "Enter an IP address : ";
  cin >> ip;
  cout << "Enter port number : ";
  cin >> port;
  command = "nmap -p " + std::to_string(port) + " " + ip;
  cout << "command : " << command << endl;
  cout << endl;
  int result = system(command.c_str());
  exit(0);
}
void nmap::nop4(string ip, string command) {
  cout << "[*] Ping Scan Using Nmap:-" << endl;
  cout << "Aim: Host detection..." << endl;
  cout << "Enter an IP address (192.168.2.1/24): ";
  cin >> ip;
  command = "nmap -sP " + ip;
  cout << "command : " << command << endl;
  cout << endl;
  int result = system(command.c_str());
  exit(0);
}
void nmap::nop5(int c, string output, string domain, string command) {
  cout << "Aim: To save the result of the Nmap scan to a file or XML." << endl;
  cout << "[*]Saving the Nmap Scan Output to a File" << endl;
  cout << endl;
  cout << "1. text file" << endl;
  cout << "2. XML file" << endl;
  cout << "Choose youe option :";
  cin >> c;
  if (c == 1) {
    cout << "Enter text file name : ";
    cin >> output;
    cout << "Enter ip/domain/url (eg- example.com): ";
    cin >> domain;
    command = "nmap -oN " + output + ".txt " + domain;
    cout << "command : " << command << endl;
    cout << endl;
    int result = system(command.c_str());
    exit(0);
  } else if (c == 2) {
    cout << "Enter Output file name : ";
    cin >> output;
    cout << "Enter ip/domain/url (eg- example.com): ";
    cin >> domain;
    string command = "nmap -oX " + output + ".xml " + domain;
    cout << "command : " << command << endl;
    cout << endl;
    int result = system(command.c_str());
    exit(0);
  } else {
    cout << "Invalid Input :-" << endl;
    exit(0);
  }
}
void nmap::nop6(int numeric_value, string ip, string command) {
  cout << "[*] Most Popular Ports Scanning:-" << endl;
  cout << "Aim: To scan the fixed number of most popular ports..." << endl;
  cout << "Enter a number to scan the top ports : ";
  cin >> numeric_value;
  cout << "Enter (ip/domain) : ";
  cin >> ip;
  command = "nmap -top-ports " + std::to_string(numeric_value) + " " + ip;
  cout << "command : " << command << endl;
  cout << endl;
  int result = system(command.c_str());
  exit(0);
}
void nmap::nop7(string ip, string ip_r, string command) {
  cout << "[*] Exclude Host/IP Addresses for the Scan" << endl;
  cout << "Aim: To exclude the host/IP addresses for the scan." << endl;
  cout << "Enter ip address with range (eg-192.168.1.1/24): ";
  cin >> ip_r;
  cout << "Enter your ip (eg-192.168.1.101) :";
  cin >> ip;
  command = "nmap " + ip_r + " --exclude " + ip;
  cout << "command : " << command << endl;
  cout << endl;
  int result = system(command.c_str());
  exit(0);
}
void nmap::nop8(string ip, string command) {
  cout << "[*] Service Version Detection" << endl;
  cout << "Aim: Detection of services." << endl;
  cout << "Enter your ip :";
  cin >> ip;
  command = "nmap -sV " + ip;
  cout << "command : " << command << endl;
  cout << endl;
  int result = system(command.c_str());
  exit(0);
}
nmap::~nmap() {}

#endif
