#include <iostream>
#include <vector>
using namespace std;
int main()
{
   int x,sum=0,temp;
   vector<int>grades;
   vector<int>varibales;
   for(int i=0;i<=grades.size();i++){
    cout<<"Enter grades to finish press -1 "<<endl;
    cin>>x;
    if (x!=-1){
    grades.push_back(x);
    }
    }
 for(int j=0;j<grades.size();j++)
         {
    for(int y=j+1;y<grades.size();y++)
         {
        if (grades[j]>grades[y])
          {
              temp=grades[j];
              grades[j]=grades[y];
              grades[y]=temp;
         }
          }
         }
  for(int k=0;k<grades.size();){
    for(int n=0;n<grades.size();n++){
            if (grades[k]==grades[n]){
                sum=sum+1;

             }
            else if (grades[k]>=grades[n]){
                     k++;


            }


    }
     cout<<" numbers of " <<grades[k] << " is " << sum <<endl;

    }



  return 0;

}
