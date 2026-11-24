//Personal Expense Tracker


#include <stdio.h>
#include <string.h>

#define MAX 100

// Structure to store expense details
struct Expense
{
    char name[50];
    int category;
    float amount;
};

// Category names
char categories[6][20] =
{
    "Food",
    "Travel",
    "Entertainment",
    "Other",
    "Hostel",
    "Shopping"
};

// Function declarations
void displayMenu();
void addExpense(struct Expense expenses[], int *count,
                float *totalSpent, float categoryTotal[]);
void viewExpenses(struct Expense expenses[], int count);
void categorySummary(float categoryTotal[]);
void checkBudget(float budget, float totalSpent);
void highestCategory(float categoryTotal[]);

int main()
{
    struct Expense expenses[MAX];

    float budget, totalSpent = 0;
    float categoryTotal[6] = {0};

    int count = 0;
    int choice;

    printf("====================================\n");
    printf("       PERSONAL EXPENSE TRACKER\n");
    printf("====================================\n");

    // Input monthly budget
    do
    {
        printf("\nEnter your monthly budget: Rs. ");
        scanf("%f", &budget);

        if (budget <= 0)
        {
            printf("Invalid budget! Enter a positive amount.\n");
        }

    } while (budget <= 0);

    // Main menu
    do
    {
        displayMenu();

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                addExpense(expenses, &count,
                           &totalSpent, categoryTotal);
                break;

            case 2:
                viewExpenses(expenses, count);
                break;

            case 3:
                categorySummary(categoryTotal);
                break;

            case 4:
                checkBudget(budget, totalSpent);
                break;

            case 5:
                highestCategory(categoryTotal);
                break;

            case 6:
                printf("\nThank you for using Personal Expense Tracker!\n");
                printf("Have a financially organised month!\n");
                break;

            default:
                printf("\nInvalid choice! Please try again.\n");
        }

    } while (choice != 6);

    return 0;
}

// Function to display menu
void displayMenu()
{
    printf("\n========== MAIN MENU ==========\n");
    printf("1. Add New Expense\n");
    printf("2. View All Expenses\n");
    printf("3. Category-wise Spending\n");
    printf("4. Check Budget Status\n");
    printf("5. Highest Spending Category\n");
    printf("6. Exit\n");
    printf("===============================\n");
}

// Function to add expense
void addExpense(struct Expense expenses[], int *count,
                float *totalSpent, float categoryTotal[])
{
    int category;
    float amount;

    if (*count >= MAX)
    {
        printf("\nExpense storage is full!\n");
        return;
    }

    printf("\nEnter expense name: ");
    scanf(" %49[^\n]", expenses[*count].name);

    printf("\nSelect Category:\n");

    for (int i = 0; i < 6; i++)
    {
        printf("%d. %s\n", i + 1, categories[i]);
    }

    printf("Enter category number: ");
    scanf("%d", &category);

    if (category < 1 || category > 6)
    {
        printf("\nInvalid category!\n");
        return;
    }

    printf("Enter expense amount: Rs. ");
    scanf("%f", &amount);

    if (amount <= 0)
    {
        printf("\nInvalid amount! Expense not recorded.\n");
        return;
    }

    // Store expense details
    strcpy(expenses[*count].name,
           expenses[*count].name);

    expenses[*count].category = category - 1;
    expenses[*count].amount = amount;

    // Update totals
    *totalSpent += amount;

    categoryTotal[category - 1] += amount;

    (*count)++;

    printf("\nExpense added successfully!\n");

    // Budget alert
    if (*totalSpent > 0)
    {
        printf("Total spending: Rs. %.2f\n", *totalSpent);
    }
}

// Function to view all expenses
void viewExpenses(struct Expense expenses[], int count)
{
    if (count == 0)
    {
        printf("\nNo expenses recorded yet.\n");
        return;
    }

    printf("\n========== EXPENSE HISTORY ==========\n");

    printf("%-20s %-18s %s\n",
           "Expense", "Category", "Amount");

    for (int i = 0; i < count; i++)
    {
        printf("%-20s %-18s Rs. %.2f\n",
               expenses[i].name,
               categories[expenses[i].category],
               expenses[i].amount);
    }

    printf("=====================================\n");
}

// Function for category-wise summary
void categorySummary(float categoryTotal[])
{
    printf("\n====== CATEGORY-WISE SPENDING ======\n");

    for (int i = 0; i < 6; i++)
    {
        printf("%-18s Rs. %.2f\n",
               categories[i], categoryTotal[i]);
    }

    printf("====================================\n");
}

// Function to check budget
void checkBudget(float budget, float totalSpent)
{
    float remaining = budget - totalSpent;

    printf("\n========== BUDGET STATUS ==========\n");

    printf("Monthly Budget  : Rs. %.2f\n", budget);
    printf("Total Spending  : Rs. %.2f\n", totalSpent);

    if (remaining < 0)
    {
        printf("Overspent Amount: Rs. %.2f\n", -remaining);
        printf("WARNING! Monthly budget exceeded!\n");
    }
    else
    {
        printf("Remaining Budget: Rs. %.2f\n", remaining);

        if (totalSpent >= budget * 0.80)
        {
            printf("WARNING! 80%% of your budget has been used!\n");
        }
        else
        {
            printf("You are within your budget.\n");
        }
    }

    printf("===================================\n");
}

// Function to find highest spending category
void highestCategory(float categoryTotal[])
{
    float max = 0;
    int found = 0;

    for (int i = 0; i < 6; i++)
    {
        if (categoryTotal[i] > max)
        {
            max = categoryTotal[i];
            found = 1;
        }
    }

    if (found == 0)
    {
        printf("\nNo expenses recorded yet.\n");
        return;
    }

    printf("\n====== HIGHEST SPENDING CATEGORY ======\n");

    for (int i = 0; i < 6; i++)
    {
        if (categoryTotal[i] == max)
        {
            printf("%s : Rs. %.2f\n", categories[i], max);
        }
    }

    printf("=======================================\n");
}

