#ifndef BANNER_H
#define BANNER_H

#include<iostream>
#include<cstdlib>
#include <chrono>
#include <thread>

using namespace std;

void timer(){

    std::chrono::milliseconds sleepDuration(200); // 0.01 seconds = 10 milliseconds
    std::this_thread::sleep_for(sleepDuration);
}

void banner()
{
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
#endif
