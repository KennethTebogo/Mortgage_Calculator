# Mortgage Calculator

## Description
This is a simple **C program** that calculates mortgage payments, remaining balance, and generates an amortization schedule. It takes in the loan amount, interest rate, and loan duration to provide detailed financial breakdowns.

## Features
- Calculates **monthly mortgage payment**.
- Computes **remaining loan balance** after a given number of months.
- Displays **interest and principal** payments for a specific month.
- Generates a **full amortization schedule**.

## Compilation & Execution
### **1. Compile the Program**
Run the following command in your terminal:

```sh
gcc mortgage_calculator.c -o mortgage_calculator -lm
```

### **2. Run the Program**
After compilation, execute the program using:

```sh
./mortgage_calculator
```

On **Windows (Command Prompt or PowerShell)**, run:

```cmd
mortgage_calculator.exe
```

## Example Output
```
Monthly Payment: $843.86
Remaining Balance after 84 months: $56,789.12
Interest Paid in Month 84: $170.37
Principal Paid in Month 84: $673.49
Month | Payment  | Interest  | Principal  | Remaining Balance
------------------------------------------------------------
    1 | $ 843.86 | $ 600.00 | $ 243.86  | $ 99756.14
    2 | $ 843.86 | $ 598.54 | $ 245.32  | $ 99510.82
    ...
  180 | $ 843.86 | $   4.99 | $ 838.87  | $      0.00
```

## Dependencies
- **GCC Compiler** (`gcc`)
- **Math Library** (`-lm` flag required during compilation)

## License
This project is licensed under the **MIT License**.

## Author
[Kenneth Tebogo Khondowe]- Created for educational purposes.

---
Feel free to modify and enhance this program! 🚀

