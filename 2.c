#include <stdio.h>


int gcd(int 100, int 50) {
	if (x == y)
	 return x; // ループを抜ける
	if (x > y) 
	 return gcd(x-y, y); // ループを続ける
	if (x < y) 
	 return gcd(x, y-x); // ループを続ける
}

int main ()


List<string> history = new List<string>();
int sum=0;
for (int i=1;i<=100;++i)
{
   if(i==1) history.Add(i.ToString()+"'s result is:1.");
   else
   {
     StringBuilder sub = new StringBuilder();

      for(int j=1;j<=i;++j)
      {
          if(j==i) sbu.Append(j.ToString());
          else
          {
            sub.Append(j.ToString()+"+");
          }
      }
    sum +=i;
    sbu.Append("'s result is:"+sum+Environment.NewLine);
   }
}
