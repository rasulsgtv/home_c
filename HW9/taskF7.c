#include <stdio.h>

 
int compression(int a[], int b[], int N)
 {
	 if (N <=0)
	 {
		 return 0;
	 }
	 int k = 0;
	 
	 if (a[0] == 1)
	 {
		b[k] = 0;
		k++;
	 }
	 int count = 1;
	 
	 for (int i = 1; i < N; i++)
	 {
		 if (a[i] ==a[i-1])
		 {
			 count++;
		 }
		 else
		 {
			 b[k] = count;
			 k++;
			 count = 1;
		 }
	 }
	b[k] = count;
	k++;
	
	 return k;
 }
 
//~ int main(int argc, char **argv)
//~ {


	//~ return 0;
//~ }

