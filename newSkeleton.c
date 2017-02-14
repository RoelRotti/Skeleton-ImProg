#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>



// Two dimensional Dynamic Array
// make with int **array = calloc2d(size of two dimensions)
	int **calloc2d(int sizeA, int sizeB)
	{
	  int **ptr = malloc(sizeA * sizeof (int *));

	  for (int i = 0; i < sizeA; ++i)
	  {
		ptr[i] = calloc(sizeB, sizeof(int));
	  }
	  return ptr;
	}

// making dynamic array
	int *newPathArray = malloc(number * sizeof(int));



// clear two dimensional dynamic array
	void freeMemory2D(int **array, int length) 
	{
	  for (int i = 0; i < length; ++i)
	  {
		free(array[i]);
	  }
	  free(array);
	}

// reallocating bigger array
	char *array=malloc(100*sizeof(char));
			
	do
	{
	  i++;
	  if(i==100) //I don't know how big the array needs to be, so if it needs to be huge, then I make the array bigger.
		array=realloc(array,100000*sizeof(char));



/* Power function */
	int power(int number, int exponent) {
		int m=1;
		while (exponent!=0) {
			m=m*number;
			exponent--;
		}
		return m;
	}

/* Reversenumber function */
	int reverseNumber(int n) {
		int reverse=0;
		while (n!=0) {
			reverse=reverse*10;
			reverse=reverse+(n%10);
			n=n/10;
		}
		return reverse;
	}

/* Greatest common dividor */
	int greatestCommonDividor(int n1, int n2) {
		int i=1;
		while (i!=0) {
			i=n1%n2;
			n1=n2;
			n2=i;
		}
		return n1;
	}

/* Recursive Function for GCD*/
	int gcdr ( int a, int b ){
	  if ( a==0 ) return b;
	  return gcdr ( b%a, a );
	}

/* finds Least common multiple */
	int lcm(int a, int b){
	  int max;
	  max = (b > a) ? a : b; 
	  while(1)
	  {
		  if(max % a == 0 && max % b == 0)
		  {
			  printf("%d", max);
			  break;
		  }
		  max++;
	  }
	  return 0;
	}
	
// Primepalindrome
	  /* checks if n is a prime */
	  int isPrime(int n){
		int i;
		/* check if uneven */
		if((n % 2) == 0){
		  return 0;
		}
		/* divide through uneven numbers */
		for(i = 3; i*i < n; i+=2){
		  if((n % i) == 0){
			return 0;
		  }
		}
		return 1;
	  }
	  /* puts a number into an array */
	  int* toArray(int n){
		  int l = log10(n) + 1;
		  int i;
		  int* a = malloc(l * sizeof(int));
		  for (i = 0; i < l; ++i){
			  a[i] = n % 10;
			  n = n / 10;
		  }
		  return a;
	  }
	  /*checks if n is a primepalindrome*/
	  int palin(int n){
		int i;
		int l = log10(n) + 1;
		int* a = toArray(n);
		for(i = 0; i < (l/2); i++){
		  if(a[i] != a[(l-i-1)]){
			return 0;
		  }
		}
		return 1;
	  }
	  void printPPal(int lwb, int upb){
		while(lwb <= upb){
		  if(palin(lwb) && isPrime(lwb)){
			printf("%d\n", lwb);
		  }
		  lwb++;
		}
	  }
	  int main(){
		printPPal(500,1000);
		return 0;
	  }

/* Primechecker function */
	int primeCheck(int n) {
		int j;
		if (n>1) {
			for (j=2; (j*j)<=n; j+=((j%2)+1)) {
				if (n%j==0) {
					return 0;
				}
			}
			if ((j*j)>n) {
				return 1;
			}
		}
		return 0;
	}

// primefactor
	#include <stdio.h>

	int main(){
		
		int number,div;    
		printf("Enter a number to know its prime factor: ");    
		scanf("%d",&number);
		
		printf("\nThe prime factors of %d are: \n\n",number);
		
		div = 2;
		
		while(number!=0){
			if(number%div!=0)
				div = div + 1;
			else {
				number = number / div;
				printf("%d ",div);
				if(number==1)
					break;
			}
		}
		return 0;
	}

//quicksort
	#include<stdio.h>

	void quicksort(int [10],int,int);

	int main(){
	  int x[20],size,i;

	  printf("Enter size of the array: ");
	  scanf("%d",&size);

	  printf("Enter %d elements: ",size);
	  for(i=0;i<size;i++)
		scanf("%d",&x[i]);

	  quicksort(x,0,size-1);

	  printf("Sorted elements: ");
	  for(i=0;i<size;i++)
		printf(" %d",x[i]);

	  return 0;
	}

	void quicksort(int x[10],int first,int last){
		int pivot,j,temp,i;

		 if(first<last){
			 pivot=first;
			 i=first;
			 j=last;

			 while(i<j){
				 while(x[i]<=x[pivot]&&i<last)
					 i++;
				 while(x[j]>x[pivot])
					 j--;
				 if(i<j){
					 temp=x[i];
					  x[i]=x[j];
					  x[j]=temp;
				 }
			 }

			 temp=x[pivot];
			 x[pivot]=x[j];
			 x[j]=temp;
			 quicksort(x,first,j-1);
			 quicksort(x,j+1,last);

		}
	}

/* Bubble sort code */
 
	#include <stdio.h>
	 
	int main()
	{
	  int array[100], n, c, d, swap;
	 
	  printf("Enter number of elements\n");
	  scanf("%d", &n);
	 
	  printf("Enter %d integers\n", n);
	 
	  for (c = 0; c < n; c++)
		scanf("%d", &array[c]);
	 
	  for (c = 0 ; c < ( n - 1 ); c++)
	  {
		for (d = 0 ; d < n - c - 1; d++)
		{
		  if (array[d] > array[d+1]) /* For decreasing order use < */
		  {
			swap       = array[d];
			array[d]   = array[d+1];
			array[d+1] = swap;
		  }
		}
	  }
	 
	  printf("Sorted list in ascending order:\n");
	 
	  for ( c = 0 ; c < n ; c++ )
		 printf("%d\n", array[c]);
	 
	  return 0;
	}

//palindrome string
	#include <stdio.h>
	#include <string.h>

	int main(){
		char string1[20];
		int i, length;
		int flag = 0;
		
		printf("Enter a string:");
		scanf("%s", string1);
		
		length = strlen(string1);
		
		for(i=0;i < length ;i++){
			if(string1[i] != string1[length-i-1]){
				flag = 1;
				break;
		   }
		}
		
		if (flag) {
			printf("%s is not a palindrome", string1);
		}    
		else {
			printf("%s is a palindrome", string1);
		}
		return 0;
	}

//palindrome from sentence
	#include <stdio.h>
	#include <ctype.h>
	 
	int main(void)
	{
		char letter[80];
		int tag, count, countback, flag, loop = 1;
	 
		while(loop)
		{
			flag = 1;
	 
			// read the text
			printf("Please input a word, phrase or sentence: n");
			for(count=0; (letter[count] = getchar()) != '\n'; ++count)
				;
			if((toupper(letter[0])=='E') && (toupper(letter[1])=='N') && (toupper(letter[2])=='D')){
				break;
			}
			tag = count-1;
	 
			//carry out the search
			for((count=0, countback=tag); count<=tag/2; (++count, --countback)){
				if(letter[count] != letter[countback]){
					flag=0;
					break;
				}
			}
	 
			//display message
			for(count=0; count<=tag; ++count){
				putchar(letter[count]);
			}
	 
			if(flag){
				printf(" is a Palindromenn");
			}else{
				printf(" is not a Palindromenn");
			}
		}
	 
		return 0;
	}

//palindrome number
	#include <stdio.h>
	int main()
	{
		int n, reversedInteger = 0, remainder, originalInteger;

		printf("Enter an integer: ");
		scanf("%d", &n);

		originalInteger = n;

		// reversed integer is stored in variable 
		while( n!=0 )
		{
			remainder = n%10;
			reversedInteger = reversedInteger*10 + remainder;
			n /= 10;
		}

		// palindrome if orignalInteger and reversedInteger are equal
		if (originalInteger == reversedInteger)
			printf("%d is a palindrome.", originalInteger);
		else
			printf("%d is not a palindrome.", originalInteger);
		
		return 0;
	}


// binary search
	#include <stdio.h>
	 
	int main()
	{
	   int c, first, last, middle, n, search, array[100];
	 
	   printf("Enter number of elements\n");
	   scanf("%d",&n);
	 
	   printf("Enter %d integers\n", n);
	 
	   for (c = 0; c < n; c++)
		  scanf("%d",&array[c]);
	 
	   printf("Enter value to find\n");
	   scanf("%d", &search);
	 
	   first = 0;
	   last = n - 1;
	   middle = (first+last)/2;
	 
	   while (first <= last) {
		  if (array[middle] < search)
			 first = middle + 1;    
		  else if (array[middle] == search) {
			 printf("%d found at location %d.\n", search, middle+1);
			 break;
		  }
		  else
			 last = middle - 1;
	 
		  middle = (first + last)/2;
	   }
	   if (first > last)
		  printf("Not found! %d is not present in the list.\n", search);
	 
	   return 0;   
	}

// primenumber generator
	#include<stdio.h>
	 
	int main()
	{
	   int n, i = 3, count, c;
	 
	   printf("Enter the number of prime numbers required\n");
	   scanf("%d",&n);
	 
	   if ( n >= 1 )
	   {
		  printf("First %d prime numbers are :\n",n);
		  printf("2\n");
	   }
	 
	   for ( count = 2 ; count <= n ;  )
	   {
		  for ( c = 2 ; c <= i - 1 ; c++ )
		  {
			 if ( i%c == 0 )
				break;
		  }
		  if ( c == i )
		  {
			 printf("%d\n",i);
			 count++;
		  }
		  i++;
	   }
	 
	   return 0;
	}


//is prime
	int isPrime(int n) {
		if ((n < 3) || (n%2 == 0)) {
		return (n == 2 ? 1 : 0);
	}
	for (int d = 3; d*d <= n; d += 2) {
		if (n % d == 0) {
		return 0;
		}
	}
	return 1;
	}

	//reverse
	int reverse(int n) {
		int r = 0;
		while (n > 0) {
			r = r*10 + (n%10);
			n /= 10;
		}
	return r;
	}

/* Sort Array */
	int i, temp, swapped;
	int x[10];

	for (i=0;i<10; i++) {
		scanf("%d",&x[i]);
	}

	while(1){
		swapped=0;
		for (i=0; i<10-1; i++) {
			if (x[i]>x[i+1]) {
				temp=x[i];
				x[i]=x[i+1];
				x[i+1]=temp;
				swapped=1;
			}
		}
		if (swapped==0) {
			break;
		}
	}


// Print primenumbers within range
	void primeNumbers(int n) {
	 int i;
	 for (i=2; i<=n; i+=((i%2)+1)) {   // i+=((i%2)+1)) and j+=((j%2)+1) if we would've started at 2 (+1 if even, +2 if uneven)
		 if (primeCheck(i)==1) {
			 printf("%d\n",i);
		 }
	 }
	}

/* Swap Digits */
	int swapDigits(int m, int n, int x) {       
		long counter = 1;           
		while (m > 0) {
			counter *= 10;           
			m--;
		}
		m = ((x%(counter*10))/(counter));       
		long counter2 = 1;           
		while (n > 0) {
			counter2 *= 10;
			n--;
		}
		n = ((x%(counter2*10))/(counter2));
		return (x-((m*(counter))+(n*(counter2)))+(m*(counter2))+(n*(counter)));
	}  
		

	int main (int argc, char *argv[]) {
		return 0;
	}

// recursiv cnt plusmin
	int cntPlusMin(int idx, int length, int a[], int n, int sum) {
		if (idx == length) {
			return (sum == n);
		}
		return cntPlusMin(idx+1, length, a, n, sum+a[idx]) +
		cntPlusMin(idx+1, length, a, n, sum-a[idx]);
		}
		
		int plusmin(int length, int a[], int n) {
			return cntPlusMin(1, length, a, n, a[0]);
		}
		
	int main() {
		int len, n, i, a[100];
		scanf ("%d %d", &len, &n);
		for (i=0; i < len; i++) {
			scanf("%d", &a[i]);
		}
		printf("%d\n", plusmin(len, a, n));
		return 0;
	}



// bitstring
	void bitstrings(int zeros, int ones, int len, int bits[]) {
		if (zeros == 0 && ones == 0) {
			int i;
			for (i=0; i < len; i++) {
			printf("%d", bits[i]);
			}
			printf("\n");
		} else {
			if (zeros > 0) {
				bits[len] = 0;
				bitstrings(zeros-1, ones, len+1, bits);
				}
			if (zeros < ones) {
				bits[len] = 1;
				bitstrings(zeros, ones-1, len+1, bits);
			}
		}
	}
	
	void showBitStrings(int n) {
		int bits[20];
		bitstrings(n, n, 0, bits);
	}
	
	int main() {
		int n;
		scanf ("%d", &n);
		showBitStrings(n);
		return 0;
	}

// convert decimal to binary
	long long convertDecimalToBinary(int n)
	{
		long long binaryNumber = 0;
		int remainder, i = 1, step = 1;

		while (n!=0)
		{
			remainder = n%2;
			printf("Step %d: %d/2, Remainder = %d, Quotient = %d\n", step++, n, remainder, n/2);
			n /= 2;
			binaryNumber += remainder*i;
			i *= 10;
		}
		return binaryNumber;
	}


// convert binary to decimal
	int convertBinaryToDecimal(long long n)
	{
		int decimalNumber = 0, i = 0, remainder;
		while (n!=0)
		{
			remainder = n%10;
			n /= 10;
			decimalNumber += remainder*pow(2,i);
			++i;
		}
		return decimalNumber;
	}

// getchar
	while ((c=getchar()) != EOF && c != '\n')
	  {
		  //printf("sum: %d\n", sum);
		  //printf("c: %d\n", c);
		sum += (c-48);
		printf("%d", (c-48));
	  }

// power recursive
	int power(int g, int m){
		if(m==0){
			return 1;
		}
		if(m%2==0){
			return power(g*g, m/2);
		}
		return g*power(g, m-1)
	}

// 2^power
	int pow2(int n){
		int p2 = 1;
		while(n){
			p2 = 2*p2;
			n--;
		}
		return p2;
	} 
// or:
	int pow2(int n){
	  return 1<<n;
	}
// lexographic order
	public static boolean nextPermutation(int[] array) {
		// Find non-increasing suffix
		int i = array.length - 1;
		while (i > 0 && array[i - 1] >= array[i])
			i--;
		if (i <= 0)
			return false;
		
		// Find successor to pivot
		int j = array.length - 1;
		while (array[j] <= array[i - 1])
			j--;
		int temp = array[i - 1];
		array[i - 1] = array[j];
		array[j] = temp;
		
		// Reverse suffix
		j = array.length - 1;
		while (i < j) {
			temp = array[i];
			array[i] = array[j];
			array[j] = temp;
			i++;
			j--;
		}
		return true;
	}
