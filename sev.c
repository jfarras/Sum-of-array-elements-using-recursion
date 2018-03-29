#include <stdio.h>
#include <stdlib.h>


int suma(int*a, int n ){
	int r = 0;

	if(n == 1){
		r = a[0];
	}
	else{
		r=a[n-1]+suma(a,n-1);
	}
	return r;
}


int main(int argc,const char* argv[]) {
	int *a;
	int i,r;

	a = (int*)malloc(sizeof(int)*argc);
	if(a == NULL){
		printf("error !\n");
	}else{

		for ( i=0; i <argc; ++i){
			if (argc != 0) {
			a[i] = atoi(argv[i]);
		}
		}
	}
	r = suma(a,argc);
	printf("La suma es %d\n",r);
	free(a);
	return 0;
}
