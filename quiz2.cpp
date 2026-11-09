#include <iostream>
using namespace std;

int sign_counter(int arr[]){
  int p=0,n=0,zeros=0;
  for(int i=0; i<5;i++){
    if(arr[i]<0){
      p++;
     }else if(arr[i]>0) {
       n++; 
    }else 
     { zeros++; 
    }
  }
    cout<<"the number of negetive numbers= "<<p<<endl;
    cout<<"the number of postive numbers= "<<n<<endl;
    cout<<"the number of  zeros= "<<zeros<<endl;

return 0;
 }

int sum(int arr[]){
   int s1=0,s2=0;
   for(int i =0;i<5;i++){
if(arr[i]<0){
  s1+=arr[i];}
else if(arr[i]>0){
    s2+=arr[i]; 
    }
  }
cout<<"sum of postive numbers="<<s2<<endl;
cout<<"sum of negetive numbers="<<s1<<endl;
  return 0;

}

int avr(int arr[]){
   int sum=0;
   double avr;
   for(int i=0;i<5;i++){
    sum+=arr[i];
   }
   avr=sum/5;
   cout<<"total sum="<<sum<<endl;
  cout<<"avrage="<<avr;
   return 0;
}


void display(int b[]){
cout<<sign_counter(b)<<endl;
cout<<sum(b)<<endl;
cout<<avr(b);
}


int main(){
  int numbers[5];
  cout<<"enter five numbers"<<endl;
  for(int i=0;i<5;i++){
  cout<<"enter your number "<<(i+1)<<endl;
  cin >>numbers[i]; 
  }
 display( numbers);
    return 0;

  }
