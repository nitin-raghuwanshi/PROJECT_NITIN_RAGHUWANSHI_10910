//Student Attendance Management System
#include <stdio.h>
void Attendence(int students,int arr[]);
int main() {
    int students;
    printf("Enter Total Number of students:\n");
    scanf("%d",&students);
    int arr[students];
    Attendence(students,arr);
    return 0;
}

void Attendence(int students,int arr[]){
    for(int i=0;i<students;i++){
        printf("Enter 0 for Absent and 1 for present:\n");
        do{scanf("%d",&arr[i]);
        }
        while(arr[i]!=0&&arr[i]!=1);
    }
    int present=0,absent=0;
    for(int i=0;i<students;i++){
        if(arr[i]==1){
            printf("Student %d : Present\n",i+1);
            present++;
        }
        else {
            printf("Student %d : Absent\n",i+1);
            absent++;
        }
    }
    printf("Present: %d\nAbsent : %d\n",present,absent);
}