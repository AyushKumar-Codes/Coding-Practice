#include <iostream>
#include <stack>
#include <cctype>
#include <string>

using namespace std;

bool isValidPostfixExpression(string expression) {
    stack<int> operands;
    stack<char> parentheses;
    
    for (char c : expression) {
        if (c == '(') {
            parentheses.push(c);
        } else if (c == ')') {
            if (parentheses.empty()) {
                return false; // Unmatched close parenthesis
            }
            parentheses.pop();
        } else if (isdigit(c)) {
            operands.push(c - '0'); // Convert char digit to integer and push onto the stack
        } else if (c == '+' || c == '-' || c == '*' || c == '/') {
            if (operands.size() < 2) {
                return false; // Not enough operands for the operator
            }
            int operand2 = operands.top();
            operands.pop();
            int operand1 = operands.top();
            operands.pop();
            
            // Perform the operation and push the result back onto the stack
            if (c == '+') {
                operands.push(operand1 + operand2);
            } else if (c == '-') {
                operands.push(operand1 - operand2);
            } else if (c == '*') {
                operands.push(operand1 * operand2);
            } else if (c == '/') {
                if (operand2 == 0) {
                    return false; // Division by zero
                }
                operands.push(operand1 / operand2);
            }
        } else if (c != ' ') {
            return false; // Invalid character in the expression
        }
    }
    
    // Check for unmatched open parenthesis
    if (!parentheses.empty()) {
        return false;
    }
    
    // After processing the entire expression, the stack should contain exactly one value
    return operands.size() == 1;
}

int main() {
    string expression;
    getline(cin, expression);
    
    if (isValidPostfixExpression(expression)) {
        cout << "Valid postfix expression" << endl;
    } else {
        cout << "Invalid postfix expression" << endl;
    }
    
    return 0;
}
