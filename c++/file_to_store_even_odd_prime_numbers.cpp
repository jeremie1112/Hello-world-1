#include <iostream>
#include <fstream>

using namespace std;

void prime(int num){
  int count = 0;
  ofstream write_prime;
  for (int i = 1; i<=num; i++){
    if (num%i == 0){
      count++;
    }
  }    
  if (count == 2){  
    write_prime.open("prime.txt",ios::app);
    write_prime<<num<<"\n";
    cout<<num<<" is prime"<<endl;
    write_prime.close();
  }   
} 


int main() {
  ofstream write_even, write_odd;
  int num;
  do{
  cout<<"input number: "<<endl;
  cin>>num;
  if (num < 0)
    return -1;
  if (num % 2 == 0){
    write_even.open("even.txt",ios::app);
    // if (!write_even){
    //   cout<<"File even.txt not Found!!"<<endl;
    //   return -1;
    // }
    write_even<<num<<"\n";
    cout<<num<<" is even"<<endl;
    write_even.close();
  }
  else{
    write_odd.open("odd.txt",ios::app);
    write_odd<<num<<"\n";
    cout<<num<<" is odd"<<endl;
    write_odd.close();
  }
  prime(num);
  }while(num >= 0);
  return 0;

}
