int Solution::colorful(int A) {
    
    
    char st[20];
    sprintf(st,"%d",A);
    int n = strlen(st);
    map<long long,bool>vmap;
    
    for(int i=0;i<n;i++){
        long long mul=1;
        for(int j=i;j<n;j++){
            mul*=(long long)(st[j]-'0');
            if(vmap.find(mul)!=vmap.end()){
                return 0;
            }
            vmap[mul] = true;
        }
    }
    return 1;
}

