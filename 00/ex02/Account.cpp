
#include "Account.hpp"

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;


Account::Account(int initial_deposit) {
	_accountIndex = _nbAccounts++;
	_totalAmount += initial_deposit;
	_totalNbDeposits++;
	_amount += initial_deposit;
	_nbDeposits = 1;
	_nbWithdrawals = 0;
}

void Account::makeDeposit(int deposit) {
	_totalAmount += deposit;
	_totalNbDeposits++;
	_amount += deposit;
	_nbDeposits++;
}

bool Account::makeWithdrawal(int val) {

}
