-------------------->>>>>>>>>>>>>>> Approach <<<<<<<<<<<<<<<<<<<<-------------------

//T.C - O(log N)
// S.C - O(1)

int NthRoot(int n, int m)
{
	    int start =1; int end =m;
	    while(start<=end){
	        int mid = (start+end)/2;
	        if(pow(mid,n)==m){
	            return mid;
	        }
	        else if(pow(mid,n)<m){
	            start = mid+1;
	        }
	        else{
	            end = mid-1;
	        }
	    }
	    return -1;
}  