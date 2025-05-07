Bank Management System
A simple console-based Bank Management System implemented in C++, allowing users to manage basic banking operations such as account creation, deposits, withdrawals, and account details display.

Features
Open Account: Create a new account with name, address, account type (Savings 'S' or Current 'C'), and initial deposit.

Deposit Money: Add funds to the account.

Withdraw Money: Deduct funds from the account (no balance checks in current version).

Display Account: View account holder details and balance.

Prerequisites
C++ compiler (e.g., g++)

Terminal or command-line interface


Workflow
Open Account
Enter your name, address, account type (S for Savings, C for Current), and initial deposit amount.

Deposit Money
Input the amount to deposit. The updated balance will be displayed.

Withdraw Money
Input the amount to withdraw. The updated balance will be displayed (note: no overdraft protection).

Display Account
View your account details, including name, account type, and current balance.

![image](https://github.com/user-attachments/assets/815fc7f5-d74e-4a70-89a8-227e51262f84)

Limitations & Future Enhancements
Input Handling:
Currently, names/addresses with spaces are truncated. Use getline() for full input.

Balance Checks:
No validation for negative withdrawals. Add checks to prevent overdrafts.

Data Persistence:
Accounts are not saved to a file. Implement file storage (e.g., using fstream).

Interactive Menu:
Add a menu-driven interface for flexible operations (e.g., choose actions via input).

Multiple Accounts:
Support multiple accounts using arrays or data structures.
