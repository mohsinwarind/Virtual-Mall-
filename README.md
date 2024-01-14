# Virtual Mall System


## Introduction
Hey there! Welcome to the Virtual Mall System – a cool little project for first-semester students diving into the world of programming! This program is like a friendly guide to help you get comfy with the basics of C++ coding.

### What's the Deal?
So, why are we doing this? Well, think of it like your very first video game. We're building a simple computer program that acts like a virtual mall. You get to pick your favorite things to buy and see how much they cost – all with the magic of coding!

### Why Should You Care?
The goal here is to make learning fun! By playing around with this code, you're getting hands-on experience with the building blocks of programming. It's like practicing scales on a musical instrument or taking your first spin on a bike – you're learning the ABCs of coding.

### Breakdown of Fun Stuff
1. **Say Hello:** You start by saying "hello" with your name and a secret password. Just like having a secret handshake, but with a computer!

2. **Explore the Mall:** Next, you get to wander around our virtual mall. There are different sections – like a video game with levels. We keep it simple, though – no tricky boss fights.

3. **Pick Your Favorites:** Once you're in a section, you pick things you like, just like when you're shopping for clothes or gadgets. Each choice is like a mini adventure.

4. **See Your Loot:** Ever wonder how much you spent while shopping? This program shows you a little summary of all the cool things you picked up – your virtual shopping cart.

5. **Say Goodbye:** Finally, the program gives you a warm goodbye, just like when you leave a real store. It's like a friendly shopkeeper saying, "Come back soon!"

### Why It Matters
Learning to code can feel like learning a new language. This little project helps you practice the basics – it's like learning to talk before writing a whole story. It's a safe and fun space to make mistakes and learn from them, just like when you're mastering a new game.

### Key Elements and Concepts Explored:
1. **User Authentication:** The program starts with user authentication, requiring the entry of a name and password. This introduces basic input handling and conditional statements.

2. **Category Selection:** Users can explore different shopping categories, introducing the concept of switch statements and nested selections.

3. **Product Purchasing:** Within each category, users can select and purchase specific products. This section emphasizes user input, calculations, and conditional branching.

4. **Summary Display:** The program generates a summary of the user's purchases, demonstrating the use of loops and conditional statements for data presentation.

5. **Conclusion and Thank You Message:** The program concludes with a thank you message, reinforcing the importance of proper program structure and user-friendly interfaces.

### Significance for First-Semester Students:
- **Hands-On Practice:** Students get hands-on experience in implementing basic programming constructs such as loops, conditional statements, and user input/output.

- **Real-World Application:** The virtual mall concept provides a relatable and practical scenario, showcasing how programming can be used to model real-world systems.

- **Introduction to Functions:** While the provided code snippet is condensed, it sets the stage for students to later explore the use of functions to modularize and organize their code.

- **Encourages Exploration:** The variety of categories and products encourages students to explore and experiment with different aspects of C++ programming.

This code serves as an entry point for students to apply their theoretical knowledge to a tangible project, preparing them for more complex programming challenges in their academic journey.

## Code Explanation:
### Header File :
```cpp
#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
```
1- **#include<iostream>:** This line includes the input/output stream library, which provides functionality for reading from and writing to the console.
2- **#include<iomanip>:** This line includes the input/output manipulator library, allowing for advanced formatting of output.
3- **#include<string>:** This line includes the string library, which provides functionality for working with strings.

### Main function and Variables:
```cpp
int main(){
    char choice;
    string name;
    // ... (Other variables for quantities and amounts)
    float final_sum = 0, tqun = 0;
    int input;
    float final_sum = 0, tqun = 0;
}
```
1- **int main()** This is the main function, the starting point of every C++ program. The program's execution begins here.
2- **char choice;** Declares a variable choice of type char, which will be used to store user choices (e.g., whether to continue shopping).
3- **string name;** Declares a variable name of type string to store the user's name.
4- **Multiple variables:** Tens of vairbles are declared to keep track of quantities (qun) and amounts (amount) for various products in different categories. These variables will be used to record user purchases.
5- **float final_sum = 0:**  Initializes a floating-point variable final_sum to keep track of the total cost of the user's purchases.
6- **float tqun = 0:** Initializes a floating-point variable tqun to store the total quantity of items purchased.
###User Authentication:
```cpp
cout << "Enter your Name : ";
    getline(cin, name);
    cout << endl;
    cout << "Enter your Password : ";
    cin >> input;
    if (input == 12345) {
    //Rest of the code    
     }
```
1- The program prompts the user to enter their name and password.
2- If the entered password is 12345, it displays a welcome message along with different shopping categories.

### **Categories**:

### Exploring Categories and Subcategories in the Virtual Mall

In the Virtual Mall System, shopping is organized into different **categories**, each representing a broad section of products. Within these categories, you'll find various **subcategories** that narrow down your choices even further. It's like navigating a giant mall with different floors, each floor dedicated to a specific type of product.

#### Categories Available:
1. **Electronics**
2. **Clothings**
3. **Books**
4. **Home Appliances**
5. **Toys**
6. **Beauty**
7. **Sports**
8. **Stationary**

#### How It Works:
1. **Choosing a Category:**
   - Start by selecting a category that matches what you're looking for. For instance, if you're interested in gadgets, you might head to the **Electronics** section.

2. **Exploring Subcategories:**
   - Once you're in a category, you'll encounter various **subcategories** that specify the type of products available. In the **Electronics** category, you might find subcategories like **Fans**, **Bulbs**, **LED Lights**, **Televisions**, and **Switches**.

3. **Making Selections:**
   - Dive deeper by choosing a specific subcategory. If you're in the **Clothings** category, you might have subcategories like **Pant**, **Shirts**, and **Jeans**. Pick the one that suits your needs.

4. **Product Details:**
   - Each subcategory displays individual products along with their details such as price and description. For example, in the **Home Appliances** section, you might find **Iron**, **Juicer**, and **Table**.

5. **Completing Your Purchase:**
   - After exploring, make your selections by specifying the quantity of each product you want to purchase. The system will calculate the total cost based on your choices.

6. **Moving Between Categories:**
   - Feel free to jump between categories and subcategories to discover a wide range of products. If you start in **Beauty**, you might navigate to subcategories like **Perfume**, **Lotions**, and **Creams**.

This organized structure helps you efficiently navigate the virtual mall, making your shopping experience both enjoyable and streamlined. 
And now, I will explain the code structure of only one category because the rest are the same.

### Breaking down the Categories 
```cpp
cout << "___________" << endl;
cout << endl;
cout << "Categories " << endl;
cout << "___________" << endl;
cout << endl;
```
- This section prints a simple visual separator and the heading Categories to the console, providing a visual break before displaying the available categories.

```cpp
do {
    int option;
    cout << "Enter the Number of Category you want to explore : ";
    cin >> option;
    switch (option) {
        case 1:
            cout << "___________" << endl;
            cout << endl;
            cout << "Subcategories in Electronics are : " << endl;
            cout << "_________________________" << endl;
            cout << endl;}
```
- This part initiates a do-while loop where the user is prompted to enter the number of the category they want to explore. In this case, if the user selects category 1 (Electronics), it displays subcategories.

``` cpp
cout << "1- Fans       -    $99.99" << endl;
cout << "2- Bulbs      -    $23.99" << endl;
cout << "3- LED Lights -    $40.00" << endl;
cout << "4- Televisions -    $200.99" << endl;
cout << "5- Switches   -    $9.99" << endl;
cout << "_________________________" << endl;
cout << endl;
int a;
cout << "What do you want to purchase : ";
cin >> a;
switch (a) {
    case 1:
        cout << "Enter the Number of Product you want to buy : ";
        cin >> qun11;
        fqun11 += qun11;
        amount11 += qun11 * 99.9;
        final_sum += amount11;
        tqun += fqun11;
        cout << "_________________________________________________________" << endl;
        cout << endl;
        cout << qun11 << " fans are purchased for " << amount11 << " by you ." << endl;
        cout << "_________________________________________________________" << endl;
        break;
    case 2:
        // Similar cases for other subcategories
        // ...
    default:
        cout << "_________________________________________________________" << endl;
        cout << endl;
        cout << "Invalid choice. Please enter a valid option." << endl;
        cout << "_________________________________________________________" << endl;
        break;
}
break;
```
- This section prints the subcategories and their respective prices for the Electronics category. It then prompts the user to enter the number of the product they want to purchase and processes the user's choice with a switch statement.

- The switch statement handles different cases for each subcategory, allowing the user to input the quantity they want to buy. The code calculates the total amount, updates the final_sum and tqun variables, and provides a summary of the purchase.

- The "break;" statement breaks out of the switch statement and the do-while loop, allowing the user to explore other categories or exit the loop.

### User Input for Exploration
```cpp
cout << endl;
cout << "Do you want to Explore again(Y/N) ? ";
cin >> choice;
} while (choice == 'Y' || choice == 'y');
cout << endl;
```
- This section prompts the user with a question about whether they want to explore the virtual mall again.
- It waits for the user's input (Y/N) and continues the exploration loop if the input is 'Y' or 'y'.
- A blank line is printed for formatting after exiting the do-while loop.

### Displaying Summary Table
```cpp
if (tqun > 0) {
    cout << "________________________________________________________________________________________________________________________________________________" << endl;
    cout << endl;
    cout << setw(10) << setiosflags(ios::left) << "Product" << setw(15) << setiosflags(ios::left) << "Quantity" << setw(20) << setiosflags(ios::left) << "Amount" << endl;
    cout << "________________________________________________________________________________________________________________________________________________" << endl;
    cout << endl;

    if (amount11 > 0) {
        cout << setw(10) << setiosflags(ios::left) << "Fans" << setw(15) << setiosflags(ios::left) << fqun11 << setw(20) << setiosflags(ios::left) << amount11 << endl;
    }
    if (amount12 > 0) {
        cout << setw(10) << setiosflags(ios::left) << "Bulbs" << setw(15) << setiosflags(ios::left) << fqun12 << setw(20) << setiosflags(ios::left) << amount12 << endl;
    }
    if (amount13 > 0) {
        // Similar cases for other subcategories
        // ...
    }
}
```
- This section checks if the total quantity (tqun) is greater than 0, indicating that the user has purchased some products.
- If products were purchased, it displays a summary table with columns for Product, Quantity, and Amount.
- The table header and separator lines are printed first.
- Subsequent if statements check each product's quantity, and if greater than 0, it prints a row in the table with information about that product.
- The code segment concludes with the closing braces for the if statement and the main function.

### Handling Invalid Login
```cpp
else {
    cout << "Invalid Login Id " << name << " Please Try Again." << endl;
}
```
- This section is part of the conditional statement that checks if the user's input password is not equal to the expected value (12345).
- If the password is incorrect, it prints an error message indicating an invalid login attempt. It includes the user's name in the message.
- The closing brace signifies the end of the **if** statement.

## The End

#### Summary:
Thank you for exploring the Virtual Mall System code! Whether you're a seasoned developer or just starting your programming journey, I appreciate your time and curiosity. This C++ project is designed to reinforce fundamental programming concepts for first-semester students, providing a hands-on experience in building a simple interactive system.

#### Ending Note:
Keep coding, stay curious, and enjoy the journey of programming! Remember, every line of code is a step forward. Happy programming!

---

*Developed by [Mohsin Ramzan](https://mohsinwarind.github.io/mohsinramzan/)* 
