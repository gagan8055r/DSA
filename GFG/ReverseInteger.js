let x = 123;
let dig=0, ans=0;

while (x != 0) {
    dig = x % 10;      // Get the last digit of x
    ans = ans * 10 + dig; // Add the last digit to the reversed number
    x = Math.floor(x / 10);   
    // console.log(x);     // Remove the last digit from x
}

console.log(ans);     // Print the reversed number
