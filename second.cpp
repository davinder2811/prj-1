// 1)WAP for printing all natural numbers till 20.
// #include <iostream>
// using namespace std;

// int main() 
// {
//     for (int i = 1; i <= 20; ++i) {
//         cout << i << " ";
//     }

//     cout << endl;

//     return 0;
//  }



// 2)WAP for printing all natural numbers in reverse order starting from 20.
//  #include <iostream>
//  using namespace std;

//  int main() 
//  {
//      for (int i = 20; i >= 1; --i) 
//      {
//          cout << i << " ";
//      }

//     cout << endl;

//      return 0;
// }


// 3)WAP for printing all even numbers from 1 to 20.
//  #include <iostream>
//   using namespace std;

// int main() {
//     for (int i = 2; i <= 20; i += 2) 
//     {
//         cout << i << " ";
//     }

//     cout << endl;

//     return 0;
//     }


// 4)WAP for printing all odd numbers from 1 to 20.
// #include <iostream>
// using namespace std;

// int main() 
// {
//     for (int i = 1; i <= 20; i += 2) 
//     {
//         cout << i << " ";
//     }

//     cout << endl;

//     return 0;
// }


// 5)WAP for adding all numbers from 1 to 20.
// #include <iostream>
// using namespace std;

// int main() {
//     int sum = 0; 

//     for (int i = 1; i <= 20; ++i) {
//         sum += i; 
//     }

//     cout << "The sum of numbers from 1 to 20 is: " << sum << endl;

//     return 0;
// }


// 6)WAP for finding sum of all even numbers till 20.
// #include <iostream>
// using namespace std;

// int main() {
//     int sum = 0; 

//     for (int i = 2; i <= 20; i += 2) {
//         sum += i; 
//     }

//     cout << "The sum of even numbers from 1 to 20 is: " << sum << endl;

//     return 0;
// }


// 7)WAP for finding sum of all odd numbers till 20.
// #include <iostream>
// using namespace std;

// int main() {
//     int sum = 0; 

//     for (int i = 1; i <= 20; i += 2) {
//         sum += i; 
//     }

//     cout << "The sum of odd numbers from 1 to 20 is: " << sum << endl;

//     return 0;
// }


// 8)WAP for printing multiplication table of a number. For eg. Display should be “ 2 X 1 = 2”
// #include <iostream>
// using namespace std;

// int main() {
//     int number;
    
//     cout << "Enter a number: ";
//     cin >> number;
    
//     cout << "Multiplication Table for " << number << ":" << endl;

//     for (int i = 1; i <= 10; ++i) {
//         cout << number << " x " << i << " = " << (number * i) << endl;
//     }
//     return 0;
// }


// 9)WAP to calculate factorial of a number.
// #include <iostream>
// using namespace std;

// int main() {
//     int number;
//      long factorial = 1.0; 

//     cout << "Enter a positive integer: ";
//     cin >> number;

//     if (number < 0) 
//         cout << "Factorial is not defined for negative numbers." << endl;
//      else {
       
//         for (int i = 1; i <= number; ++i) {
//             factorial *= i;
//         }

//         cout << "The factorial of " << number << " is: " << factorial << endl;
//     }

//     return 0;
// }


// 10)WAP to check whether a number is prime or not.
// #include <iostream>
// #include <cmath> 
// using namespace std;
// int main() {
//     int number;
//     bool isPrime = true; 
    
//     cout << "Enter a positive integer: ";
//     cin >> number;

    
//     if (number < 2) {
//         isPrime = false;
//     } else {
        
//         for (int i = 2; i <= sqrt(number); ++i) {
            
//             if (number % i == 0) {
//                 isPrime = false;
//                 break; 
//             }
//         }
//     }

//     if (isPrime) {
//         cout << number << " is a prime number." << endl;
//     } else {
//         cout << number << " is not a prime number." << endl;
//     }

//     return 0;
// }



// 11)WAP to print all digits of a number and their sum.
// #include <iostream>
// using namespace std;

// int main() {
//     long long num;
//     cout << "Enter a number: ";
//     cin >> num;

//     if (num < 0) {
//         num = -num;
//     }

//     long long originalNum = num;
//     int digit;
//     int sum = 0;

//     cout << "Digits of the number " << originalNum << " are: ";

//     while (num > 0) {
//         digit = num % 10;
//         cout << digit << " ";
//         sum += digit;
//         num /= 10;
//     }
//       cout << "\nSum of the digits: " << sum << endl;
//       return 0;
// }


// 12)WAP to print reverse of a number.
// #include <iostream>
// using namespace std;

// int main() {
//     int num, reversedNum = 0;

//     cout << "Enter a number: ";
//     cin >> num;

//     while (num != 0) {
//         int digit = num % 10;
//         reversedNum = reversedNum * 10 + digit;
//         num /= 10;
//     }

//     cout << "Reversed number: " << reversedNum << endl;

//     return 0;
// }


// 13)WAP to check whether the number is Armstrong or not.
// #include <iostream>
// #include <cmath>
// using namespace std;

// int countDigits(int num) {
//     int count = 0;
//     while (num != 0) {
//         num /= 10;
//         count++;
//     }
//     return count;
//     }

// bool isArmstrong(int num) {
//     int originalNum = num;
//     int sum = 0;
//     int n = countDigits(num);

//     while (num != 0) {
//         int digit = num % 10;
//         sum += pow(digit, n);
//         num /= 10;
//     }
//     return sum == originalNum;
//     }

// int main() {
//     int num;
    
//     cout << "Enter a number: ";
//     cin >> num;

//     if (isArmstrong(num)) {
//         cout << num << " is an Armstrong number." << endl;
//     } else {
//         cout << num << " is not an Armstrong number." << endl;
//     }
//      return 0;
//      }


// // 14)WAP to print the Fibonacci series in a given range.
// #include <iostream>
// using namespace std;

// int main() {
//     int range, first = 0, second = 1, next;

//     cout << "Enter the range for the Fibonacci series: ";
//     cin >> range;

//     cout << "Fibonacci series up to " << range << " terms: ";

//     for (int i = 0; i < range; ++i) {
//         if (i <= 1) {
//             next = i;
//         } else {
//             next = first + second;
//             first = second;
//             second = next;
//         }
//         cout << next << " ";
//     }
//        cout << endl;
//     return 0;
//     }


// 15)WAP to check whether the number entered is palindrome or not.
// #include <iostream>
// using namespace std;

// int main() {
//     int num, originalNum, reversedNum = 0;

//     cout << "Enter a number: ";
//     cin >> num;

//     originalNum = num; 
//     while (num > 0) {
//         int digit = num % 10;
//         reversedNum = reversedNum * 10 + digit;
//         num /= 10;
//     }
      
//       if (originalNum == reversedNum) {
//         cout << originalNum << " is a palindrome." << endl;
//     } else {
//         cout << originalNum << " is not a palindrome." << endl;
//     }
//       return 0;
// }



