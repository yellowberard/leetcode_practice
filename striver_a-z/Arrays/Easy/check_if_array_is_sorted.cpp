//https://takeuforward.org/data-structure/check-if-an-array-is-sorted/
//https://bit.ly/3Mpo6Tk

int isSorted(int n, vector<int> a) {
    // Write your code here.
    int max=0,flag=0;
    for(int i=0; i<a.size();i++)
    {
        if(max<=a[i]){
            max=a[i];
            flag=1;
        }
        else{
            flag=0;
        }
    }
    return flag;
}
