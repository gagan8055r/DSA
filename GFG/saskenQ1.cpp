int main()
{

    int x=3;
    int y=7;
    int t=0;
    while(y!=0)
    {
        if(x<y)
        {
            swap(x,y);
        }
        t=x-y;
        x=y;
        y=t;
    }

cout<<x;
    return 0;
}
