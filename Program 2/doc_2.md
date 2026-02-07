Documentation - Infix to Postfix Conversion and Evaluation

(a) Data Structures Defined

Stack for operators:
char stack[50];
int top = -1;

stack[50] - Character array to store operators during conversion
top - Points to top of stack, -1 means empty

Stack for numbers:
int numstack[50];
int numtop = -1;

numstack[50] - Integer array to store numbers during evaluation
numtop - Points to top of number stack


(b) Functions Implemented

push(char c)
Purpose: Adds operator to stack
Increases top by 1 and stores character at that position

pop()
Purpose: Removes operator from stack
Returns character at top and decreases top by 1

priority(char c)
Purpose: Returns priority of operators
Returns 2 for * and /
Returns 1 for + and -
Returns 0 for other characters

convert(char infix[], char postfix[])
Purpose: Converts infix expression to postfix
Takes infix string as input and stores postfix in second array
Logic:
- If operand (letter or digit), add directly to postfix
- If opening bracket, push to stack
- If closing bracket, pop until opening bracket found
- If operator, pop higher priority operators then push current one
- After loop ends, pop all remaining operators

pushnum(int n)
Purpose: Adds number to evaluation stack
Increases numtop by 1 and stores number

popnum()
Purpose: Removes number from evaluation stack
Returns number at top and decreases numtop by 1

calculate(char postfix[])
Purpose: Evaluates postfix expression and returns result
Logic:
- If digit, convert to integer and push to stack
- If operator, pop two numbers, perform operation, push result
- Final value in stack is the answer


(c) Main Method Organization

1. Declare two character arrays for infix and postfix expressions
2. Take infix expression as input from user
3. Call convert() function to get postfix expression
4. Print the postfix expression
5. Call calculate() function to evaluate postfix
6. Print the final result

d)Sample Output
1)<img width="255" height="43" alt="image" src="https://github.com/user-attachments/assets/c9992b14-f965-4cda-b636-da3d4d16d621" />

2)<img width="696" height="84" alt="Screenshot 2026-02-07 223021" src="https://github.com/user-attachments/assets/b073623c-3b2e-4ac5-92ff-1b4fc5328a28" />
