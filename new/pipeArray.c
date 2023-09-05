#include<stdio.h>
#include<unistd.h>

int main() {

  int fd[2];
  pipe(fd);
  int id = fork();

  if(id == 0) {
    
    int arr[1000];
    int n;

    printf("Entet the size : ");
    scanf("%d", &n);

    printf("Enter the elements: \n");
    for(int i = 0; i < n; i++) {
      scanf("%d", &arr[i]);
    }

    write(fd[1], &n, sizeof(int));
    write(fd[1], arr, sizeof(int) * n);

  }else {
    int arr[1000];
    int n;

    read(fd[0], &n, sizeof(int));      // we can also declare the size in globally and can be accessed
    read(fd[0], arr, n * sizeof(int));

    for(int i = 0; i < n; i++) {
      printf("%d ", arr[i]);
    }
  }

}