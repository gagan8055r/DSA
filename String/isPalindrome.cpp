	int isPalindrome(string S)
	{
	   // int b[S];
	   int i=0,j=0;
	    for(i=0,j=S.length()-1;i<=j;i++,j--)
	    {
	        if(S[i]!=S[j])
	        {
	            return 0;
	        }
	    }
	    return 1;
	   
	}
