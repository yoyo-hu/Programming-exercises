#include<stdio.h>
#include<stdlib.h>

struct gradeTable
{
	int studentID;
	char name[20];
	int grade;
}stu[100], t;

int main()
{
	
	int n;
	int i, j;
	scanf("%d", &n);
	for(i = 0; i < n; ++i)
	{
		scanf("%d%s%d", &stu[i].studentID, stu[i].name, &stu[i].grade);
	}
	
	for (i = 0; i < n-1; i++) 
		for (j = i+1; j < n; j++)
			if (stu[i].grade < stu[j].grade || 
				(stu[i].grade == stu[j].grade&&stu[i].studentID > stu[j].studentID)) {
				t = stu[i];
				stu[i] = stu[j];
				stu[j] = t;
			} 
	
	for(i = 0; i < n; ++i)
	{
		printf("%d %s %d\n", stu[i].studentID, stu[i].name, stu[i].grade);
	}
	
	return 0;
}