void Append(Array &arr, int x)
{
    if(arr.length < arr.size)
    {
        arr.A[arr.length] = x;
        arr.length++;
    }
}
