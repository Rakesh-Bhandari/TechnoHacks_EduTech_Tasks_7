### ATM Simulator in C

This C program simulates basic ATM operations such as checking the balance, depositing money, and withdrawing money. The program uses a menu-driven system to guide the user through different options and updates the balance based on the chosen operation.

### Features:
- **Check Balance**: Displays the current balance.
- **Deposit**: Allows the user to deposit money into their account.
- **Withdraw**: Allows the user to withdraw money, with checks for sufficient balance.
- **Error Handling**: Ensures that invalid deposit or withdrawal amounts are not processed.
- **Initial Balance**: Starts with an initial balance of 1000 Rs.

### Usage:
1. Clone the repository or download the `atm_simulator.c` file.
2. Compile the code using a C compiler, e.g., `gcc atm_simulator.c -o atm_simulator`.
3. Run the program and select the desired option (Check balance, Deposit, Withdraw, or Exit).

### Example 1: Checking Balance
```
    __ATM Simulator__
1. Check balance
2. Deposit
3. Withdraw
4. Exit
Enter Your choice: 1
Your current balance is: 1000Rs
```

### Example 2: Deposit Money
```
    __ATM Simulator__
1. Check balance
2. Deposit
3. Withdraw
4. Exit
Enter Your choice: 2
Enter deposit amount: 500
Successfully deposited 500Rs

    __ATM Simulator__
1. Check balance
2. Deposit
3. Withdraw
4. Exit
Enter Your choice: 1
Your current balance is: 1500Rs
```

### Example 3: Withdraw Money
```
    __ATM Simulator__
1. Check balance
2. Deposit
3. Withdraw
4. Exit
Enter Your choice: 3
Enter withdrawal amount: 200
Successfully withdrawn 200Rs

    __ATM Simulator__
1. Check balance
2. Deposit
3. Withdraw
4. Exit
Enter Your choice: 1
Your current balance is: 1300Rs
```

### Example 4: Insufficient Balance
```
    __ATM Simulator__
1. Check balance
2. Deposit
3. Withdraw
4. Exit
Enter Your choice: 3
Enter withdrawal amount: 2000
Insufficient balance.
```

### Example 5: Invalid Deposit/Withdrawal Amount
```
    __ATM Simulator__
1. Check balance
2. Deposit
3. Withdraw
4. Exit
Enter Your choice: 2
Enter deposit amount: -100
Invalid deposit amount.

    __ATM Simulator__
1. Check balance
2. Deposit
3. Withdraw
4. Exit
Enter Your choice: 3
Enter withdrawal amount: -50
Invalid withdrawal amount.
```

### How to Contribute:
- Fork the repository, make improvements or add more ATM functionalities, and submit a pull request.
- Suggestions for features such as account management or multiple users are welcome!

