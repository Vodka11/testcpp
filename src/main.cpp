#include <iostream>
#include <stdlib.h>
#include "lib.h"
#include "try.h"

int main(){
	int a, b, g, h, i;
	a = 10;
	b = 10;
	g = 1;
	h =3;
	i =50;
	calcul c;
	chat rengar;
	std::cout<<c.somme(a,b)<<std::endl;
	std::cout<<rengar.felin(g,h,i)<<std::endl;
	return 0;
}
