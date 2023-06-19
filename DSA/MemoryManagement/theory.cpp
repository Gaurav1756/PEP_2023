/*Memory allocation is done by two methods

Static memory allocation(compile time allocation)
Dynamic memory allocation(Run time allocation)


      *Static memory allocation

      #include<iostream>
      using namespace std;
      int main() {
        int x;
      }

      -In SMA, size and location where variable will be stored is fixed during compile time.

      -location where variables will be stored is saved, but the actual physical is not allocated at
      compile time, but at run time.

      -SMA is slightly faster than DMA.

      -Allocation and deallocation that is done by compiler itself.



      *Dynamic memory allocation

      -DMA allows you to define memory requirement during execution of program

      -it uses heap memory.

      -in DMA, "new" keyword is used to allocate memory, and "delete" keyword is used to deallocate memory.

      -new keyword returns the address that has been allocated to variable on the heap memory(during runtime)

      -allocation and deallocation is done by us.

      #include<iosttream>
      using namespace std;
      int main() {
        int n;
        cin>>n;


        //allocate memory
        int *arr = new int[n];

        for(int i = 0; i < n; i++) {
            cin>>arr[i];
        }

        //free space 
        delete []arr;
      }










*/