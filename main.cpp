#include<iostream>
using namespace std;
class npoint
{
    //STATIC VARIABLE
private:
    static int length;
    int*p;
public:

//default constructor for dynamic array
    npoint(){
        p=new int[length];
        for (int i = 0; i < length; i++){
            p[i]=0;
        }
        //use for the count of objects    
        length++;
    }

     void set(int index,int val){
        p[index]=val;
    }

    
    int get(int index)const{
        return p[index];
    }
     //static function
    static int getLength(){
         
      return(length);
    }
   //destructor created
      ~npoint(){
         delete []p;
      }
   //
};
//static member intialization
//STATIC VARIABLE MAINTAINS THE OBJECT COUNTS
int npoint::length=4;

int main(){
    npoint np,np1;
  
    np.set(0,2);
    np.set(1,6);
    np.set(2,4);
    np1.set(3,5);
    np1.set(4,4);
    cout<<np.get(0)<<endl;
    cout<<np.get(1)<<endl;
    cout<<np.get(2)<<endl;  
    cout<<np1.get(3)<<endl;
    cout<<np1.get(4)<<endl;
    
    // because there is addition of the two object i created and 4 which is already in length
     cout<<"length  is "<<npoint::getLength()<<endl;

   

return 0;
};
