int print2largest(int arr[], int n) {
	    // code here
	    int max2=-1;
	    int max1=-1;
	    for(int i=0;i<n;i++)
	    {
	        if(max1<arr[i] && max2<arr[i])
	        {
	            max2=max1;
	            max1=arr[i];
	        }
	        else if(max2<arr[i] && max1>arr[i])
	        {
	            max2=arr[i];
	        }
	    }
	    return max2;
	}
