#include <iostream>
#include "account.h"


int Main()
{
	Account account(0, "Bob Jones", 100);
	account.get_name_and_balance();
	account.display_acc_info();

	return 0;
}
