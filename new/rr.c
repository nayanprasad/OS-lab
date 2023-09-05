#include<stdio.h>

struct Process {
  char name[20];
  int at, bt, ct, tat, wt, remaing_time; 
};

int main() {
  int n;
  printf("Ennter the number of process");
  scanf("%d", &n);

  struct Process p[n];

  for(int i = 0; i < n; i++) {
    printf("Enter the name of process %d :", i + 1);
    scanf("%s", p[i].name);
    printf("Enter the AT of process %d :", i + 1);
    scanf("%d", &p[i].at);
    printf("Enter the BT of process %d :", i + 1);
    scanf("%d", &p[i].at);
    p[i].remaing_time = p[i].bt;
  }

  int remaing = n;
  int current_time = 0;
  while(remaing) {
    int completed = 0;

    for(int i = 0; i < n; i++) {
      if(p[i].remaing_time <= 0 || p[i].at > current_time)
        continue;

      
        


    }

  }


   for (int i = 0; i < n; i++) {
        // p[i].turnaround_time = p[i].completed_time - p[i].arrival_time;
        // p[i].waiting_time = p[i].turnaround_time - p[i].burst_time;

        // printf("%d\t%d\t\t%d\t\t%d\t\t%d\t\t%d\n", i + 1, p[i].at, p[i].at, p[i].waiting_time, p[i].turnaround_time, p[i].completed_time);
        
        printf("%d\t\t%s\t\%d\t\t%d\n", i + 1, p[i].name, p[i].at, p[i].bt);

        // avg_tt += p[i].turnaround_time;
        // avg_wt += p[i].waiting_time;
    }
}