#include <stdlib.h>
#include <stdio.h>
int* intersect(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize);
int main(){
	int a[5] = {1,2,3,4,5};
	int b[6] = {3,4,5,6,7,8};
	intersect(a,5,b,6,10);

}
int* intersect(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
	int i,j,k;
	for(i=0;i<nums1Size;i++)
		printf("%d ",nums1[i]);

	putchar('\n');

	for(j=0;j<nums2Size;j++)
		printf("%d ",nums2[j]);

	putchar('\n');

	int *re,*p;
	re = (int *)calloc(1,sizeof(int));
	k=0;
	for(i=0;i<nums1Size;i++){
		for(j=0;j<nums2Size;j++){
			if(nums1[i]==nums2[j]){
				//i++;
				//break;
				printf("--> %d\n",nums2[j]);
				re[k++]=nums2[j];
				re=(int*)realloc(re,k);
				break;
				//continue;
			}
		}
	}


	for(j=0;j<k;j++)
		printf("%d ",re[j]);
}
