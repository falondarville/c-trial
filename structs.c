#include <stdio.h>

// we use structs to describe things when arrays can't. Note that arrays can only have one type, and the following struct already has more than one type.
struct dog {

	const char *name;
	const char *breed;
	int avgHeightCm;
	int avgWeightLbs
};

int main(){

	
	struct dog fido = {"Fido", "Saint Bernard", 90, 264};

	getDogInfo(fido);

}