#include <stdio.h>
#include <string.h>

 struck student{
int regNumber;
char firstName[20];
char lastName[20];
float introProgramming;
float networking;
float accounting;
float os;
float compApps;
};

int main(){
struck student s[80];
int i, n;
printf("enter the number of students:");
scanf("%d",&n);
for(i=0; i<n;+++i{
printf("\nEnter details of student %d:\n",i+1);
printf("regNumber:");
scanf("%d"&s[i].regNumber);
printf("firstName:");
scanf("%s",s[i].firstName);
printf("lastName:");
scanf("%s",s[i].lastName);
printf("introProgramming:");
scanf("%f",&s[i].introProgramming);
printf("networking:");
scanf("%f",&s[i].networking);
printf("accounting:");
scanf("%f",&s[i].accounting);
printf("os:");
scanf("%f",&s[i].os);
printf("compApps:)
scanf("%f",&s[i].compApps);
}
printf("\nStudent details:\n");
for(i=0; i<n;+++i){
printf("\nRegNumber:%d\n",s[i].regNumber);
printf("introProgramming:%.2f\n",s[i].introProgramming);
printf("networking:%2f\n",s[i].networking);
printf("accounting:%2f\n",s[i].accounting);
printf("os:%2f\n",s[i].os);
printf("compApps:%2f\n",s[i].compApps);
}

return 0;
}
