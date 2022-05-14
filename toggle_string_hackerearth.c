//Problem Statement 
You have been given a String S consisting of uppercase and lowercase English alphabets. You need to change the case of each alphabet in this String. That is, all the uppercase letters should be converted to lowercase and all the lowercase letters should be converted to uppercase. You need to then print the resultant String to output.

Input Format
The first and only line of input contains the String S

Output Format
Print the resultant String on a single line.
  
Sample Input
abcdE

Sample Output
ABCDe


#include<stdio.h>
int main()
{
	char str[100];
	scanf("%s",str);
	int i,d;
	for(i=0;i<=99;i++)
	{
		d=(int)str[i];
		if(d>=65 && d<=90)
			printf("%c",d+32);
		else if(d>=97 && d<=122)
			printf("%c",d-32);
	}
	return 0;

}
