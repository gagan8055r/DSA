const arr1=[10,12]
// const arr1=[1,3,5,7]  ///Merge with two arrays with same size
const arr2=[5,18,20]
// const arr2=[0,2,6,8,9]
const arr3=[]
let i,j,k=0;
for( i=0,j=0;i<arr1.length,j<arr2.length;)
{
    if(arr1[i]<arr2[j])
    {
         arr3[k]=arr1[i]
         k++;
         i++;
    }
    else
    {
        arr3[k]=arr2[j]
        k++;
        j++;
    }
    
}

i=0;
j=0;
k=0;
for( ;i<arr1.length;i++)
{
    arr1[i]=arr3[i]
}
for( ;j<arr2.length;j++)
{
    arr2[j]=arr3[i]
    i++;
}


console.log(arr1);
console.log(arr2);
