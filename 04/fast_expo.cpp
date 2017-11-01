int modexp(int a, int b)
{
 int r = 1;
 while(b > 0)
 {
	 if(b % 2 == 1)
	 	r = (r * 1LL * a) % m;
	 a = (a * 1LL * a) % m; //1LL typecasts variables to long long
	 b /= 2;
 }
 return r;
}
