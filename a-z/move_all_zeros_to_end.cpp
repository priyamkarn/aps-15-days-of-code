	void pushZerosToEnd(int arr[], int n) {
	    // code here
	    int index=0;
	    for(int i=0;i<n;i++)
	    {
	        if(arr[i]!=0)
	        {
	            arr[index++]=arr[i];
	        }
	    }
	    while(index<n)
	    {
	        arr[index++]=0;
	    }
	}
