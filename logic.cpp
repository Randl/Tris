#include "logic.h"

void init() {
    vec.push_back("123");
    vec.push_back("456");
    vec.push_back("789");	
}

int status()
{	
	if(vec[1][1] == 'X' || vec[1][1] == 'O')
		if ((vec[0][0] == vec[1][1] && vec[2][2] == vec[1][1]) ||
		    (vec[1][0] == vec[1][1] && vec[1][2] == vec[1][1]) ||
		    (vec[0][1] == vec[1][1] && vec[2][1] == vec[1][1]) ||
		    (vec[2][0] == vec[1][1] && vec[0][2] == vec[1][1])) 
				return vec[1][1] == 'X' ? 1 : 2;
						
	if(vec[0][0] == 'X' || vec[0][0] == 'O')
		if ((vec[0][1] == vec[0][0] && vec[0][2] == vec[0][0]) ||
		    (vec[1][0] == vec[0][0] && vec[2][0] == vec[0][0])) 
				return vec[0][0] == 'X' ? 1 : 2;
				
	if(vec[2][2] == 'X' || vec[2][2] == 'O')
		if ((vec[2][1] == vec[2][2] && vec[2][0] == vec[2][2]) ||
		    (vec[1][2] == vec[2][2] && vec[0][2] == vec[2][2])) 
				return vec[0][0] == 'X' ? 1 : 2;
	return 0;
}

bool turn(int i)
{
return i % 2;
}