# Documentation - Balanced Parentheses Checker

(a) Data Structures Defined

Stack implementation using array:

char stack[100];
int top = -1;

stack[100] - Array to store opening brackets
top - Variable pointing to top of stack (-1 means empty)

---

(b) Functions Implemented

push(char c)
Purpose: Adds opening bracket to stack
Increments top and stores character

pop()
Purpose: Removes and returns top element from stack
Returns character and decrements top

ismatch(char open, char close)
Purpose: Checks if opening and closing brackets match
Returns 1 if match, 0 otherwise
Matches: (), [], {}

checkbalance(char expr[])
Purpose: Checks if expression has balanced brackets
Returns 1 if balanced, 0 if not
Logic:
- Push opening brackets to stack
- When closing bracket found, pop and check match
- If stack empty at end, expression is balanced

---

(c) Main Method Organization

1. Declare character array for expression
2. Get input from user using gets()
3. Display the entered expression
4. Call checkbalance() function
5. Print result (Balanced or Not Balanced)

---

(d) Sample Output

Test 1:
Enter expression: a + (b - c) * (d
Expression: a + (b - c) * (d
Not Balanced

Test 2:
Enter expression: m + [a - b * (c + d * {m)]
Expression: m + [a - b * (c + d * {m)]
Not Balanced

Test 3:
Enter expression: a + (b - c)
Expression: a + (b - c)
Balanced

Test 4:
Enter expression: {a + [b * (c - d)]}
Expression: {a + [b * (c - d)]}
Balanced

---
Output sample
.<img width="885" height="272" alt="Screenshot 2026-02-07 113736" src="https://github.com/user-attachments/assets/2b7d235c-8ef3-49bd-ad67-c31a460f5001" />
.<img width="852" height="98" alt="Screenshot 2026-02-07 114935" src="https://github.com/user-attachments/assets/db7f87d7-e77b-4261-857b-e74241cc6c75" />
