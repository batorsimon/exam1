# EXAM: HW Programming Foundation Phase - 1st

### Getting Started
 - Fork this repository under your own account
 - Clone the forked repository to your computer
 - Create a `.gitignore` file so generated files won't be committed
 - Commit your progress frequently and with descriptive commit messages
 - All your answers and solutions should go in this repository

### What can I use?
- You can use any resource online, but **please work individually**
- **Don't just copy-paste** your answers and solutions, use your own words instead.
- **Don't push your work** to GitHub until your mentor announces that the time is up

# Tasks
## 1-3. Complete the following tasks: (~90 mins)
- [Even](even/even.c)
- [Reverse a string](reverse/reverse.c)
- [Personal ID](personal_id/personal_id.c)

### Acceptance criteria
The application is accepted if:
- The solution works according to specification
- The solution follows [styleguide](https://github.com/greenfox-academy/totoro-syllabus/blob/master/STYLEGUIDE.md)
- Has proper error handling where the specification says it
- Has the correct loops, methods, filters
- The code is clean, without unnecessary repetition, and with descriptive names
- You commit frequently with descriptive commit messages

## Question time! (~15 mins) [4p]

### Why and how do we use .c and .h files? [2p]

#### Your answer:
To separate functions and declarations from main.c, as a result we can prevent to damage our main.c, more easily change and/or delete functions.
We can separate the functions many ways so that we can create a much more clear code, for example:
 -logical_func.c and logical_func.h 
 -user_input.c and user_input.h
 -external.c and external.h

We put the declartions to the .h files and the functions itselfs in the .c files.

### Why and how do we use the `typedef` keyword? [1p]

#### Your answer:
You can use it to give a type, a new name.
Examples:
  -for charachters:
	typedef unsigned char BYTE;
	BYTE  b1, b2;
  -for structures:
	typedef struct Books {
  	    char title[50];
  	    char author[50];
   	    char subject[100];
   	    int book_id;
	} Book;


### When do we use `enum`? [1p]

#### Your answer:
When we want to make an enumeration. We can give for example the charachters an intreger value, which is easier to use as a reference.  

enum LEDS {
    LED1 = 0,
    Led2 = 1,
    LED3 = 2,
    LED4 = 3,
};