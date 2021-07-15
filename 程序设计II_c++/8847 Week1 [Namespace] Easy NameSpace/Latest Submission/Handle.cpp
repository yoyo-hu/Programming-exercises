#include "NameSpace.hpp"
void Handle(){
	mfc::inflag++;
	owl::inflag--;
	inflag = inflag % 100;
}