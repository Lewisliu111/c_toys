#include <stdio.h>

/*
 *思想：分治法
 */
void MergeSort()
void MergeArray(int a[], int n, int b[], int m, int c[]);

int main() 
{




}


//将两个有序数列a[] && b[] merge to c[]中
/*
void MergeArray(int a[], int n, int b[], int m, int c[])
{
	int i, j, k;

	i = j = k = 0;
	while (i < n && j < m) {
		if (a[i] < a[j])
			c[k++] = a[i++];
		else 
			c[k++] = b[j++];
	}

	while (i < n) {
		c[k++] = a[i++]
	}
	
	while (j < m) 
		c[k++] = b[j++];
}
*/

void MergeSort(int a[], int first, int last, int temp[]);
{
	if (first < last) {
		int middle = (first + last) / 2;
		MergeSort(a, first, middle,temp);   //左半部分排好序
		MergeSort(a, middle+1,last,temp);  //右半部分排好序
		MergeArray(a, first, middle, last, temp);
	}
}

void MergeArray(int a[], int first, int middle, int end, int temp[])
{
	int i = first;
	int m = middle;
	int j = middle + 1;
	int n = end;
	int k = 0;

	while ()






}
