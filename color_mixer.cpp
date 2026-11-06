#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;

int main() {
    const int COLOR_SIZE = 20;

    char first_color[COLOR_SIZE];
    char second_color[COLOR_SIZE];

    cout << "Enter the first color: ";
    cin >> setw(COLOR_SIZE) >> first_color;

    cout << "Enter the second color: ";
    cin >> setw(COLOR_SIZE) >> second_color;

    if ((strcmp(first_color, "red") != 0 &&
         strcmp(first_color, "blue") != 0 &&
         strcmp(first_color, "yellow") != 0) ||
        (strcmp(second_color, "red") != 0 &&
         strcmp(second_color, "blue") != 0 &&
         strcmp(second_color, "yellow") != 0)) {

        cout << "Error: enter red, blue, or yellow." << endl;
    }
    else if (strcmp(first_color, second_color) == 0) {
        cout << "The resulting color is: " << first_color << endl;
    }
    else if ((strcmp(first_color, "red") == 0 &&
              strcmp(second_color, "blue") == 0) ||
             (strcmp(first_color, "blue") == 0 &&
              strcmp(second_color, "red") == 0)) {

        cout << "The resulting color is: purple" << endl;
    }
    else if ((strcmp(first_color, "red") == 0 &&
              strcmp(second_color, "yellow") == 0) ||
             (strcmp(first_color, "yellow") == 0 &&
              strcmp(second_color, "red") == 0)) {

        cout << "The resulting color is: orange" << endl;
    }
    else {
        cout << "The resulting color is: green" << endl;
    }

    return 0;
}
