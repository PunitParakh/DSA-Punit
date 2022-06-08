Qestion - https://www.codingninjas.com/codestudio/problems/873366?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website

Code -

pair<int,int> missingAndRepeating(vector<int> &A, int n)
{
	int missing=-1,doub=-1;

    sort(A.begin(),A.end());

    for(int i=1,j=1;j<=n;i++,j++)
    {
        if(A[j-1] != i){
            missing = i;
            j--;
        }
        else if(A[j] == i){
            doub = i;
            j++;
        }
    }
     
    if(missing == -1)
        missing = n;
    pair<int,int> ans(missing,doub);
    return ans; 
	
}
