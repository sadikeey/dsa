
---
title: DSA using C++
author: "Sadik Saifi"
date: Oct 24, 2022
---

\setcounter{secnumdepth}{3}
\tableofcontents
\newpage
\maketitle

# Basics Of Programming Languages

Programming is the process of creating a set of instructions which tells a 
computer how to perform a task.

## Types Of Programming Languages

- Low Level Languages.
- High Level Languages.

### Low Level Programming Languages

#### Assembly Level Programming Language

Low-level programming that is intended to communicate directly with hardware.

### High Level Programming Languages

Easy to understand and less complex than assembly level language/machine code.

#### Types Of High Level Programming Languages.

- Procedural
- Functional
- Object-Oriented

##### Procedural:
- It is written in set of procedures which executes in a structure/serial 
order.\
- Procedures are also known as subroutine/function.\
- e.g. C, Basic, Pascal etc. 

##### Functional:
- We functions to write the code.\
- Functions are chunks/block of code which can use over and over again.\
- They can also take parameters.\
- e.g. Python, JavaScript etc.\

##### Object-Oriented:
- We use object and classes.\
- Classed are user defined prototype/blueprints which can be used to create
objects.\
- Object are real life entity.\
- e.g. C++, Java, C# etc.\

\newpage

##### Class:
We can define some properties, attributes, methods etc.

##### Object:
Instance of a class which allows to use variables and methods from class.

\newpage

# CPP Programming Language.
- It is Object-Oriented Programming Language.
- But it also has support for procedural programming.
- Initially it was intended to developed as a superset of C but later on it 
became a new programming language.
- Developed by **Bjarne Stroustrup** in **1979**.

## C++ Sample Program.
```cpp
  #include<iostream>    /*iostream is directive & it is processed by 
                          preprocessor.
                          Preprocessor is program that compiler runs.
                          #include telling our program to include the header 
                          files like iostream.
                          iostream containes input output functions.
                        */
  using namespace std;  /*It is telling our program that there is namespace of 
                          name std which we have to use in our program.
                          e.g cout belongs to std namespace 
                                - std:cout
                        */
  int main() {          /*'int main' is the main function which the entry point 
                          of a program.*/
    int val;            //declaring a variable.
    cout<<"Hello";      //printing the output.
    cin>>val;           //taking input.
    cout<<val;          //printing the output.
    return 0;           //return 0 indicates, program has executed successfully.
    cout<<"Hi";         //this won't be executed. 
  }
```

## C++ Variables
- Variables are just containers to store our value where our code is executed.
- As C++ is statically typed language, so you can't store different type of 
value in different type of container.\
e.g. 
```cpp
    int a = 5;          // correct
    int b = "f";        // incorrect
    int e = "6";        // incorrect
    char c = "a"        // correct
    char d = "4"        // correct
```

\newpage

## C++ Data Types
|Primary|Derived|User Defined|
|---|---|---|
|Integer|Function|Class|
|Character|Array|Structure|
|Boolean|Pointer|Union|
|Floating Point|Reference|Enum|-|
|Double Floating Point|-|-|
|Void|-|-|
|Wide Character|

## C++ Operators
- Arithmetic Operators
    - e.g. +, -, *, /, %, ++, -- etc.\

- Relational Operators
    - e.g. ==, !, >, <, >=, <= etc.\

- Logical Operators 
    - e.g. &&, ||, ! etc.\
    
- Assignment Operators 
    - e.g. =, +=, -=, /=, %= etc.\

- Bitwise Operators
    - e.g. ~, <<, >>, |, &, ^ etc.
    - a << b = a x 2^b
    - a >> b = a / 2^b\

- Misc Operators
    - e.g sizeOf, ?exp1:exp2, comma Operator, dot & arrow Operators, casting 
      Operator, & Address Operator, * Pointer Operator etc.\

- Uninary Operators
    - e.g. +, -, ++, --, ! etc.\

\newpage

# Conditionals Statements
- If else Statements.
- Nested If else Statements
- Ternary Statements

## If else Statements
```cpp
    if (condition) {
      // block of code if condition is true
    }
    else {
      // block of code if condition is false
    }   
```

## Nested If else Statements
```cpp
    if (condition1) {
      // code block 1
    }
    else if (condition2){
      // code block 2
    }
    else {
      // code block 3
    }
```

## Ternary Statements

```cpp
      int number = -4;
      string result;
      // Using ternary operator
      result = (number > 0) ? "Positive Number!" : "Negative Number!";

```

## Switch Case Statements

```cpp
    switch (expression) {
        case x:
            // code
            break;
        case y:
            // code
            break;
        default:
            // code
      }
```
\newpage

# C++ Loops/Iterative Statements
Loops are used when you want to do repetitive task in the program.

## Types Of Loops
- While Loop
- For Loop
- Do-while Loop

## While Loop

```cpp
    while(codition){
        //code
      }
```

## For Loop
```cpp
    for (init-statement; condition; final-expression) {
        //code
      }
```

### Multiple Variables in For Loop
```cpp
    for (int i=0, j=4; i<4, j>0; i++, j--) {
        // code
      }
```

## For Loop vs While Loop
```cpp
    // For Loop
    for (init-statement; condition; final-expression) {
        //code
      }

    // while Loop
    init-statement
    while(condition) {
        // code
        final-expression
      }
```

## Do-while Loop
```cpp
    do {
        code
    } while(condition);
```

\newpage

# Function

## How to declare a function.
```cpp
    returnType functionName(parameter1, parameter2){
        // Statements
      }
```

## Function Prototype
Like if you want define your function-A after the function-B but you want to 
call function-B in inside of function-A.\

e.g.

```cpp
    #include<iostream>
    using namaspace std;

    int add(int, int);    // prototype

    int main() {
        cout<<add(2,3)<<endl;
      }

    int add(int a, int b){
        return a+b;
      }
```

## Scope of Variables

### Accessing global variable.
We access the global variable by using **scope resolution** operator (::).

e.g.
```cpp
    #include<iostream>
    using namespace std;

    int a = 6;
    int main() {
        int a = 5;
        cout<<a<<endl;      //5
        cout<<::a<<endl;    //6
    }
```

\newpage

## Parameters

### Formal Parameters & Actual Parameters.
```cpp
    #include<iostream>
    using namaspace std;

    void add(int param1, int param2){ // param1 & param2 are formal parameters.
        cout<<param1+param2<<endl;
    }

    int main() {
        int a = 5; 
        int b = 7;    // Actual parameters. 
        add();
    }
```

## Pass by Value and Pass by Reference.

### Pass by Value.
Copy of the actual variable get copied into the formal variable.\

e.g.
```cpp
    #include<iostream>
    using namespace std;

    void add(int param1, int param2){ // param1 & param2 are formal parameters.
        cout<<param1+param2<<endl;
    }
    int main() {
        int a = 5; 
        int b = 7;    // Actual parameters. 
        add(a,b);
    }
```

### Pass by Reference.
Variables it self gets used in the function. 

e.g.
```cpp
    #include <iostream>
    using namespace std;

    void print(int &param) { 
      cout << param << endl;
      param = 2;
    }
    int main() {
      int a = 5;

      print(a);
      cout<<a<<endl;
    }
```

\newpage

### Default values of parameters in a function.

```cpp
    #include<iostream>
    using namaspace std;

    void add(int a, int b=0, int c=2){  // b & c default values
        return a+b+c;
    }

    int main() {
        add(3);     // 5
        add(3,2)    // 7
        add(3,2,3)  // 8
    }
```

\newpage

# Data Structures

## Array
- Array
- An array is data structure which stores a collection of items.\
- It store homogeneous items(same data type).\
- It has contiguous memory.\
- **Representation of Array**\
  - |1|2|3|4|5|
  - Length of this array is 5.\
- We access the elements by their indexes(starts from 0).\

### Syntax Of An Array 
```cpp
    // datatype arrayName[arraySize];
    int array[5];
```

### Array Literal
```cpp
    int array[] = { 1, 2, 3, 4, 5 };
```

### Types Of Array

- Single dimensional or One-dimensional array.
- Multidimensional array.

### Sample Array Program
```cpp
    #include<iostream>
    using namespace std;

    int main() {
      int array[] = {1, 2, 3, 4, 5};

      cout << sizeOf(array) << endl;                  // size of the array.
                                                      // 20 bits.
      cout << sizeOf(array[0]) << endl;               // size of an elements 
                                                      // 4 bits
      cout << sizeOf(array)/sizeOf(array[0]) << endl; // length of the array.
                                                      // 5
    }
```

\newpage

## Vectors
- Vectors are dynamic arrays.

### Basic operations in Vectors

1. **Declaration**
```cpp
      #include <iostream>
      #include <vector>
      using namespace std;

      int main() {
        vector<int> vec(4);
      }
```

2. **Size**
    - v.size() -> length\

3. **Resize**
    - v.resize(new size)\

4. **Capacity**
    - v.capacity()
    - Capacity gets increased in multiple of 2's.\

5. **Add Elements**
    - v.push_back(5);\

6. **Insert Elements**
    - v.insert(position, elements)\

7. **Beginning and end of a Vector**
    - v.begin()
    - v.end()\

8. **Delete Elements**
    - v.pop_back()\

9. **Delete Elements using index**
    - v.erase(position)\

10. **Delete All Elements**
    - v.clear()\

\newpage

11. **Taking input from user**
```cpp
    #include<iostream>
    #include<vector>
    using namespace std; 

    int main(){
      vector<int> v;
      for(int i=0; i<5; i++){
        int element; 
        cin>>element;
        v.push_back(element);
      }
    }
```

### Sample Program Of Vector 
```cpp
    #include <iostream>
    #include <vector>
    using namespace std;

    int main() {
      vector<int> v;

      // Adding Elements
      v.push_back(1);
      v.push_back(2);
      v.push_back(3);
      v.push_back(4);
      v.push_back(5);

      cout << "Size : " << v.size() << endl;         // Size Of vector
      cout << "Capacity : " << v.capacity() << endl; // Capacity Of vector

      cout << "Elements : ";
      for (int i = 0; i < v.size(); i++)
        cout << v[i] << " "; // Printing the elements

      v.resize(10);                 // Resize the vector.
      cout << endl << "After Resize : " << v.size() << endl;

      v.insert(v.begin() + 1, 0);

      cout << "Elements : ";
      for (int i = 0; i < v.size(); i++)
        cout << v[i] << " "; // Printing the elements

      v.erase(v.begin() + 2);

      cout << "Elements : ";
      for (int i = 0; i < v.size(); i++)
        cout << v[i] << " "; // Printing the elements
    }
```
