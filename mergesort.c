#include <stdio.h>
#include <stdlib.h>
 
void merge(int **a, int ibegin, int imid, int iend, int **b)
{
  int i = ibegin, j = imid;
  for (int k = ibegin; k < iend; k++)
    b[k] = a[i<imid && (j>=iend || *a[i]<=*a[j]) ? i++ : j++];
}
 
void splitmerge(int **b, int ibegin, int iend, int **a)
{
  if (iend - ibegin < 2)
  {
  return;
  }
  int imid = (iend + ibegin) / 2;
  splitmerge(a, ibegin, imid, b);
  splitmerge(a, imid,   iend, b);
  merge(b, ibegin, imid, iend, a);
}
 
int **mergesort(int *a, int size)
{
  int **ret = malloc(size * sizeof *ret);
  int **tmp = malloc(size * sizeof *tmp);
  for (int i = 0; i < size; i++)
  ret[i] = tmp[i] = a + i;
  splitmerge(tmp, 0, size, ret);
  free(tmp);
  return ret;
}
 
int main()
{
  int a[] = {64,82,45,125,15,268,1,2,25,2,5};
  void merge(int **a, int ibegin, int imid, int iend, int **b);
  void splitmerge(int **b, int ibegin, int iend, int **a);
  int **mergesort(int *a, int size);
  int size = sizeof a / sizeof a[0];
  int **ret = mergesort(a, size);
  printf("Sorted array elements\n");
  for (int i = 0; i < size; i++)
  printf("%d ", *ret[i]);
  putchar('\n');
  free(ret);
  return 0;
}

