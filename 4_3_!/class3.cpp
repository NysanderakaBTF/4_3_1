#include "class3.h"

void class3::exec()
{
	set_size();
	set_val();
	cout << "Array dimension: " << n<<endl;
	cout << "The orginal array:";
	show();
	sortt(0, n-1);
	cout << endl << "An ordered array:";
	show();
}
