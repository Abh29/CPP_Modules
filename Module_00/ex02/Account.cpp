#include "Account.hpp"

int	Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int	Account::getNbAccounts(void){return _nbAccounts;};
int	Account::getTotalAmount( void ){return _totalAmount;}
int	Account::getNbDeposits( void ){ return _totalNbDeposits;}
int	Account::getNbWithdrawals( void ){return _totalNbWithdrawals;}
void	Account::displayAccountsInfos( void ){
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() << ";total:";
	std::cout << getTotalAmount() << ";deposits:" << getNbDeposits();
	std::cout << ";withdrawals:" << getNbWithdrawals() << std::endl;
}

Account::Account( int initial_deposit ){
	_amount = initial_deposit;
	_accountIndex = _nbAccounts;
	_totalAmount += initial_deposit;
	_nbWithdrawals = 0;
	_nbDeposits = 0;
	_nbAccounts++;
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:";
	std::cout << this->_amount << ";created" << std::endl;
}
Account::Account(){
	_amount = 0;
	_accountIndex = _nbAccounts;
	_nbWithdrawals = 0;
	_nbDeposits = 0;
	_nbAccounts++;
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:";
	std::cout << this->_amount << ";created" << std::endl;
}
Account::~Account( void ){
	_displayTimestamp();
	std::cout << "index:" << _accountIndex ;
	std::cout << ";amount:" << _amount;
	std::cout << ";closed" << std::endl;
	_nbAccounts--;
}

void	Account::makeDeposit( int deposit ){
	_amount += deposit;
	_nbDeposits++;
	_totalNbDeposits++;
	_totalAmount += deposit;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:";
	std::cout << _amount - deposit << ";deposit:" << deposit;
	std::cout << ";amount:" << _amount << ";nb_deposits:";
	std::cout << _nbDeposits << std::endl;
};
bool	Account::makeWithdrawal( int withdrawal ){
	if (withdrawal <= _amount)
	{
		_amount -= withdrawal;
		_totalAmount -= withdrawal;
		_nbWithdrawals++;
		_totalNbWithdrawals++;
		_displayTimestamp();
		std::cout << "index:" << _accountIndex << ";p_amount:";
		std::cout << _amount + withdrawal << ";withdrawal:" << withdrawal;
		std::cout << ";amount:" << _amount << ";nb_withdrawals:";
		std::cout << _nbWithdrawals << std::endl;
		return (true);
	}
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:";
	std::cout << _amount << ";withdrawal:refused" << std::endl;
	return (false);
}
int		Account::checkAmount( void ) const{return _amount;}
void	Account::displayStatus( void ) const{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:";
	std::cout << this->_amount << ";deposits:" << this->_nbDeposits;
	std::cout << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

void	Account::_displayTimestamp( void ){
	time_t now = time(0);
	tm *stm = localtime(&now);
	std::cout << "[" << stm->tm_year + 1900 ;
	std::cout << std::setfill('0') << std::setw(2) << stm->tm_mon + 1;
	std::cout << std::setfill('0') << std::setw(2) << stm->tm_mday;
	std::cout << "_" << std::setfill('0') << std::setw(2) << stm->tm_hour;
	std::cout << std::setfill('0') << std::setw(2) << stm->tm_min;
	std::cout << std::setfill('0') << std::setw(2) << stm->tm_sec << "] ";
}