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
	int input_i, input_j;
	int bigger_cicle = 1;
	int i, aux;

	while( scanf( "%d %d", &input_i, &input_j ) != EOF ){
		printf( "%d %d", input_i, input_j );
		if( input_i > input_j ){
			input_i ^= input_j;
			input_j ^= input_i;
			input_i ^= input_j;
		}
		for( i=input_i; i<=input_j; i++ ){
			aux = ciclolen( i );
			bigger_cicle = ( aux > bigger_cicle ) ? aux : bigger_cicle;
		}
		printf( " %d\n", bigger_cicle );
		bigger_cicle = 0;
	}
	return 0;
}
