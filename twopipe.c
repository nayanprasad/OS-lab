#include<stdio.h>
#include<unistd.h>

int main() {
	
	int fd[2],fd2[2];

	int pipe1_st = pipe(fd);
	if(pipe1_st !=0){
		return 0;
	}
	
	pipe(fd2);

		
	int id = fork();
	
	if(id == 0) {
		close(fd[0]);
		
		printf("enter a number");
		int num;
		scanf("%d", &num);
		
		write(fd[1], &num, sizeof num);
		close(fd[1]);
		
		close(fd2[1]);
		int sqr;
		read(fd2[0],&sqr,sizeof sqr);
		printf("\nThe sqr is %d",sqr);
		close(fd2[0]);
		
	} else {
	
		int a;
		close(fd[1]);
		read(fd[0], &a, sizeof a);
		
		a *= a;
		
		printf("%d", a);
		close(fd[0]);
		
		close(fd2[0]);
		write(fd2[1],&a,sizeof a);
		close(fd2[0]);
	}
	
}
