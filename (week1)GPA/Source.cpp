#include<stdio.h>
int main()
{
	int i, n;
	float grade[20],credit[20],GPA, sum = 0, sum2=0, Koon;
	printf("Total Subjects : ");
	scanf_s("%d", &n);
	for (i = 0; i < n; i++)
	{
		printf("GRADE SUBJECT %d : ", i+1);
		scanf_s("%f", &grade[i]);
		printf("CREDIT SUBJECT %d : ", i+1);
		scanf_s("%f", &credit[i]);
		Koon = grade[i] * credit[i];
		sum += Koon;
		sum2 += credit[i];
	}
	GPA = sum / sum2;
	printf("Your GPA is %.2f", GPA);

	return 0;

}