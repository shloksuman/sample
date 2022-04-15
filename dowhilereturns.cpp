#include<iostream>
using namespace std ;

int main()
{   //dowhile returns
    //implementing dowhile in prime checking loop
    int repeat ;
    
    cout << "This is a sample program to check a prime number \n\n Enter any number to check : " ;
    int N ;
    int div=2 ;
    cin>>N ;
    while(div<N)
    {
        //checking if a the number is divisible by any number
         int a ;
         a=N%div ;
         if(a==0)
         {cout<<"\n\n It's a NOT A PRIME!!!! " ;
         return 0; }
         else
         div=div+1 ;
    }
    cout<<"\n\n It's a PRIME!!!!  " ;
    cout<<"\n WANT TO CHECK AGAIN? ENTER '1' TO 'CONTINUE' OR OTHER NO TO TERMINATE :: " ;
    cin>>repeat;
    while(repeat==1);
    return 0 ;
}