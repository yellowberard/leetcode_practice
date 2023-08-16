// https://bit.ly/3OaPohF
//https://takeuforward.org/data-structure/find-second-smallest-and-second-largest-element-in-an-array/

// optimal solution

vector<int> getSecondOrderElements(int n, vector<int> a) {
      int max=0,smax=0,min=0,smin=0;
      max=smax=a[0];
      for(int i=1;i<n;i++)
      {
        if(a[i]>max)
        {
          smax=max;
          max=a[i];
        }
        else if(a[i]<max && a[i]>smax)
        {
          smax=a[i];
        }

      }
      ans.push_back(smax);
      min=smin=INT_MAX;
      for(int i=0;i<n;i++)
      {
        if(a[i]<min)
        {
          smin=min;
          min=a[i];
        }
        else if(a[i]!=min && a[i]<smin)
        {
          smin= a[i];
        }
      }

      ans.push_back(smin);
return ans;
}
