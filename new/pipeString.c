#include<stdio.h>
#include<unistd.h>
#include<string.h>

int main() {
	int fd1[2], fd2[2];
	pipe(fd1);
	pipe(fd2);
	
	int id = fork();
	
	
	if(id == 0) {
		
		printf("Enter a string : ");
		
		char str[100];
		
		scanf("%s", str);
		
		int size = strlen(str) + 1;   // Include the null terminator else will give a garbage charector
		
		write(fd1[1], &size, sizeof(int));
		write(fd1[1], str, sizeof(char) * size);
	
	} else {
		
		int size;
		
		read(fd1[0], &size, sizeof(int));
		
		printf("%d", size);
		
		char str[size];
		read(fd1[0], str, size);
		
		//printf("%s", str);                        // %c for string printing
		
	
		for(int i = 0; i < size; i++) {
			printf("%c", str[i]);                   // %c for char printing
		}
		
	}

}
