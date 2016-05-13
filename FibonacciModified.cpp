a,b,n= map(int ,raw_input().split())
ar={}
ar[0]=a;
ar[1]=b;
for i in range(2,21):
    ar[i] = pow(ar[i-1],2)+ar[i-2]
print ar[n-1];