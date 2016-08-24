#include<stdio.h>

long fibonacci(long n){
    if(n == 1){
        return 1;
    }else if(n == 2){
        return 2;
    }else{
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}


int main(){
	int qtd;

	scanf("%d", &qtd);

	for(int i = 0; i < qtd; i++){
        int n = 0;
        scanf("%d", &n);
        printf("%d\n", fibonacci(n));
	}

	return 0;
}
