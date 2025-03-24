#include <stdio.h>
#include <math.h>

// Calculate Monthly Mortgage Payment
double mortgagePayment(double L, double monthlyRate, int n) {
    return (L * monthlyRate) / (1 - pow(1 + monthlyRate, -n));
}

// Calculate Remaining Balance after j months
double remainingBalance(double L, double monthlyRate, int n, int j) {
    double alpha = 1 + monthlyRate;
    return L * (pow(alpha, n) - pow(alpha, j)) / (pow(alpha, n) - 1);
}

// Generate Amortization Schedule
void paymentBreakdown(double L, double monthlyRate, int n) {
    double A = mortgagePayment(L, monthlyRate, n);
    double balance = L;

    printf("Month | Payment  | Interest  | Principal  | Remaining Balance\n");
    printf("------------------------------------------------------------\n");

    for (int j = 1; j <= n; j++) {
        double interest = monthlyRate * balance;
        double principal = A - interest;
        balance -= principal;

        printf("%5d | $%8.2f | $%8.2f | $%9.2f | $%16.2f\n", j, A, interest, principal, balance);
    }
}

int main() {
    double L = 100000;  // Loan amount
    double monthlyRate = 0.006;  // Monthly interest rate (0.6%)
    int n = 180;  // Number of months (15 years)
    int j = 84;  // Month for remaining balance calculation

    double A = mortgagePayment(L, monthlyRate, n);
    double R_j = remainingBalance(L, monthlyRate, n, j);

    printf("Monthly Payment: $%.2f\n", A);
    printf("Remaining Balance after %d months: $%.2f\n", j, R_j);

    double interest_j = 0, principal_j = 0;
    double balance = L;
    for (int i = 1; i <= j; i++) {
        double interest = monthlyRate * balance;
        double principal = A - interest;
        balance -= principal;
        if (i == j) {
            interest_j = interest;
            principal_j = principal;
        }
    }

    printf("Interest Paid in Month %d: $%.2f\n", j, interest_j);
    printf("Principal Paid in Month %d: $%.2f\n", j, principal_j);

    paymentBreakdown(L, monthlyRate, n);
    
    return 0;
}

