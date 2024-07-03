#include <iostream>
using namespace std;

int max(int currentSquare, int totalSquares, int maxJump, int hopScotch[], int storedMax[]){
    int maxValue = 0;
    for (int i = 0; i < maxJump; i++){
        if (currentSquare + i + 1 < totalSquares){
            int currentValue;
            if (storedMax[currentSquare + i + 1] == 0){
                storedMax[currentSquare + i + 1] = max(currentSquare + i + 1, totalSquares, maxJump, hopScotch, storedMax);
            }
            currentValue = (i + 1) * hopScotch[currentSquare + i + 1] + storedMax[currentSquare + i + 1];
            if (maxValue < currentValue){
                maxValue = currentValue;
            }
        }
    }
    return maxValue;
}

int main(){
    int squareNumber;
    int jumpMax;

    std::cin >> squareNumber;
    std::cin >> jumpMax;

    int hopScotch[1000];
    int storedMax[1000] = {0};

    for (int i = 0; i < squareNumber; i++){
        int newSquare;
        std::cin >> newSquare;
        hopScotch[i] = newSquare;
    }
    int maxScore = max(-1, squareNumber, jumpMax, hopScotch, storedMax);
    std::cout << maxScore;
}