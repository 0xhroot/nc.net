#include "format.h"
#include <algorithm>
#include <chrono>
#include <cstdlib>
#include <iostream>
#include <string>
#include <system_error>
#include <thread>

using namespace std;

int main() {
  int a, b, c, result, port, numeric_value, z;
  string ip, command, range, output, domain, ip_r, interface, mac, distro, url,
      text, format, cmd, limit, host, por, hostname, protocol;
  opt o;
  func f1;
  func2 f;
  nmap n;
  o.banner();
  o.o1();
  cout << "  Choose your option : ";
  cin >> a;
  switch (a) {
  case 1:
    o.banner();
    f.nmap();
    std::cout << "Choose your option : ";
    std::cin >> b;
    switch (b) {
    case 1:
      o.banner();
      n.nop1(ip, command, result);
      break;
    case 2:
      o.banner();
      n.nop2(ip, range, command);
      break;
    case 3:
      o.banner();
      n.nop3(ip, port, command);
      break;
    case 4:
      o.banner();
      n.nop4(ip, command);
      break;
    case 5:
      o.banner();
      n.nop5(c, output, domain, command);
      break;
    case 6:
      o.banner();
      n.nop6(numeric_value, ip, command);
      break;
    case 7:
      o.banner();
      n.nop7(ip, ip_r, command);
      break;
    case 8:
      o.banner();
      n.nop8(ip, command);
      break;
    default:
      std::cout << "Invalid Input!..." << std::endl;
      exit(0);
    }
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
    o.banner();
    f1.options();
    std::cout << "Choose your option : ";
    int b;
    std::cin >> b;
    switch (b) {
    case 1:
      o.banner();
      f1.o1();
      int b;
      std::cout << "Choose your option : ";
      std::cin >> b;
      switch (b) {
      case 1:
        o.banner();
        f1.o1();
        break;
      case 2:
        o.banner();
        f1.o2();
        break;
      case 3:
        o.banner();
        f1.o3();
        break;
      case 4:
        o.banner();
        f1.o4();
        break;
      case 5:
        o.banner();
        f1.o5();
        break;
      default:
        std::cout << "Invalid Input!..." << std::endl;
        std::cout << "~GOODBYE!" << std::endl;
        exit(0);
      }
      break;
    default:
      o.banner();
      std::cout << "Invalid Input~" << std::endl;
      std::cout << "GOODBYE~" << std::endl;
      exit(0);
    }
  }
}
