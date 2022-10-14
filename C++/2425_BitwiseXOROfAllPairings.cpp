 // Manish Singh Kushwaha
 // 14/10/2022

class Solution
{
    public:
  int xorAllNums(vector<int> &nums1, vector<int> &nums2)
        {
            int m=nums1.size();
            int n=nums2.size();
            int ans=0;
            int a=0;
                for(int i=0;i<m;i++)   
                   a^=nums1[i]  ;   //calculate xor of all elements array 1
                
            
            int b=0;
             for(int i=0;i<n;i++)
                 b^=nums2[i];    //calculate xor of all elements of array 2
          
            /*
			  Suppose we have array 1 length even and array 2 length odd .
			  for eg array 1 length = 4 and array 2 length = 3 .
			  then all elements of array 1 will come three times(odd times) in doing xor with all elements of array 2 
			  and elements of array 2 will come 4 times(even times) hence xor of the elements of array 2 will be practically zero.
			 */
            ans=(m%2)*b xor (n%2)*a;     //here we are doing the same if array length is odd we are doing mod 2 and multiplying with xor of all elements of other array
			                             // and if array length is even means the xor of all elements of other array will be zero 
            
            return ans;
          
        }  
 };
