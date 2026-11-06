# Lab-6-BMI-and-Color-Mixer

# plans for both programs
# Program 1: BMI Calculator
my program will first ask the persons weight on pounds and store that information and after that it will ask the persons high in inches to store it on a separate variable 
after having Bothe variables, the program will than calculate the bmi and compare it with pre saved values to determine if the person is Underweight with an answer of 18.5 or lower, Optimal weight with an answer of 18.5 through 25.0, or Overweight with an answer of 25.0 or greater	

# Program 2: Color Mixer
my program will ask the user for one color out of the 3 primary colors. red, yellow, and blue than it will ask for a second one out of the same 3. if the user puts the same color twice the answer will be the same color but if the user puts 2 different colors the program will use strcmp to compare the possible answers from a pre saved color bank to see what color it forms. however, if the user does not put a primary color an error message will apear and aks to change the colors to only use red, blue or yellow.

# Test results
# Program 1: BMI Calculator
Inputs (weight, height)         Expected result        Actual result          Match or correction

100, 70                        14.35 – Underweight       Underweight                 match


150, 70                         21.52 – Optimal weight    Optimal weight                 match

200, 70                          28.69 – Overweight          Overweight                 match

150, 0                              Error message             erro                 match

-150, 70                            Error message             erro                 match

101.4, 62                       18.55 – Optimal weight      Optimal weight         match
 

my results:
Enter your weight in pounds: 101.4
Enter your height in inches: 50
Your BMI is: 28.51
Category: Overweight

# Program 2: Color Mixer
Inputs                Expected result                     Actual result                     Match or correction

red, blue               purple                               purple                                match

red, yellow              orange                                orange                               match

blue, yellow              green                                green                               match

blue, red                 purple                             purple                               match

yellow, red               orange                           orange                               match

yellow, blue                green                            green                               match

red, red                   red                               red                               match

blue, blue                   blue                               blue                               match

yellow, yellow              yellow                          yellow                               match

orange, blue            Error message                        Error message                               match

red, orange            Error message                        Error message                               match

my result:
Enter the first color: blue
Enter the second color: red
The resulting color is: purple


# BMI Explanation Questions
1. How does the BMI formula use pounds and inches? Why is height * height needed?
The formula uses the person's weight in pounds and height in inches to calculate BMI. Height is multiplied by itself because the formula requires the height squared.

2. How do your conditions handle exactly 18.5 and exactly 25.0?
The program uses bmi <= 18.5 for Underweight and bmi <= 25.0 for Optimal weight. This means both 18.5 and 25.0 belong to the Optimal weight category.

3. Why do you check weight and height before calculating BMI?
I check both values to make sure they are greater than zero. This prevents the program from calculating BMI using invalid numbers.

5. Why do you classify the unrounded BMI and round only its displayed value?
The program uses the original BMI to determine the category because rounding could change which category the BMI belongs to. It only displays the result with two decimal places.

5. What does strcmp return for equal text? Why is == not the correct comparison for character-array contents?
strcmp() returns 0 when two pieces of text match. We use strcmp() because == does not compare the contents of character arrays.

6. How do you make each mixture work in either input order and handle two identical primary colors?
The program checks both possible orders of each color combination. It also checks if both colors are the same and displays that color.

7. How do you check for an invalid color in either input position?
The program checks both inputs to make sure they are red, blue, or yellow. If either input is invalid, it displays an error message.

8. How do named constants and result variables make your programs easier to read and check?
Named constants and result variables make the code easier to understand because they have meaningful names. They also make it easier to find and check calculations and values.

# how to compile and run the programs 
I used OnlineGDB to write and test my programs. I selected C++ on the top right, opened each program separately, and clicked Run to test the code.
