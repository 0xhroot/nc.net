#include "format.h"
#include <chrono>
#include <cstdlib>
#include <iostream>
#include <string>
#include <system_error>
#include <thread>

using namespace std;

int main() {
  int a, b, c, port, numeric_value, z;
  string ip, command, range, output, domain, ip_r, interface, mac, distro, url,
      text, format, cmd, limit, host, por, hostname, protocol;
  opt o;
  func2 f;
  o.banner();
  o.o1();
  cout << "  Choose your option : ";
  cin >> a;
  switch (a) {
  case 1:
    o.banner();
    f.nmap();
    break;
  case 2:
    o.banner();
    f.arp();
    break;
  case 3:
    o.banner();
    cout << "[*] Traceroute :- " << endl;
    cout << "Enter your url : ";
    cin >> url;
    o.banner();
    command = "traceroute " + url;
    system(command.c_str());
    exit(0);
    break;
  case 4:
    o.banner();
    f.nikto();
    break;
  case 5:
    o.banner();
    f.tcp();
    break;
  case 6:
    o.banner();
    system("ifconfig");
    exit(0);
    break;
  case 7:

    break;
  default:
    o.banner();
    std::cout << "Invalid Input~" << std::endl;
    std::cout << "GOODBYE~" << std::endl;
    exit(0);
  }
}
