#include <stdio.h>
    
int main(){
int start[7] = {9, 11, 82, 73, 99, 2, 37};

 int end;
 sum_of (start, end);   


}

int sum_of (int a[], int n) {
    int MAX = 999;
    
    if (n < 1|| n>MAX){
        printf("array boundary error");
        exit(1);
        }
        else
            if (n == 1)
                return a[0];
            else
                return (a[n-1] + sum_of (a,n-1));
}
