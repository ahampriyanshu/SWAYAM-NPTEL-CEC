position = linear_search(array, n, search);
 
   if (position == -1)
      printf("%d isn't present in the array.\n", search);
   else
      printf("%d is present at location %d.\n", search, position+1);
 
   return 0;
}
 
int linear_search(int a[], int n, int find) {
   int c;
 
   for (c = 0 ;c < n ; c++ ) {
      if (a[c] == find)
         return c;
   }
 
   return -1;
}
