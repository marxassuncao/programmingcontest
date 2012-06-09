/* not works yet  */

#include<stdio.h>

int ciclolen( int _N_ ){
	int cont_cicles = 1;

	while( _N_ > 1 ){
		if( _N_%2 == 0 ) _N_ /= 2;
		else _N_ = 3*_N_ + 1;
		cont_cicles++;
	}

	return cont_cicles;
}

int main(){
	printf( "%d", ciclolen( 22 ) );
	return 0;
}
