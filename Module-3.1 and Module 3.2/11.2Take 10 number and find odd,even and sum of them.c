/*WAP to take 10 no. Input from user and find out �
 How many Even numbers are there
 How many odd numbers are there
 Sum of even numbers
 Sum of odd numbers */
 
 #include<stdio.h>
 
 int main()
{
	
	int num,i,sumeven=0, sumodd=0;
 	printf("Enter the numbers:- ");
 	
 	
 	for(i=0;i<10;i++)
 	{
 		scanf("%d", &num);
 		
 		if(num%2==0)
 		{
 			printf("%d is a even number\n", num);
 			sumeven+=num;
		}
		
		else
		{
			printf("%d is a odd number\n", num);
			sumodd+=num;
		}
		
		
	}
	
	printf("Sum of even number is %d\n", sumeven);
	
	printf("Sum of odd number is %d\n", sumodd);
 	
 	
 	
} 
