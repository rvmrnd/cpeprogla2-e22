#include <iostream>
#include <fstream>
using namespace std;

int main(){
    int arr[]={1,2,4,3};
    int x=0, idx, idx2, i;

    ifstream read("input.txt");
    FILE *fp;
    fp = fopen("18.txt", "w");
    read >> idx >> idx2;
    for(i=idx;i<=idx2;i++){
      cout << i-- <<" ";
      fprintf(fp, "%d ", i);
      i+=arr[(x%4)];  
      x++;
    }
    fclose(fp);
    //system("pause");
    return 0;
}
