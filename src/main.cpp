#include <iostream>
#include <stdlib.h>
#include "lib.h"
#include "hello.h"

int main(){
	int a, b, g, h, i, k, l;
	a = 10;
	b = 10;
	g = 1;
	h =3;
	i =50;
	k= 20;
	l =20;
	calcul c;
//	chat rengar;
	calcul w;
	calcul x;
	calcul y;
	std::cout<<c.somme(a,b)<<std::endl;
//	std::cout<<rengar.felin(g,h,i)<<std::endl;
	std::cout<<w.mult(k,l)<<std::endl;
	std::cout<<x.div(a,h)<<std::endl;
	std::cout<<y.sous(a,h)<<std::endl;
	return 0;
}
