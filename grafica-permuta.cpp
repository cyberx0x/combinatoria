#include<iostream>
#include<algorithm>
#include<stdlib.h>
using namespace std;
int * x;
void imprime(int i,int j){
   cout<<"\"";
   for(int k=i;k<j;k++){
      cout<<x[k];
      }
   cout<<"\"";

   }

void bubble(int n){
      int s=1;
      while(s){
         s=0;
         for(int j=1;j<n;j++){
               if(x[j-1] < x[j]){
                  imprime(0,n);
                     cout<<"--";
                   swap(x[j-1],x[j]);
                   imprime(0,n);
                   cout<<"[color=\"red\" style=\"bold\" len=\"4.6\"]"<<endl;
                   s=1;
                  }
            }
         }
   }


int main(int argc, char **argv){
   int n;
   //cin >> n;
   n = atoi(argv[1]);
   x=new int[n];

   cout<< "strict graph A { "<<endl<<"overlap=\"compress\""<<endl<<"size=\"30,30\""<<endl;

   for(int i=0;i<n;i++){
        x[i]=i+1;
      }
   bubble(n);

   for(int i=0;i<n;i++){
        x[i]=i+1;
      }
   do {

      for (int i=0;i<n-1;i++){
         cout<< "\"";
         for(int k=0;k<n;k++)
            cout<<x[k];
         cout<< "\" -- \"";
         for (int j=0;j<i;j++)
            cout<<x[j];
         cout<<x[i+1]<<x[i];
         for (int j=i+2;j<n;j++)
            cout<<x[j];
         cout<< "\""<<"[len=\"4.6\"]"<<endl;
      }
   } while(next_permutation(x, x + n));



   cout<<"}";
   return 0;
   }
