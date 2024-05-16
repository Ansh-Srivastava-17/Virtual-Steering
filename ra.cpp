vector<string>checkSimilarPasswords(vector<string>&a, vector<string>&b)
{
int i, j ,k ,n=a.size();
vector<string>com;
for(int i=0 ;i<n,i++){
    j=0,k=0;
    int an=a[i].size();
    int bn=b[i].size();
    while(j<an && k<bn){
        if(a[i][j]=='z'){
            if(b[i][j]=='a' || b[i][k]=='z'){
                j++;
                k++;
            }
            else {
                j++
            }
        else if (a[i][j]==b[i][k] || a[i][j]+1==b[i][k]){
            j++;
            k++;

        }
        else {
            j++;
        }
    }
    if (k==bn){
        com.push_back("YES");
    }
    else {
        com.push_back("NO");
    }
    return com;
}

