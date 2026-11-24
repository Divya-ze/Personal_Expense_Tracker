### C Programming Mini Hackathon Project

# Personal_Expense_Tracker
A menu-driven C application that helps students manage monthly budgets, record and categorize expenses, track total spending, and monitor their remaining budget through simple budget alerts.

## 1. Project Overview
The Personal Expense Tracker is a menu-driven C application designed to help students manage and monitor their monthly expenses. It allows users to set a monthly budget, record daily expenses, categorise their spending and analyse their financial activities.
The program provides a simple way to track expenditure, calculate the remaining budget and identify the category where the maximum amount is spent.

## 2. Problem Statement
Students often have difficulty keeping track of their daily expenses and managing their monthly budgets. Small expenditures on food, travel, shopping and entertainment can accumulate over time, making it difficult to understand spending patterns.
This project aims to provide a simple C-based solution that helps students record expenses, monitor their budgets and become more aware of their spending habits.

## 3. Objectives
- To provide a simple system for recording daily expenses.
- To help students manage their monthly budgets.
- To categorise expenses for better spending analysis.
- To calculate total expenditure and remaining budget.
- To identify the category with the highest expenditure.
- To alert users when their spending approaches or exceeds their budget.

## 4. Features
1. **Add New Expense:** Records expense names, categories and amounts.
2. **Expense History:** Displays all recorded transactions.
3. **Category-wise Analysis:** Calculates spending across six categories.
4. **Budget Status:** Displays total spending and remaining budget.
5. **Highest Spending Category:** Identifies the category with maximum expenditure.
6. **Budget Alerts:** Displays warnings when 80% of the budget is used or the budget is exceeded.

## 5. Expense Categories

The application supports six expense categories:

| Category Number | Category      |
| --------------- | ------------- |
| 1               | Food          |
| 2               | Travel        |
| 3               | Entertainment |
| 4               | Other         |
| 5               | Hostel        |
| 6               | Shopping      |

## 6. C Programming Concepts Used
- **Structures:** To store expense names, categories and amounts together.
- **Arrays:** To maintain multiple expense records and category-wise totals.
- **Functions:** To divide the program into smaller, manageable operations.
- **Loops:** To repeat the menu and process expense records.
- **Conditional Statements:** To validate inputs and check budget conditions.
- **Switch Case:** To perform operations based on the selected menu option.
- **Pointers:** To update expense count and total expenditure through functions.
- **String Handling:** To store and manage expense names.

## 7. Program Algorithm
1. Start the program.
2. Declare the expense structure, arrays and required variables.
3. Accept the monthly budget from the user.
4. Display the main menu.
5. Accept the user's choice.
6. Perform the selected operation:
   - Add a new expense.
   - View all expenses.
   - Display category-wise spending.
   - Check budget status.
   - Find the highest spending category.
   - Exit the application.
7. Update the total expenditure and category-wise totals whenever an expense is added.
8. Display budget alerts when applicable.
9. Repeat the menu until the user selects Exit.
10. Terminate the program.

## 8. Program Menu

The application provides the following options:
1. Add New Expense
2. View All Expenses
3. Category-wise Spending
4. Check Budget Status
5. Highest Spending Category
6. Exit

## 9. Budget Calculation
The application uses the following calculations:
**Total Spending:** :Sum of all recorded expenses.
**Remaining Budget:** :Remaining Budget = Monthly Budget − Total Spending
**Budget Alert:** :A warning is displayed when total spending reaches or exceeds 80% of the monthly budget.
A separate warning is displayed when total spending exceeds the monthly budget.

## 10. Sample Test Cases

| Test Case | Input / Condition               | Expected Result              |
| --------- | ------------------------------- | ---------------------------- |
| 1         | Monthly budget = ₹10,000        | Budget accepted              |
| 2         | Add Food expense = ₹500         | Expense recorded             |
| 3         | Add Travel expense = ₹200       | Expense recorded             |
| 4         | View expense history            | Both expenses displayed      |
| 5         | Check budget status             | Remaining budget = ₹9,300    |
| 6         | Total spending reaches ₹8,000   | 80% budget warning           |
| 7         | Total spending reaches ₹10,500  | Budget exceeded warning      |
| 8         | Invalid category number = 9     | Expense rejected             |
| 9         | View expenses before adding any | No expenses recorded message |

## 11. Limitations
- The application uses temporary memory storage.
- Expense records are not preserved after the program terminates.
- A maximum of 100 expense records can be stored in one execution.
- The application operates through a command-line interface.

## 12. Future Scope
The project can be extended by introducing:
- File handling for permanent expense storage.
- Monthly and weekly spending reports.
- Graphical representation of expenditure.
- Expense editing and deletion.
- Separate daily spending limits.
- A graphical user interface.

## 13. How to Compile and Run

**Requirements:**
- C Compiler (GCC recommended).
- VS Code or any C programming environment.

**Compilation:**
```bash
gcc Personal_Expense_Tracker -o tracker
```
**Execution on Linux / Ubuntu:**
```bash
./tracker
```
**Execution on Windows:**
```bash
tracker.exe
```

## 14. Project Team
- Team Number: [Enter Team Number]
- Batch: [41]

**Team Members:**
1. Mahi Sahu
2. Manvi Singhal
3. Divya Jaiswal

## 15. Conclusion
The Personal Expense Tracker provides a simple and practical solution for managing student expenses using fundamental C programming concepts. It helps users understand their spending patterns, monitor their monthly budgets and make more informed financial decisions.

The project demonstrates how basic programming concepts can be applied to solve everyday problems.
