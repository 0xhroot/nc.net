#include <algorithm>
#include <chrono>
#include <cstdlib>
#include <functional>
#include <iostream>
#include <thread>
void timer(void) {
  std::chrono::milliseconds sleepDuration(200);
  std::this_thread::sleep_for(sleepDuration);
}

class op {
public:
  op();
  op(op &&) = default;
  op(const op &) = default;
  op &operator=(op &&) = default;
  op &operator=(const op &) = default;
  ~op();
  void timer();
  void banner();
  void options();
};

op::op() {
  std::chrono::milliseconds sleepDuration(200);
  std::this_thread::sleep_for(sleepDuration);
}

op::~op() {
  // Destructor implementation (if needed) should be added here.
}

void op::timer() {
  std::chrono::milliseconds sleepDuration(200);
  std::this_thread::sleep_for(sleepDuration);
}

void op::options() {
  std::cout << " Main Menu :- " << std::endl;
  std::cout << "  1.Install all required packages(arch).." << std::endl;
  std::cout << "  2.Install all required packages(debian)" << std::endl;
  std::cout << "  3.Update your system..(arch)" << std::endl;
  std::cout << "  4.Update your system(debian).." << std::endl;
  std::cout << "  5.Exit" << std::endl;
}
class func : public op {
public:
  func();
  func(func &&) = default;
  func(const func &) = default;
  func &operator=(func &&) = default;
  func &operator=(const func &) = default;
  void ban();
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
void func::ban() {
  system("clear");
  std::cout << std::endl;
  std::cout << "  ███╗  ██╗ █████╗    ███╗  ██╗███████╗████████╗\n";
  timer();
  std::cout << "  ████╗ ██║██╔══██╗   ████╗ ██║██╔════╝╚══██╔══╝\n";
  timer();
  std::cout << "  ██╔██╗██║██║  ╚═╝   ██╔██╗██║█████╗     ██║   \n";
  timer();
  std::cout << "  ██║╚████║██║  ██╗   ██║╚████║██╔══╝     ██║   \n";
  timer();
  std::cout << "  ██║ ╚███║╚█████╔╝██╗██║ ╚███║███████╗   ██║   \n";
  timer();
  std::cout << "  ╚═╝  ╚══╝ ╚════╝ ╚═╝╚═╝  ╚══╝╚══════╝   ╚═╝   \n";
  timer();

  std::cout << std::endl;
}
void func::o1() {
  ban();
  std::cout << "Installing Required packages for arch based linux..."
            << std::endl;
  system("sudo pacman -S nmap traceroute nikto tcpdump arp-scan");
  std::cout << "All packages are installed if any error occure pls install "
               "manually...\n GOODBYE!"
            << std::endl;
  exit(0);
}
void func::o2() {
  ban();
  std::cout << "Installing Required packages for debian based linux"
            << std::endl;
  system("sudo apt-get install nmap arp-scan traceroute nikto tcpdump");
  std::cout << "All packages are Installed if any error occure pls install it "
               "manually...\n GOODBYE!"
            << std::endl;
  exit(0);
}
void func::o3() {
  ban();
  system("sudo pacman -Syu");
  system("sudo pacman -Scc");
  exit(0);
}
void func::o4() {
  ban();
  system("sudo apt-get update");
  system("sudo apt-get upgrade");
  exit(0);
}
void func::o5() {
  ban();
  std::cout << "  GOODBYE~" << std::endl;
  exit(0);
}

int main(int argc, char *argv[]) {
  int a;
  op t1;
  func f1;
  t1.options();
  std::cout << "Enter your option : ";
  std::cin >> a;
  switch (a) {
  case 1:
    f1.o1();
    break;
  case 2:
    f1.o2();
    break;
  case 3:
    f1.o3();
    break;
  case 4:
    f1.o4();
    break;
  case 5:
    f1.o5();
    break;
  default:
    std::cout << "Invalid Input..." << std::endl;
    exit(0);
    break;
  }
}
