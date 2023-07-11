const arr=[2, 4, 1, 3, 5]
/Inversions in an array
const arr=[174, 165, 142, 212, 254, 369, 48, 145, 163, 258, 38, 360, 224, 242, 30, 279, 317, 36 ,191, 343, 289, 107, 41, 443, 265, 149, 447, 306 ,391, 230, 371, 351, 7, 102]
let count=0;
for(let i=0;i<arr.length;i++)
{
    for(let j=i+1;j<arr.length;j++)
    {
        if(arr[i]>arr[j])
        {
            count=count+1;
        }
    }
}
console.log(count);
