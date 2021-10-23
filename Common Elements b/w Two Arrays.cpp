#include<iostream>

using namespace std;

int main()
{
   int arr1[10], arr2[10], arr3[10], i, j, k=0, x, tot;
   cout<<"Enter 10 Elements for First Array: ";
   for(i=0; i<10; i++)
      cin>>arr1[i];
   cout<<"Enter 10 Elements for Second Array: ";
   for(i=0; i<10; i++)
      cin>>arr2[i];

   // Finding and storing common elements
   for(i=0; i<10; i++)
   {
      for(j=0; j<10; j++)
      {
         if(arr1[i]==arr2[j])
         {
            tot = 0;
            for(x=0; x<k; x++)
            {
               if(arr1[i]==arr3[x])
                  tot++;
            }
            if(tot==0)
            {
               arr3[k] = arr1[i];
               k++;
            }
         }
      }
   }

   // Printing common elements
   cout<<"\nCommon Elements are:\n";
   for(i=0; i<k; i++)
      cout<<arr3[i]<<" ";

   cout<<endl;
   return 0;
}
