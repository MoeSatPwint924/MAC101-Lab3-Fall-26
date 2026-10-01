# MAC101: Graduation Eligibility Checker

This assignment focuses on handling user input and using conditional logic in C++ to evaluate whether a student is eligible to graduate.

## Variable Setup

You will begin by setting up variables to hold the student data. Ensure you declare the following:

* `int credits;`

* `double gpa;`

* `int holds;`

* `int courseReq;`


## Graduation Requirements

Your program should prompt the user for their information and evaluate the following conditions for graduation:

* `credits >= 60`

* `gpa >= 2.0`

* `holds == 0` (meaning there are no holds)

* `courseReq == 0` (meaning requirements are finished)


## Implementation Steps

* Write a single `if` statement that uses the `&&` operator to check if all four conditions are met at once.

* Implement an `else` block that uses nested `if` statements to give the user specific, helpful feedback if they do not qualify.


## How to Compile and Run

To compile and run the program using `g++`:

```bash
g++ -o main main.cpp
./main
```

## Key Takeaways

Completing this assignment will reinforce how your program can make decisions:

* `if` statements check if a condition is true.

* `else` provides an alternative execution path for false conditions.

* Logical operators (like `&&` and `||`) combine multiple checks together.

* Utilizing these tools allows for dynamic and responsive code.
