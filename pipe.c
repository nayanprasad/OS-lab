#include<stdio.h>
#include<unistd.h>

int main() {

	int fd[2];
	pipe(fd);
	
	int id = fork();
	
	if(id == 0) {
	printf("eneter a num: ");
	int n;
	scanf("%d", &n);
	
	write(fd[1], &n, sizeof n);
	}else {
		
		int a;
		read(fd[0], &a, sizeof a);
		
		int fact = 1;
		for(int i = a; i > 0; i--)
			fact *= i;
		
		printf("%d", fact);
	}

}
