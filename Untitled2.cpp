#include <iostream>
#include <string>
#define pupil 5

int main() {
    std::string pupilName[pupil];
    float firstWeight[pupil];
    float lastWeight[pupil];
    float weightDiff[pupil];

    std::cout << "Enter the name and weight of pupils in the first term\n";
    for (int i = 0; i < pupil; i++) {
        std::cout << "Name of student " << i + 1 << ": ";
        std::cin >> pupilName[i];

        std::cout << "Weight of student " << i + 1 << " in first term: ";
        std::cin >> firstWeight[i];

        std::cout << "\n";
    }

    std::cout << "\n--------------------------------\n";

    std::cout << "Enter the weight of pupils in the last term\n";
    for (int i = 0; i < pupil; i++) {
        std::cout << "Weight of student " << i + 1 << " in last term: ";
        std::cin >> lastWeight[i];
        std::cout << "\n";
    }


    for (int i = 0; i < pupil; i++) {
        weightDiff[i] = lastWeight[i] - firstWeight[i];
    }

    std::cout << "\n--------------------------------\n";


    for (int i = 0; i < pupil; i++) {
        std::cout <<pupilName[i] << "has weigh difference "<<weightDiff[i]<<": ";
        if (weightDiff[i] > 2.5) {
            std::cout << "Rise in weight\n";
        } else if (weightDiff[i] < -2.5) {
            std::cout << "Fall in weight\n";
        } else {
            std::cout << "Same weight\n";
        }
    }

    return 0;



    for (int i = 0; i < pupil; i++) {
        weightDiff[i] = lastWeight[i] - firstWeight[i];
    }

    std::cout << "\n--------------------------------\n";


    for (int i = 0; i < pupil; i++) {
        std::cout <<pupilName[i] << "has weigh difference "<<weightDiff[i]<<": ";
        if (weightDiff[i] > 2.5) {
            std::cout << "Rise in weight\n";
        } else if (weightDiff[i] < -2.5) {
            std::cout << "Fall in weight\n";
        } else {
            std::cout << "Same weight\n";
        }
    }

    return 0;
}
