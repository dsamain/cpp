
#include "Account.hpp"

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

int	Account::getNbAccounts( void ) {return _nbAccounts;}
int	Account::getTotalAmount( void ) {return _totalAmount;}
int	Account::getNbDeposits( void ) {return _totalNbDeposits;}
int	Account::getNbWithdrawals( void ) {return _totalNbWithdrawals;}

void displayTimeStamp() {
	time_t     now = time(0);
    struct tm  tstruct;
    char       buf[80];
    tstruct = *localtime(&now);
    // Visit http://en.cppreference.com/w/cpp/chrono/c/strftime
    // for more information about date/time format
    strftime(buf, sizeof(buf), "%Y%m%d_%H%M%S", &tstruct);
	std::cout << "[" << buf << "] ";
}

void Account::displayAccountsInfos( void ) {
	displayTimeStamp();
	std::cout << "accounts:" << getNbAccounts() << ";total:" << getTotalAmount() << "deposits:" << getNbDeposits() << ";withdrawals:" << getNbWithdrawals() << std::endl;
}

Account::Account(int initial_deposit) : _amount(initial_deposit), _nbDeposits(1), _nbWithdrawals(0) {
	_accountIndex = _nbAccounts++;
	_totalAmount += initial_deposit;
	_totalNbDeposits++;
	displayTimeStamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
}

Account::~Account( void ) {
//[19920104_091532] index:7;amount:8942;closed
	displayTimeStamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
}

void Account::makeDeposit(int deposit) {
	_totalAmount += deposit;
	_totalNbDeposits++;
	_amount += deposit;
	_nbDeposits++;
	//[19920104_091532] index:0;p_amount:42;deposit:5;amount:47;nb_deposits:1
	displayTimeStamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount - deposit << "deposit:" << deposit << ";amount:" << _amount << "nb_deposits:" << _nbDeposits << std::endl;
}

bool Account::makeWithdrawal(int val) {
	//[19920104_091532] index:4;p_amount:1321;withdrawal:76;amount:1245;nb_withdrawals:1
	displayTimeStamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:";
	if (val > _amount) {
		std::cout << "refused" << std::endl;
		return 0;
	}
	_totalAmount -= val;
	_totalNbWithdrawals++;
	_amount -= val;
	_nbWithdrawals++;
	std::cout << val << ";amount:"<<_amount<<";nb_withdrawals:"<<_nbWithdrawals<<std::endl;
	return 1;
}



int		Account::checkAmount( void ) const {return _amount;}

void	Account::displayStatus( void ) const {
//[19920104_091532] index:0;amount:47;deposits:1;withdrawals:0
	displayTimeStamp();
	std::cout << "index:"<<_accountIndex<<";amount:"<<_amount<<";deposits:"<<_nbDeposits<<";withdrawals:"<<_nbWithdrawals<<std::endl;
}
