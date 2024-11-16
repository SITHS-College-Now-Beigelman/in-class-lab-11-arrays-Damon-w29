// Damon Wu 
// 11/15/2024
// Lab - 11 

#include <iostream>  
#include <cstdlib>   
#include <ctime>     

using namespace std;

int main() {
    const int ARRAY_SIZE = 50;  // Declares constant for array size
    double alpha[ARRAY_SIZE];  // Declares an array of 50 double numbers

    // Creates the array, the first number in the array, and the reference nuber is 5
    for (int i = 0; i < ARRAY_SIZE; i++) {
    alpha[0] = 5;
        if (i < 25) {                       // if i is less than 25, the number outputed is the reference multiplied by itself
            alpha[i] = alpha[0] * alpha[0];  
        } else {                            // if i is greater than 25, the number made is the reeference multiplied by 3.
            alpha[i] = alpha[0] * 3;  
        }
    }

    // Outputs the array with a sqare of 5, and 5 multiplied by 3

    cout << "Output of array, first number is the refernce:\n";
    for (int i = 0; i < ARRAY_SIZE; i++) {
        cout << alpha[i] << " ";
        if ((i + 1) % 10 == 0) {                         // Add a newline after every 10 elements
            cout << "\n";
        }
    }

    // Creates random numbers 
    srand(static_cast<unsigned>(time(0)));                  // Random number generator
    for (int i = 0; i < ARRAY_SIZE; i++) {
        alpha[i] = rand() % 100 + 1;                        // Generate random number between 1 and 100
    }

    // Outputs the randomized array 
    cout << "\nrandom numbers:\n";
    for (int i = 0; i < ARRAY_SIZE; i++) {
        cout << alpha[i] << " ";
        if ((i + 1) % 10 == 0) {            // Add a newline after every 10 elements
            cout << "\n";
        }
    }

    // Calculates and prints the average of the array 

    double sum = 0;                              // Variable to store the sum of elements
    for (int i = 0; i < ARRAY_SIZE; i++) {
        sum += alpha[i];                       
    }
    double average = sum / ARRAY_SIZE;          // Calculates  average
    cout << "\nAverage of array: " << average << endl;


    //  code for finding out how many numbers equal 100. 
    int count = 0;                                  // Variable to count elements equal to 100
    for (int i = 0; i < ARRAY_SIZE; i++) {
        if (alpha[i] == 100) {
            count++;                                 // Increases count for numbers that equal 100
        }
    }
    cout << "Number of random numbers exactly equal to 100: " << count << endl;  // outputs number of numbers that equal 100. 

    return 0;
/*
    Output of the array, first number is the refernce:
    5 25 25 25 25 25 25 25 25 25  
    25 25 25 25 25 25 25 25 25 25 
    25 25 25 25 25 15 15 15 15 15 
    15 15 15 15 15 15 15 15 15 15 
    15 15 15 15 15 15 15 15 15 15 

    random numbers:
    100 62 96 47 79 45 56 80 3 67 
    100 5 45 78 34 75 65 21 26 2  
    39 85 21 64 5 14 40 5 23 87   
    33 48 100 91 87 21 6 52 35 85 
    84 88 59 35 81 57 66 92 39 45 

    Average of array: 53.46
    Number of random numbers exactly equal to 100: 3
    */
}