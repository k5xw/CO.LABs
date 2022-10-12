#include <iostream>

using namespace std;

int i,size,num;

void create_array()
{

   cout<<"Enter size of the array: ";
   cin>>size;
   
   int *num = new int(size);
   cout<<"Enter "<<size<<" value: "<<endl;
   for(i = 0;i<size;i++) 
   {
      cin>>num[i];
   }
   
   cout<<"Entered values are: ";
   for(i = 0;i<size;i++) 
   {
      cout<<num[i]<<" ";
   }
   cout<<endl;
   delete (num);
}

void resize_array()
{

   int *num = new int(size);
   
   cout<<"Enter the new size you want:"<<endl;
   cin>>size;

   cout<<"Enter "<<size<<" value: "<<endl;
   for(i= 0;i<size;i++) 
   {
      cin>>num[i];
   }
   
      cout<<"Entered values are: ";
   for(i = 0;i<size;i++) 
   {
      cout<<num[i]<<" ";
   }
   cout<<endl;
   delete (num);
   
}

int main()
{

    create_array();
    cout<<"******************************************"<<endl;
    resize_array();
    
    return 0;
}
