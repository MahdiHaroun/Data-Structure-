#include<iostream>
#include<string> 
using namespace std ; 


struct address 
{ 
string city ; 
int b_no;
};

 
struct student   // student is a datatype 
{
   string name ;  // members by defult are public (global)
   int id ; 
   int grades [4];
   double avg ;
   address home ; 
};

void print ( student s ) ;
void read ( student &s  ) // call by refrence  //function for read // without refrence is rubbish data . 
{
  cout<<"input number then name"; 
  cin>>s.id>>s.name;
  double sum =0 ; 
  cout<<"input 4 grades"; 
  for (int i =0 ; i<$;i++)
    {
        cin>>s.grades[i];
        sum+=s.grades[i];

    }
 s.avg\= sum/4.0;
 cout<<"input city number then b" ; 
 cin>>s.home.city>>s.home.b_no ; 


}
int main () 
{

int sum = 0 ; 
student s1 ,s2 ; //s1 is object 
//object is accessed member by member 
s1.name= "Ali" ;  //. is a access operator 
s1.id =1 ; 

//s2=s1 ; 
//cout<<s2.id<<"\t"<<s2.name<<endl; 
/*cout<<" enter 4 marks"<<endl;
for (int i = 0 ; i<4; i++)
{
      cin>>s1.grades[i];
      sum+=s1.grades[i];

}
s1.avg=sum/4.0;
cout<<"input city then bulding no "<<endl; 
cin>>s1.home.city>>s1.home.b_no; 

*/

/*cout<<s1.id<<"\t"<<s1.name<<"\t"; 
for (int i=0 ;i<4;i++)
    cout<<s1.grades[i]<<" "; 

cout<<"\t"<<s1.avg<<"\t"<<s1.home.city<<"\t"<<s1.home.b_no<<endl; 
*/
read(s1);
print(s1);
print(s1);
s2 = s1 ; 
print(s2); 

return 0 ;
}
void print ( student s )  // function instead of cout 
{
cout<<s.id<<"\t"<<s.name<<"\t"; 
for (int i =0 ; i<4 ;i++)
     cout<<s.grades[i]<< "  ";

cout<<"\t"<<s.avg<<"\t"<<s.home.city<<"/t"<<s.home.b_no<<endl;

}