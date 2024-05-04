// ------------------------->>>>>>>>>>>>>>>>>>>>> Approach -1 <<<<<<<<<<<<<<<<<<<<<<<<<-----------------------

 vector<int> searchRange(vector<int>& nums, int target) {
        int start = 0; int end =nums.size(); 
       
        int firstOcc = -1;
        int n = nums.size();

        for(int i=0;i<n;i++){
            if(nums[i]==target){
                firstOcc = i;
                break;
            }
        }
         
         int endingOcc = -1;
        for(int i=n-1;i>=0;i--){
            if(nums[i]==target){
                endingOcc = i;
                break;
            }
        }
        return {firstOcc,endingOcc};
    }


// ------------------------->>>>>>>>>>>>>>>>>>>>> Approach -2 <<<<<<<<<<<<<<<<<<<<<<<<<-----------------------

 int Firstoccurence(vector<int>& arr , int n , int key){
    int s = 0 ; 
    int e = n -1;
    int mid  = s + (e - s) / 2 ;
    int ans = -1;
    while (s <= e){
        if (arr[mid ] == key){
            ans = mid ;
            e = mid - 1;
            
        }
        else if (key > arr[mid]){
             s = mid +1;

        }
        else if (key < arr [mid]){
            e = mid -1;

        }
        mid  = s + (e - s) / 2 ;

    }

    return ans;
}



int Lastoccurence(vector<int>& arr, int n , int key){
    int s = 0 ; 
    int e = n -1;
    int mid  = s + (e - s) / 2 ;
    int ans = -1;
    while (s <= e){
        if (arr[mid ] == key){
            ans = mid ;
            s = mid + 1;
            
        }
        else if (key > arr[mid]){
             s = mid +1;

        }
        else if (key < arr [mid]){
            e = mid -1;

        }
        mid  = s + (e - s) / 2 ;

    }

    return ans;
}



    vector<int> searchRange(vector<int>& nums, int target) {
         pair<int,int>p;
         int n = nums.size();

    p.first = Firstoccurence(nums,n,target);
    p.second = Lastoccurence(nums,n,target);
    return {p.first,p.second};
    }


// ------------------------->>>>>>>>>>>>>>>>>>>>> Approach -3 <<<<<<<<<<<<<<<<<<<<<<<<<-----------------------

  vector<int> searchRange(vector<int>& arr, int target) {
        int n = arr.size();
        int start = 0 ; int end = n-1;
         vector<int>ans;
        int mid = (start+end)/2;
        int first = -1; int last = -1;
        while(start<=end){
            if(arr[mid]==target){
                  first = mid;
                  end = mid-1;
            }else if(arr[mid]>target){
                end = mid-1;
            }else{
                start = mid+1;
            }
            mid = (start+end)/2;
        }

        start = 0 ;  end = n-1;  mid = (start+end)/2;
         while(start<=end){
            if(arr[mid]==target){
                  last = mid;
                  start = mid+1;
            }else if(arr[mid]>target){
                end = mid-1;
            }else{
                start = mid+1;
            }
            mid = (start+end)/2;
        }

        ans.push_back(first);
        ans.push_back(last);
        return ans;
  }


  // ------------------------->>>>>>>>>>>>>>>>>>>>> Approach -4 <<<<<<<<<<<<<<<<<<<<<<<<<-----------------------

   vector<int> searchRange(vector<int>& arr, int target) {
        int n = arr.size();
        int start = 0 ; int end = n-1;
         pair<int,int>p;
        int mid = (start+end)/2;
        int first = -1; int last = -1;
        while(start<=end){
            if(arr[mid]==target){
                  first = mid;
                  end = mid-1;
            }else if(arr[mid]>target){
                end = mid-1;
            }else{
                start = mid+1;
            }
            mid = (start+end)/2;
        }

        start = 0 ;  end = n-1;  mid = (start+end)/2;
         while(start<=end){
            if(arr[mid]==target){
                  last = mid;
                  start = mid+1;
            }else if(arr[mid]>target){
                end = mid-1;
            }else{
                start = mid+1;
            }
            mid = (start+end)/2;
        }
         p.first = first;
         p.second = last;
        
        return {p.first,p.second};

    }