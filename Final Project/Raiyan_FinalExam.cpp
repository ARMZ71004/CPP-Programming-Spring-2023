/*
Atif Raiyan
May 22, 2023
program - fruits
*/
#include <iostream>
#include <string>
using namespace std;
void pickedFruit(int fruitSize, string pickedFruits[], string fruits[]) {
    srand(time(0));
    for (int i = 0; i < fruitSize; i++) {
        int index = rand() % fruitSize;
        pickedFruits[i] = fruits[index];
    }
}

void printFruits(int fruitSize, string pickedFruits[], string fruits[]) {
    cout << "Picked fruits: ";
    for (int i = 0; i < fruitSize; i++) {
        cout << pickedFruits[i] << "   ";
    }
    cout << endl;
}

int main() {
    char choice;
    do {
        int fruitSize = 5; 
        string fruits[fruitSize] = {"apple", "grapes", "orange","jackfruit", "mangoes"}; 
        string pickedFruits[fruitSize]; 
        pickedFruit(fruitSize, pickedFruits, fruits);
        printFruits(fruitSize, pickedFruits, fruits);

        cout << "Do you want another try? Enter 'a' or 'A' if yes: ";
        cin >> choice;

        if (choice != 'a' && choice != 'A') {
            break;
        }
        cout << "\n\n--------------------------------------------------\n\n";
    } while (true);

    return 0;
}
