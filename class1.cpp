#include <iostream>
#include <cmath>

using namespace std;

struct series {
    int n;
    int sum_1_n(){
        int sum = 0;
        for(int i =0;i<=n;i++){
            sum+=i;
        }
        return sum;
    }
    int sum_1_n2(){
        int sum = 0;
        for(int i =0;i<=n;i++){
            sum+=i*i;
        }
        return sum;
    }
};

struct point{
    float x, y;

};

struct line {
    point p1, p2;
    float len(){
        return  sqrt((p1.x-p2.x)*(p1.x-p2.x) +  (p1.y-p2.y)*(p1.y-p2.y));

    }
    // void mid(){
    //     cout<< (p1.x+p2.y)/2<<" , "<<(p1.x+p2.y)/2<<endl;
    // }
// point mid;
    void midpoint(){
        point mid;
        mid.x = (p1.x+p2.x)/2;
        mid.y = (p1.y+p2.y)/2;
        //return mid;
    }

};


int main ()
{
    // series object1, object2;
    // cin>>object1.n;
    // cout<<"The sum of n number "<<object1.sum_1_n()<<endl;
    //  cout<<"The sum of n sqaure number "<<object1.sum_1_n2()<<endl;

 //   point ob1, ob2;
    line l1;
    cin>>l1.p1.x>>l1.p1.y;
    cin>>l1.p2.x>>l1.p2.y;

  //  float len = sqrt((ob1.x-ob2.x)*(ob1.x-ob2.x) +  (ob1.y-ob2.y)*(ob1.y-ob2.y));
    cout<<l1.len()<<endl;


    //1st way of mid
    l1.midpoint();
    cout<<l1.mid.x<<" "<<l1.mid.y<<endl;

    //2nd way of mid
    // point ans = l1.midpoint();
    // cout<<ans.x<<" , "<<ans.y;



    return 0;

}