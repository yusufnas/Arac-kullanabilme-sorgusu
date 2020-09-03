#include <iostream>
using namespace std;
int main()
{
 string ad, alkolDurumu;
 int yas, sinavYili;
 
 //Kullanici bilgilerini aliyoruz
 cout<<"Adiniz nedir?"<<endl;
 cin>>ad;
 cout<<"Kac yasinizdasiniz?"<<endl;
 cin>>yas;
 cout<<"Ehliyet sinavina en son hangi yil girdiniz?"<<endl;
 cin>>sinavYili;
 cout<<"Alkol kullaniyor musunuz? e/h"<<endl;
 cin>>alkolDurumu;
 if(alkolDurumu=="e"){
 cout<<"Arac kullanamazsiniz."<<endl;
 } 
  //alkol kullanmiyor ve yasi 18den kucuk
 else if (yas<18){
 cout<<"Arac kullanamazsiniz."<< endl;
 } 
 //alkol kullanmiyor ve yasi 65ten buyuk
 else if (yas>65 && (2016-sinavYili)>5){
 cout<<"Arac kullanamazsiniz."<< endl;
 } 
 else cout<<"Arac kullanabilirsiniz"<< endl;
 return 0;
}
