#ifndef Self_7_57_h
#define Self_7_57_h

class Account
{
	public:
		void calculate() { amount += amount * interestRate; }
		static double rate() { return interestRate;		}
		static void rate(double);		
	private:
		std::string owner;
		double amount;
		static double interestRate;
		static double iniRate();
		
		static constexpr int period = 30;
		double daily_tbl[period];		
};

double Account::interestRate = iniRate();

#endif
