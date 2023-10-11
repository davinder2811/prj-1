// //1)Write a program to print “Hello World” on the screen.
// #include<iostream>
// using namespace std;
// int main()
// {
//     cout<<"Hello World";
//     return 0;
// }



// 2)Write a program that generate the following output 10, 20, 19 Use an integer constant for 10, an arithmetic C++ 
// ASSIGNMENT operator to generate the 20, and a decrement operator to generate 19.
// #include <iostream>
// using namespace std;

// int main() {
//     int a,b,c;

//     a =10;
//     b =a*2;
//     c =b-1;

//     cout<< a<< b<< c <<endl;

//     return 0;
// }





//3) Write a c++ program that asks the user to enter a radius value and then compute the volume of a sphere with the
// input radius.

// #include <iostream>
// #include <cmath> 
// int main() {
//     const double pi = 3.14159265359; 
//     double radius, volume;
//     std::cout << "Enter the radius of the sphere: ";
//     std::cin >> radius;
//     // Check if the radius is non-negative
//     if (radius < 0) {
//         std::cout << "Radius cannot be negative." << std::endl;
//     } else {
//         // Calculate the volume of the sphere
//         volume = (4.0 / 3.0) * pi * std::pow(radius, 3);
//         std::cout << "The volume of the sphere with radius " << radius << " is: " << volume << std::endl;
//     }

//     return 0;
// }



// 4)Write a c++ program that takes three input of sides of a triangle. The program should indicate whether 
// the triangle would be formed or not. If it can be formed it also indicates the type.
// #include <iostream>
// using namespace std;
// int main() {
//     double side1, side2, side3;

//     // Prompt the user to enter the three sides of the triangle
//     cout << "Enter the lengths of the three sides of the triangle:" << std::endl;
//     cout << "Side 1: ";
//     cin >> side1;
//     cout << "Side 2: ";
//     cin >> side2;
//     cout << "Side 3: ";
//     cin >> side3;

//     // Check if the triangle can be formed
//     if (side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1) {
//         // Determine the type of triangle
//         if (side1 == side2 && side2 == side3) {
//             cout << "This is an equilateral triangle." << endl;
//         } else if (side1 == side2 || side1 == side3 || side2 == side3) {
//             cout << "This is an isosceles triangle." << endl;
//         } else {
//             cout << "This is a scalene triangle." << endl;
//         }
//     } else {
//         cout << "These side lengths cannot form a triangle." << endl;
//     }

//     return 0;
// }



// 5)Write a c++ program that takes one input as number and it will display whether the number is +ve, -ve or zero. 
// If the number is +ve, then it will display whether the number is odd or even.
// #include <iostream>
// using namespace std;
// int main() {
//     int number;
//     cout << "Enter a number: ";
//     cin >> number;

//     if (number > 0) {
//         cout << "The number is positive." << endl;

//         if (number % 2 == 0) {
//             cout << "The positive number is even." << endl;
//         } else {
//             cout << "The positive number is odd." << endl;
//         }
//     } else if (number < 0) {
//         cout << "The number is negative." << endl;
//     } else {
//         cout << "The number is zero." << endl;
//     }

//     return 0;
// }



// 6)Write a c++ program which takes username as input and it greets to user with his name.
// #include <iostream>
// #include <string>
// using namespace std;
// int main() 
// {
//     string username;
//     cout << "Enter your username: ";
//     cin >> username;
//     cout << "Hello, " << username << "! Welcome to our program." << endl;
//   return 0;
// }




// 7)Write a c++ program, which takes two integer numbers as input and it shows their exchanged value. (Don’t use
// third variable)

// #include <iostream>
// using namespace std;

// int main() {
//     int num1, num2;
    
//     cout << "Enter the first number: ";
//     cin >> num1;
//     cout << "Enter the second number: ";
//     cin >> num2;

//     num1 = num1 + num2;
//     num2 = num1 - num2;
//     num1 = num1 - num2;

    
//     cout << "After exchanging values:" << endl;
//     cout << "First number: " << num1 << endl;
//     cout << "Second number: " << num2 << endl;

//     return 0;
// }


// 8) WAP a c++ to check Leap Year.

// #include <iostream>
// using namespace std;


// int main() {
//     int year;

//     // Prompt the user to enter a year
//     cout << "Enter a year: ";
//     cin >> year;

//     // Check if it's a leap year
//     if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
//         cout << year << " is a leap year." << endl;
//     } else {
//         cout << year << " is not a leap year." << endl;
//     }

//     return 0;
// }


// 9) WAP in c++ for finding remainder of division of 2 numbers.

// #include <iostream>
// using namespace std;
// int main() 
// {
//     int dividend, divisor, remainder;

//     cout << "Enter the dividend: ";
//     cin >> dividend;
//     cout << "Enter the divisor: ";
//     cin >> divisor;

//     remainder = dividend % divisor;
//     cout << "The remainder of " << dividend << " divided by " << divisor << " is " << remainder << endl;

//     return 0;
// }





// 10) WAP in c++ to calculate Area of Rectangle.
// #include <iostream>
// using namespace std;
// int main() {
//     double length, width, area;

    
//     cout << "Enter the length of the rectangle: ";
//     cin >> length;
//     cout << "Enter the width of the rectangle: ";
//     cin >> width;

//     area = length * width;
//     cout << "The area of the rectangle is: " << area << endl;
//     return 0;
// }




// 11) WAP in c++ to calculate Area of Square.
// #include <iostream>
// using namespace std;
// int main() {
//     double side, area;

//     cout << "Enter the side length of the square: ";
//     cin >> side;

//     area = side * side;
//     cout << "The area of the square is: " << area << endl;

//     return 0;
// }



// // 12)WAP  in c++ to calculate the area of Triangle.
// #include <iostream>
// using namespace std;
// int main() 
// {
//     double base, height, area;

//     cout << "Enter the base length of the triangle: ";
//     cin >> base;
//     cout << "Enter the height of the triangle: ";
//     cin >> height;
    
//     area = (base * height) / 2;

//     cout << "The area of the triangle is: " << area <<endl;
//     return 0;
// }



// 13) WAP  in c++ to calculate Area and Circumference of Circle.
// #include <iostream>
// #include <cmath>
// using namespace std;
// int main() 
// {
//     double radius, area, circumference;
//     const double pi = 3.14; 

//     cout << "Enter the radius of the circle: ";
//     cin >> radius;

//     area = pi * pow(radius, 2); 
//     circumference = 2 * pi * radius;  
    
//     cout << "The area of the circle is: " << area << endl;
//     cout << "The circumference of the circle is: " << circumference << endl;

//     return 0;
// }




// 14) WAP in c++ for two item’s weight (floating points&#39; values) and number of purchase (floating points&#39; values) and calculate the average value of the items.
// Test Data:
// Weight - Item1: 15
// No. of item1: 5 
// Weight - Item2: 25 
// No. of item2: 4 
// Expected Output:
// Average Value = 19.444444

// #include <iostream>
// using namespace std;
// int main() {
//     double weight1, weight2, numPurchase1, numPurchase2, averageValue;
//     cout << "Enter the weight of Item 1: ";
//     cin >> weight1;
//     cout << "Enter the number of purchases of Item 1: ";
//     cin >> numPurchase1;

//     cout << "Enter the weight of Item 2: ";
//     cin >> weight2;
//     cout << "Enter the number of purchases of Item 2: ";
//     cin >> numPurchase2;

//     averageValue = (weight1 * numPurchase1 + weight2 * numPurchase2) / (numPurchase1 + numPurchase2);

//     cout << "Average Value = " << averageValue << endl;

//     return 0;
// }



// 15) WAP in c++  to calculate a bike’s average consumption from the given total distance (integer value) travelled (in km) and spent fuel.
// Test Data:
// Input total distance in km: 350 
// Input total fuel spent in litres: 5 
// Expected Output:
// Average consumption (km/lt) 70.00

// #include <iostream>
// #include <iomanip>
// using namespace std;
// int main() {
//     int totalDistance;
//     double totalFuel, averageConsumption;

//     cout << "Input total distance in km: ";
//     cin >> totalDistance;

//     cout << "Input total fuel spent in litres: ";
//     cin >> totalFuel;

//     averageConsumption = static_cast<double>(totalDistance) / totalFuel;

//     cout << "Average consumption (km/lt): " << fixed << setprecision(2) << averageConsumption << endl;
//     return 0;
// }




// 16) Write a c++ program that will give the grade of the student based on the percentage he got in the course.
// Use the following criteria for assigning grades:
// Grade = A ( when percentage &gt;= 60)
// Grade = B ( when percentage &gt;= 50 and percentage &lt; 60)
// Grade = C ( when percentage &gt;= 40 and percentage &lt; 50)
// Grade = D ( when percentage &gt;= 30 and percentage &lt; 40)
// Grade = E ( when percentage &gt;= 20 and percentage &lt; 30)

// #include <iostream>
// using namespace std;
// int main() {
//     double percentage;
//     char grade;

//     cout << "Enter the percentage: ";
//     cin >> percentage;

//     if (percentage >= 60) {
//         grade = 'A';
//     } else if (percentage >= 50) {
//         grade = 'B';
//     } else if (percentage >= 40) {
//         grade = 'C';
//     } else if (percentage >= 30) {
//         grade = 'D';
//     } else if (percentage >= 20) {
//         grade = 'E';
//     } else {
//         grade = 'F'; 
//     }

//     cout << "Grade: " << grade << endl;
//     return 0;
// }



// 17) WAP in c++ to check whether a number is divisible by 5.
// #include <iostream>
// using namespace std;
// int main() {
//     int number;

//     cout << "Enter a number: ";
//     cin >> number;

//     if (number % 5 == 0) {
//         cout << number << " is divisible by 5." << endl;
//     } else {
//         cout << number << " is not divisible by 5." << endl;
//     }

//     return 0;
// }



// 18) WAP in c++  to input basic salary of an employee and calculate its Gross salary according to following:
// Basic Salary &lt;= 10000 : HRA = 20%, DA = 80%
// Basic Salary &lt;= 20000 : HRA = 25%, DA = 90%
// Basic Salary &gt; 20000 : HRA = 30%, DA = 95%
// #include <iostream>
// using namespace std;
// int main() {
//     double basicSalary, grossSalary;
//     double hra, da;

//     cout << "Enter the basic salary of the employee: ";
//     cin >> basicSalary;

//     if (basicSalary <= 10000) {
//         hra = 0.20 * basicSalary;
//         da = 0.80 * basicSalary;
//     } else if (basicSalary <= 20000) {
//         hra = 0.25 * basicSalary;
//         da = 0.90 * basicSalary;
//     } else {
//         hra = 0.30 * basicSalary;
//         da = 0.95 * basicSalary;
//     }

//     grossSalary = basicSalary + hra + da;

//     cout << "Gross Salary: " << grossSalary << endl;
//     return 0;
// }




// 19)WAP in c++ to input electricity unit charges and calculate total electricity bill according to the given condition:
// For first 50 units Rs. 0.50/unit
// For next 100 units Rs. 0.75/unit
// For next 100 units Rs. 1.20/unit
// For unit above 250 Rs. 1.50/unit
// An additional surcharge of 20% is added to the bill
// #include <iostream>
// #include <iomanip>
// using namespace std;
// int main() {
//     double unitCharges, totalBill;

//     cout << "Enter the electricity unit charges: ";
//     cin >> unitCharges;

//     if (unitCharges <= 50) {
//         totalBill = unitCharges * 0.50;
//     } else if (unitCharges <= 150) {
//         totalBill = 50 * 0.50 + (unitCharges - 50) * 0.75;
//     } else if (unitCharges <= 250) {
//         totalBill = 50 * 0.50 + 100 * 0.75 + (unitCharges - 150) * 1.20;
//     } else {
//         totalBill = 50 * 0.50 + 100 * 0.75 + 100 * 1.20 + (unitCharges - 250) * 1.50;
//     }

//     totalBill += 0.20 * totalBill;

//     cout << "Total Electricity Bill: Rs. " << std::fixed << std::setprecision(2) << totalBill << endl;

//     return 0;
// }





