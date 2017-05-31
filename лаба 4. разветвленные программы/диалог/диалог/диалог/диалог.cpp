#include <iostream>
int *pfmin(int *p, int n)
 {  int *pmin;
    for (pmin = p; n > 0; p++, n--)
      if (*p < *pmin) pmin = p;
    return pmin;   	
 }

 void main()
 { 
    int B[5] = {4, 8, 2, 6, 4};
    (*pfmin(B, 5))++;
    for (int i = 0; i < 5; i++) 
         printf("%d ", B[i]);   
}
