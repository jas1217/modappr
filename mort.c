/* calculates balance on loan after 1st 3 mortgage payments */

#include <stdio.h>

int main(void)
{
	float balance, loan_amt, int_pct, int_rate, m_pmt, m_int_pct, curr_bal;

	printf("Enter loan amount: ");
	scanf("%f", &loan_amt);

	printf("Enter interest rate: ");
	scanf("%f", &int_rate);

	printf("Enter monthly payment: ");
	scanf("%f", &m_pmt);

	int_pct = int_rate / 100;

	m_int_pct = int_pct / 12;

	balance = (loan_amt - m_pmt) * (1 + m_int_pct);
	printf("Balance after 1st payment: $%.2f\n", balance);

	balance = (balance - m_pmt) * (1 + m_int_pct);
	printf("Balance after 2nd payment: $%.2f\n", balance);

	balance = (balance - m_pmt) * (1 + m_int_pct);
	printf("Balance after 3rd payment: $%.2f\n", balance);

	return 0;
}
