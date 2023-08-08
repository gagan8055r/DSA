let arr=[1,5,7,-1,5]
let k=6,i,j,sum,count=0;
for(i=0;i<arr.length;i++)
{
   for(j=i+1;j<arr.length;j++)
   { 
    if(arr[i]+arr[j]==k)
  {
       count++;
    console.log(`${arr[i]},${arr[j]}`);

  }

   }
}
console.log(count);
