#include <iostream>
#include <cmath>

using namespace std;

// Вывод фамилии и имени студента
void printStudentName() {
    cout << "Glukhov Sergey" << endl;
}

// Решение квадратного многочлена ax^2 + bx + c = 0
void solveQuadratic(double a, double b, double c) {
    // Все коэффициенты равны нулю - корень любой
    if (a == 0 && b == 0 && c == 0) {
        cout << "Any real number is a root" << endl;
        return;
    }

    // Линейное уравнение bx + c = 0
    if (a == 0) {
        if (b == 0) {
            cout << "No roots" << endl;   // c != 0
        } else {
            cout << "Root: " << -c / b << endl;
        }
        return;
    }

    // Квадратное уравнение
    double discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        double x1 = (-b + sqrt(discriminant)) / (2 * a);
        double x2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "Two roots: " << x1 << " and " << x2 << endl;
    } else if (discriminant == 0) {
        cout << "One root: " << -b / (2 * a) << endl;
    } else {
        cout << "No real roots" << endl;
    }
}

// Запрос двух чисел и вывод наибольшего
void findMaxOfTwo() {
    double first, second;
    cout << "Enter two numbers: ";
    cin >> first >> second;

    cout << "Max: " << (first > second ? first : second) << endl;
}

int main() {
    double a, b, c;
    char symbol;

    cout << "Enter coefficients a, b, c: ";
    cin >> a >> b >> c;

    cout << "Enter symbol: ";
    cin >> symbol;

    if (symbol == 'E') {
        printStudentName();
    } else if (symbol == 'p') {
        solveQuadratic(a, b, c);
    } else if (symbol == 'h') {
        findMaxOfTwo();
    } else {
        cout << "Unknown symbol" << endl;
    }

    return 0;
}
