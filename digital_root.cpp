//https://practice.geeksforgeeks.org/problems/digital-root/1/?track=SPCF-Recursion&batchId=154

int digitalRoot(int n)
{
    if(n<10)
       return n;
    int sum=digitalRoot(n/10)+n%10;
    if(sum>9){
        digitalRoot(sum);
    }
    else
        return sum;
        
}
