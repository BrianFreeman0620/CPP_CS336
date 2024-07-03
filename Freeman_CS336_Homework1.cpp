#include <iostream>
using namespace std;

int summation(int number, int first, int second, int third, int fourth, int fifth, int sixth, int list1[], int list2[], int list3[], int list4[], int list5[], int list6[]){
    int sum;
    int val1 = 0;
    int val2 = 0;
    int val3 = 0;
    int val4 = 0;
    int val5 = 0;
    int val6 = 0;
    switch (number){
        case 6:
        val6 = list6[sixth];
        case 5:
        val5 = list5[fifth];
        case 4:
        val4 = list4[fourth];
        case 3:
        val3 = list3[third];
        case 2:
        val2 = list2[second];
        default:
        val1 = list1[first];
        break;
    }
    if (val1 + val2 + val3 + val4 + val5 + val6 < 9001){
        sum = val1 + val2 + val3 + val4 + val5 + val6;
    }
    else{
        sum = -1;
    }
    return sum;
}

int main(){
    int topics;
    int topic1Values[10];
    int topic1Inputs = 0;
    int topic2Values[10];
    int topic2Inputs = 0;
    int topic3Values[10];
    int topic3Inputs = 0;
    int topic4Values[10];
    int topic4Inputs = 0;
    int topic5Values[10];
    int topic5Inputs = 0;
    int topic6Values[10];
    int topic6Inputs = 0;

    // std::cout <<"Input an integer of topics from 1 to 6: " << endl;
    std::cin >> topics;

    switch (topics){
        case 6: 
        // std::cout <<"Input an integer of number of questions from 1 to 10 for topic: " << endl;
        std::cin >> topic6Inputs;
        for (int i = 0; i < topic6Inputs; i++){
            int currentInput;
            // std::cout <<"Input hardness for question: " << endl;
            std::cin >> currentInput;
            topic6Values[i] = currentInput;
        }
        case 5:
        // std::cout <<"Input an integer of number of questions from 1 to 10 for topic: " << endl;
        std::cin >> topic5Inputs;
        for (int i = 0; i < topic5Inputs; i++){
            int currentInput;
            // std::cout <<"Input hardness for question: " << endl;
            std::cin >> currentInput;
            topic5Values[i] = currentInput;
        }
        case 4:
        // std::cout <<"Input an integer of number of questions from 1 to 10 for topic: " << endl;
        std::cin >> topic4Inputs;
        for (int i = 0; i < topic4Inputs; i++){
            int currentInput;
            // std::cout <<"Input hardness for question: " << endl;
            std::cin >> currentInput;
            topic4Values[i] = currentInput;
        }
        case 3:
        // std::cout <<"Input an integer of number of questions from 1 to 10 for topic: " << endl;
        std::cin >> topic3Inputs;
        for (int i = 0; i < topic3Inputs; i++){
            int currentInput;
            // std::cout <<"Input hardness for question: " << endl;
            std::cin >> currentInput;
            topic3Values[i] = currentInput;
        }
        case 2:
        // std::cout <<"Input an integer of number of questions from 1 to 10 for topic: " << endl;
        std::cin >> topic2Inputs;
        for (int i = 0; i < topic2Inputs; i++){
            int currentInput;
            // std::cout <<"Input hardness for question: " << endl;
            std::cin >> currentInput;
            topic2Values[i] = currentInput;
        }
        case 1:
        // std::cout <<"Input an integer of number of questions from 1 to 10 for topic: " << endl;
        std::cin >> topic1Inputs;
        for (int i = 0; i < topic1Inputs; i++){
            int currentInput;
            // std::cout <<"Input hardness for question: " << endl;
            std::cin >> currentInput;
            topic1Values[i] = currentInput;
        }
        break;
    }
    int maxHardness = -1;
    for (int i = 0; i < topic1Inputs + 1; i ++){
        for (int j = 0; j < topic2Inputs + 1; j ++){
            for (int k = 0; k < topic3Inputs + 1; k ++){
                for (int l = 0; l < topic4Inputs + 1; l ++){
                    for (int m = 0; m < topic5Inputs + 1; m ++){
                        for (int n = 0; n < topic6Inputs + 1; n ++){
                            if (!((i == topic1Inputs && i > 0)||(j == topic2Inputs && j > 0)||(k == topic3Inputs && k > 0)||(l == topic4Inputs && l > 0)||(m == topic5Inputs && m > 0)||(n == topic6Inputs && n > 0))){
                                int currentSum = summation(topics, i, j, k, l, m, n, topic1Values, topic2Values, topic3Values, topic4Values, topic5Values, topic6Values);
                                if (maxHardness < currentSum){
                                    maxHardness = currentSum;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    std::cout << maxHardness;

}