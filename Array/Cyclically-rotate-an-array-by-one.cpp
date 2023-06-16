void rotate(int arr[], int n)
{
    int x = arr[n-1];
    int i = n-1;
    int j = i-1;
    while(j>=0 && i>=0)
    {
        arr[i] = arr[j];
        j--;
        i--;
    }
    arr[i] = x;
}
