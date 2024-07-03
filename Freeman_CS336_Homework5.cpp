#include <iostream>
using namespace std;
 
int main() {
    int appetizerTotal;
    int plateAmount;
    int minimumPrice;
 
    std::cin >> appetizerTotal;
    std::cin >> plateAmount;
 
    int appPerPlate[1000];
    int pricePerPlate[1000];
    int dp[2001];
 
    for (int i = 0; i < plateAmount; i++) {
        int currentPlate;
        std::cin >> currentPlate;
        appPerPlate[i] = currentPlate;
    }
    for (int i = 0; i < plateAmount; i++) {
        int currentPrice;
        std::cin >> currentPrice;
        pricePerPlate[i] = currentPrice;
    }
    for (int i = 1; i <= appetizerTotal * 2; i++){
        dp[i] = 1000000;
    }
    dp[0] = 0;
    for (int i = 1; i < appetizerTotal * 2; i++) {
        for (int j = 0; j < plateAmount; j++) {
            if (i >= appPerPlate[j]) {
                if (dp[i] > dp[i - appPerPlate[j]] + pricePerPlate[j]){
                    dp[i] = dp[i - appPerPlate[j]] + pricePerPlate[j];
                }
            }
        }
    }
    int minValue = dp[appetizerTotal];
    for (int i = appetizerTotal; i < appetizerTotal * 2; i++){
        if (minValue > dp[i]){
            minValue = dp[i];
        }
    }
    std::cout << minValue;
}