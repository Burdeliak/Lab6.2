#include <iostream>
#include <ctime>  
#include <iomanip> 
using namespace std;

const int SIZE = 10;  


void COUT(int mas[], int size, int i = 0) {
    if (i == size) {
        cout << endl;
        return;
    }
    cout << setw(4) << mas[i] << " ";
    COUT(mas, size, i + 1);
}

// Функція для підрахунку кількості непарних елементів
int CountOddElements(int mas[], int size, int i = 0) {
    if (i == size) return 0;
    return ((mas[i] % 2 != 0) ? 1 : 0) + CountOddElements(mas, size, i + 1);
}


int SumOddElements(int mas[], int size, int i = 0) {
    if (i == size) return 0;
    return ((mas[i] % 2 != 0) ? mas[i] : 0) + SumOddElements(mas, size, i + 1);
}

int main() {
    srand((unsigned)time(0));  
    setlocale(LC_CTYPE, "ukr");  

    int a[SIZE]{};  

    
    for (int i = 0; i < SIZE; i++) {
        a[i] = rand() % 100;  
    }

    
    cout << "Початковий масив: " << endl; // Виведення початкового масиву
    COUT(a, SIZE);

    
    int sumOdd = SumOddElements(a, SIZE); // Підрахунок кількості та суми непарних елементів
    int countOdd = CountOddElements(a, SIZE);

    
    if (countOdd > 0) {
        cout << "Середнє арифметичне непарних елементів: " << (double)sumOdd / countOdd << endl;
    }
    else {
        cout << "Непарних елементів немає." << endl;
    }

    return 0;
}
