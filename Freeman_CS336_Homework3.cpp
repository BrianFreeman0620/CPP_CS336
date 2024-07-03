#include <iostream>
using namespace std;

int main(){
    int students;
    int online;
    int notifications;
    string allRead = "NO";
    string plus = "+";

    std::cin >> students;
    std::cin >> online;
    std::cin >> notifications;

    int maxOnline = online + 0;
    char currentNotification;

    for (int i = 0; i < notifications; i++){
        if (online == students){
            allRead = "YES";
        }
        std::cin >> currentNotification;
        if (currentNotification == plus.at(0)){
            maxOnline += 1;
            online += 1;
        }
        else{
            online -= 1;
        }
    }
    if (!(allRead == "YES") && (maxOnline >= students)){
        if (online == students){
            allRead = "YES";
        }
        else{
            allRead = "MAYBE";
        }
    }
    std::cout << allRead.c_str();
};