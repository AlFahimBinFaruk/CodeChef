//https://toph.co/p/formatted-numbers
int main()
{
    string a;
    cin >> a;
    string ans="";
    int n=a.size();
    for(int i=0;i<n;i++){
        if((n-i)%3==0 and i>0){
            ans+=',';
        }
        ans+=a[i];
    }
    print(ans);
    
    return 0;
}
